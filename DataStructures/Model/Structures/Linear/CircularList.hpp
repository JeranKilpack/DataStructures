//
//  CircularList.hpp
//  DataStructures
//
//  Created by Kilpack, Jeran on 2/26/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef CircularList_h
#define CircularList_h

#include "List.hpp"
#include "../../Nodes/DoubleNode.hpp"

template <class Type>
class CircularList : public List<Type>
{
private:
    DoubleNode<Type> * front;
    DoubleNode<Type> * end;
    
    DoubleNode<Type> * findNode(int index);
    
public:
    CircularList();
    ~CircularList();
    
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type remove(int index);
    Type getFromIndex(int index);
    int getSize() const;
}

template <class Type>
CircularList<Type> :: CircularList()
{
    front->setPrevious(end);
    front->setNext(end);
    
    end->setPrevious(front);
    end->setNext(front);
}

template <class Type>
CircularList<Type> :: ~CircularList()
{
    DoubleNode<Type> * current = front;
    while (this->front != nullptr)
    {
        front = front->getNext();
        delete current;
        current = front;
    }
}

template <class Type>
DoubleNode<Type> * CircularList<Type> :: findNode(int index)
{
    assert (index >= 0 && index < this->size);
    DoubleNode<Type> * nodeToFind;
    
    if (index < this->size / 2)
    {
        nodeToFind = this->front;
        for (int position = 0; position < index; position++)
        {
            nodeToFind = nodeToFind->getNext();
        }
    }
    else
    {
        nodeToFind = this->end;
        for (int position = this->size - 1; position >= index; position--)
        {
            nodeToFind = nodeToFind->getPrevious();
        }
    }
    
    return nodeToFind;
}


#endif /* CircularList_h */
