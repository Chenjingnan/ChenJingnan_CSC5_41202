/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 13, 2016, 08:30 PM
    Purpose: Celsius to Fahrenheit  
 */

//System Libraries
#include <iostream>
#include <iomanip>


using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    float F;
    float C;
    
    cout<<" How many is the Celsius temperatures ?"<<endl;
    cin>>C;

    F=1.8*C+32;
    
    cout<<"The Fahrenheit temperature is "<<F<<endl;
    
    return 0;
}
