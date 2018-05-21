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

#include <string>
#include "/Users/jkil3536/Documents/Data Structures/DataStructures/DataStructures/Model/Structures/Linear/LinkedList.hpp"
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static LinkedList<CrimeData> readDataToList(string filename);
};

#endif /* FileController_hpp */
