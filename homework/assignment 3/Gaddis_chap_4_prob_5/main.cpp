/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 21, 2016, 14:30 PM
    Purpose: Body Mass Index 
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int weight, height, BMI;
    
    cout<<"A program that calculates and displays a person’s"; 
    cout<<"body mass index (BMI). "<<endl;
    cout<<"Enter the weight of a person"<<endl;
    cin>>weight;
    cout<<"Enter the height of a person"<<endl;
    cin>>height;
    
    BMI=703*weight/ pow(height,2); 
    
    if (BMI>=18.5&&BMI<=25)
        cout<<"The person has optimal weight."<<endl;
    else if (BMI<18.5)
        cout<<"The person is underweight."<<endl;
    else
        cout<<"The person is overweight."<<endl;
    
  
    return 0;
}

