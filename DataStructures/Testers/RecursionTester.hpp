//
//  RecursionTester.hpp
//  DataStructures
//
//  Created by Kilpack, Jeran on 3/5/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef RecursionTester_hpp
#define RecursionTester_hpp

#include <iostream>
#include <string>
#include "../Controller/Tools/Timer.hpp"

using namespace std;
class RecursionTester
{
private:
    int fib(int start);
    string mystery(string word);
public:
    void testRecursionNumbers();
    
    void testRecursionString();
};

#endif /* RecursionTester_hpp */
//
//  BinaryTreeTester.h
//  DataStructures
//
//  Created by Kilpack, Jeran on 3/29/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef BinaryTreeTester_h
#define BinaryTreeTester_h

#include "../Model/Nodes/BinaryTreeNode.hpp"
#include "../Mode/Structures/NonLinear/BinarySearchTree.hpp"
#include <iostream>

class BinaryTreeTester
{
private:
    BinarySearchTree<int> testTree;
public:
    void doTreeStuff();
};

#endif 
