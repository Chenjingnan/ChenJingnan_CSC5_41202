/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 11, 2016, 11:30 AM
    Purpose: Display table and compare swaps
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    unsigned char pf=70;//Pass-Fail point=70%
    unsigned short score;//Score
    
    cout<<"Input the score for pass-fail "<<endl;
    cin>>score;
    
    cout<<"The score is "<<static_cast<int>(score)<<"%"<<endl;
    cout<<"You "<<(score>=pf?"Pass":"Fail")<<endl;
    
    return 0;
}

