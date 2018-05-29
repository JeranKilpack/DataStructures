//
//  Controller.cpp
//  DataStructures
//
//  Created by Kilpack, Jeran on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

void Controller :: start()
{
//    BinaryTreeTester tree;
//    tree.doTreeStuff();
}
//
//void Controller :: testStacksAndQueues()
//{
//    TestStacksAndQueues myTest;
//    myTest.queueVersusList();
//    myTest.stackVersusQueue();
//    myTest.stackVersusList();
//}

void Controller :: findMaxAndMin()
{
    Timer searchTimer;
    searchTimer.startTimer();
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/jkil3536/Documents/Data Structures/DataStructures/DataStructures/Data/crime.csv");
    
    int minIndex = 0;
    int maxIndex = 0;
    
    for (int index = 0; index < myData.size(); index++)
    {
       if (myData [minIndex] > myData [index])
       {
           minIndex = index;
       }
        
       if (myData [maxIndex] > myData[index])
       {
            maxIndex = index;
       }
    }
    searchTimer.stopTimer();
    cout << "The smallest Crime stat is at " << minIndex << " and it is: " << myData[minIndex] << endl;
    cout << "The largest Crime stat is at " << maxIndex << " and it is: " << myData[maxIndex] << endl;
    searchTimer.displayInformation();
}
