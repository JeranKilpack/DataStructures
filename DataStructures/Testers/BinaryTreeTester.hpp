//
//  BinaryTreeTester.hpp
//  DataStructures
//
//  Created by Kilpack, Jeran on 3/29/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include "../Model/Nodes/BinaryTreeNode.hpp"
#include "../Model/Structures/NonLinear/BinarySearchTree.hpp"
#include <iostream>
using namespace std;
class BinaryTreeTester
{
private:
    BinarySearchTree<int> testTree;
    
public:
    void testNodes();
    void doTreeStuff();
};

#endif /* BinaryTreeTester_hpp */

