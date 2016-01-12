/* 
 * File:   main.cpp
 * Author: Jingnan Chen
 * Created on January 10, 2016, 8:50 PM
 * Purpose:Miles per Gallon
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
int main()
{
    double Miles, Gallons, MPG;
    
    Miles=375;
    Gallons=15;
    MPG=Miles/Gallons;
    
    cout<<"The number of miles per gallon the car gets is "<<
            MPG<<endl;
    
    
    return 0;
}

