/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 21, 2016, 14:30 PM
    Purpose: Change for a Dollar Game 
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
    float pennie,nickel,dimes,qrters,total;
    
    cout<<"Enter the number of coins required to make exactly one dollar"<<endl;
   
    cout<<"Enter the number of pennies."<<endl;
    cin>>pennie;
    cout<<"Enter the number of nickels."<<endl;
    cin>>nickel;
    cout<<"Enter the number of dimes. "<<endl;
    cin>>dimes;
    cout<<"Enter the number of quarters. "<<endl;
    cin>>qrters;
    
    total=pennie*0.01f+nickel*0.05f+dimes*0.1f+qrters*0.25f;
    
    if (total==1)
        cout<<"Congratulation! You win the game!"<<endl;
    else if (total>1)
        cout<<"The amount is more than one dollar."<<endl;
    else if (total<1)
        cout<<"The amount is less than one dollar."<<endl;
  
    return 0;
}

