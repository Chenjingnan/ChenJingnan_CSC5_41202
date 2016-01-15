/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 13, 2016, 08:30 PM
    Purpose:Miles per gallon
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    float miles;
    float gallon;
    float MPG;
    
    cout<<"Enter the number of gallons of gas the car can hold"<<endl;
    cin>>gallon;
    cout<<"Enter the number of miles the car can be driven on a full tank"<<endl;
    cin>>miles;
    
    MPG=miles/gallon;
    
    cout<<"The number of miles that may be driven per gallon of gas is "
            <<MPG<<endl;
    
    
    return 0;
}
