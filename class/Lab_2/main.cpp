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
    //Declare and initialize variables
    unsigned char ovrTime=40;
    unsigned char payRate=10;
    unsigned short hrsWrkd;
    
    cout<<"Input the Hours Worked for Paycheck"<<endl;
    cin>>hrsWrkd;
    
    cout<<"The hours worked is "<<static_cast<int>(hrsWrkd)<<" (hrs)"<<endl;
    
    unsigned short payCheck=(hrsWrkd>=ovrTime)?
        ovrTime*payRate+(hrsWrkd-ovrTime)*1.5*payRate:
        hrsWrkd*payRate;
    cout<<"Your Paycheck = $ "<<payCheck<<endl;
    
    
    return 0;
}

