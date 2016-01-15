/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 13, 2016, 08:30 AM
    Purpose: Monthly Payment
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
    float paymnt;//Interest Payment
    float payRate=0.14/12;
    unsigned int number=48;
    unsigned int Loan=10000;
    
    paymnt=(payRate* pow(1+payRate,number)*Loan)/(pow(1+payRate,number)-1);
    
    cout<<"The payment is "<<paymnt<<endl;
    
    return 0;
}
