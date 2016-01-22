/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 21, 2016, 14:30 PM
    Purpose: Mass and Weight 
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int weight,mass;
    
    cout<<"Enter an object’s mass"<<endl;
    cin>>mass;
    
    weight=9.8*mass;
    
    cout<<"The object's weight is "<<weight<<endl;
    
    if (weight>1000)
        cout<<"The object is too heavy."<<endl;
    else if (weight<10)
        cout<<"The object is too light."<<endl;
  
    return 0;
}

