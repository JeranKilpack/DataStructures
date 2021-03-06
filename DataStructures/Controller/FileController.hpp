//
//  FileController.hpp
//  DataStructures
//
//  Created by Kilpack, Jeran on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../Data/CrimeData.hpp"
#include "../Model/Structures/Linear/LinkedList.hpp"
#include "../Testers/LinkedListTester.hpp"
#include "../Model/Structures/NonLinear/AVLTree.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static LinkedList<CrimeData> readDataToList(string fileName);
};

#endif /* FileController_hpp */
