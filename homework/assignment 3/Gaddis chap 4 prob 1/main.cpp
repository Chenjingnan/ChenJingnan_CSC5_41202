/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 21, 2016, 14:30 PM
    Purpose: Minimum/Maximum
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
    int number1, number2;
    
    cout<<"Enter two numbers "<<endl;
    cout<<"Enter number1 : "<<endl;
    cin>>number1;
    cout<<"Enter number2 : "<<endl;
    cin>>number2;
    
    if (number1>number2)
        cout<<"The larger number is "<<number1<<endl;
    if (number1<number2)
        cout<<"The larger number is "<<number2<<endl;
    
    
    
    return 0;
}

