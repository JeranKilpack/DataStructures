//
//  BinaryTreeNode.h
//  DataStructures
//
//  Created by Kilpack, Jeran on 3/27/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef BinaryTreeNode_h
#define BinaryTreeNode_h


#include "../../Nodes/BinaryTreeNode.hpp"
template <class Type>
class Tree
{
protected:
    BinaryTreeNode<Type> * root;
public:
    //Informational Methods
    virtual int getSize() = 0;
    virtual int getHeight() = 0;
    virtual bool isComplete() = 0;
    virtual bool isBalanced() = 0;
    //Data Methods
    virtual void insert(Type data) = 0;
    virtual bool contains(Type data) = 0;
    virtual void remove(Type data) = 0;
    //Traversals
    virtual void inOrderTraversal() = 0;
    virtual void preOrderTraversal() = 0;
    virtual void postOrderTraversal() = 0;
};

template <class Type>
class BinaryTreeNode : public Node<Type>
{
private:
    BinaryTreeNode<Type> * root;
    BinaryTreeNode<Type> * left;
    BinaryTreeNode<Type> * right;
    
public:
    BinaryTreeNode();
    BinaryTreeNode(Type data);
    
    void setRootNode(BinaryTreeNode<Type> * root);
    void setRightNode(BinaryTreeNode<Type> * right);
    void setLeftNode(BinaryTreeNode<Type> * left);
    
    BinaryTreeNode<Type> * getRootNode();
    BinaryTreeNode<Type> * getLeftNode();
    BinaryTreeNode<Type> * getRightNode();
    
};

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode() : Node<Type>()
{
    root = nullptr;
    right = nullptr;
    left = nullptr;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRootNode()
{
    return this->root;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRightNode()
{
    return this->right;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getLeftNode()
{
    return this->left;
}

template <class Type>
void BinaryTreeNode<Type> * setRootNode(BinaryTreeNode<Type> * newRoot)
{
    root = newRoot;
}

template <class Type>
void BinaryTreeNode<Type> * setRightNode(BinaryTreeNode<Type> * newRoot)
{
    right = newRoot;
}

template <class Type>
int BinarySearchTree<Type> :: getSize()
{
    int size = 0;
    
    size += calculatorSize(this->root);
    
    return size;
}

template <class Type>
int BinarySearchTree<Type> :: calculateSize(BinaryTreeNode<Type> * current)
{
    if(current != nullptr)
    {
        return calculateSize(current->getLeftNode()) + calculateSize(current->getRightNode()) + 1;
    }
    return 0;
}

template <class Type>
int BinarySearchTree<Type> :: getHeight()
{
    return calculateHeight(this->root);
}

template <class Type>
int BinarySearchTree<Type> :: calculateHeight(BinaryTreeNode<Type> * current)
{
    if (current != nullptr)
    {
        return max(calculateHeight(current->getLeftNode()), calculateHeight(current->getRightNode())) + 1;
    }
    return 0;
}

template <class Type>
bool BinarySearchTree<Type> :: isBalanced()
{
    return isBalanced(this->root);
}

template <class Type>
bool BinarySearchTree<Type> :: isBalanced(BinaryTreeNode<Type> * current)
{
    int leftHeight = 0;
    int rightHeight = 0;
    
    if(current == nullptr)
    {
        return true;
    }
    
    leftHeight = calculateHeight(current->getLeftNode());
    rightHeight = calculateHeight(current->getRightNode());
    
    int heightDifference = abs(leftHeight-rightHeight);
    bool leftBalanced = isBalanced(current->getLeftNode());
    bool rightBalanced = isBalanced(current->getRightNode());
    
    if (heightDifference <= 1 && leftBalanced && rightBalanced)
    {
        return true;
    }
    
    return false;
}

template <class Type>
bool BinarySearchTree<Type> :: isComplete()
{
    int index = 0;
    int size = getSize();
    
    return isComplete(this->root, index, size);
}

template <class Type>
bool BinarySearchTree<Type> :: isComplete(BinaryTreeNode<Type> * startNode, int index, int size)
{
    if(startNode == nullptr)
    {
        return true;
    }
    
    if(index >= size)
    {
        return false;
    }
    
    return (isComplete(startNode->getLeftNode(), 2 * index + 1, size) && isComplete(startNode->getRightNode(), 2 * index + 2, size));
}
