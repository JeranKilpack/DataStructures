//
//  LinearNode.hpp
//  DataStructures
//
//  Created by Kilpack, Jeran on 2/20/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef LinearNode_hpp
#define LinearNode_hpp

#include <stdio.h>

template <class Type>
class LinearNode : public Node<Type>
{
protected:
    LinearNode<Type> * next;
public:
    LinearNode();
    LinearNode(Type data);
    LinearNode(Type data, LinearNode<Type> * next);
    //methods
    void setNextNode(LinearNode<Type> * next);
    LinearNode<Type> * getNextNode();
};

template <class Type>
LinearNode<Type> :: LinearNode() : Node<Type>()
{
    this->next = nullptr;
}
//this constructor is used to create a refrence to a instance with data.
template <class Type>
LinearNode<Type> :: LinearNode(Type data) : Node<Type>(data)
{
    this->next = nullptr;
}
// this constructor is used to create a refrence to a instance with data and a known link.
template <class Type>
LinearNode<Type> :: LinearNode(Type data, LinearNode<Type> * next) : Node<Type>(data)
{
    this->next = next;
}
//Acessor methods
template <class Type>
void LinearNode<Type> :: setNextNode(LinearNode<Type> * nextNodePointer )
{
    this->next = nextNodePointer;
}

template <class Type>
LinearNode<Type> * LinearNode<Type> :: getNextNode()
{
    return next;
}

#endif /* LinearNode_hpp */
