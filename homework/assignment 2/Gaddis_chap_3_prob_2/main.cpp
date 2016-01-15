/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 13, 2016, 08:30 PM
    Purpose: Stadium Seating 
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
    float classA=15;
    float classB=12;
    float classC=9;
    float numberA;
    float numberB;
    float numberC;
    float amount;
    
    cout<<"How many tickets for classA of seats were sold? "<<endl;
    cin>>numberA;
    cout<<"How many tickets for classB of seats were sold? "<<endl;
    cin>>numberB;
    cout<<"How many tickets for classC of seats were sold? "<<endl;
    cin>>numberC;
    
    amount=classA*numberA+classB*numberB+classC*numberC;
    
    cout<< setprecision(2)<<fixed<<showpoint;
    cout<<"The amount of income generated from ticket sales is "
            <<amount<<endl;
 
    return 0;
}
