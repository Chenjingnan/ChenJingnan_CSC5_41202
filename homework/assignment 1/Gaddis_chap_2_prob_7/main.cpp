/* 
 * File:   main.cpp
 * Author: Jingnan Chen
 * Created on January 10, 2016, 7:11 PM
 * Purpose:Ocean Levels
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
int main()
{
    double perYear=1.5, Levels;
    
    Levels=perYear*5;
    cout<<"The number of millimeters higher than "<<
        "the current level that the ocean’s level "<<
        "will be is "<<Levels<<" millimeters in 5 years"<<endl;
    
    Levels=perYear*7;
    cout<<"The number of millimeters higher than "<<
        "the current level that the ocean’s level "<<
        "will be is "<<Levels<<" millimeters in 7 years"<<endl;
    
    Levels=perYear*10;
    cout<<"The number of millimeters higher than "<<
        "the current level that the ocean’s level "<<
        "will be is "<<Levels<<" millimeters in 10 years"<<endl;
    
    return 0;
}

