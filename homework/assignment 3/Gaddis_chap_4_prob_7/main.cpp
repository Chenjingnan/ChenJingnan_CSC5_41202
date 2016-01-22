/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 21, 2016, 14:30 PM
    Purpose: Time Calculator
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
    float number,minute,hour,day;
    
    cout<<"Enter a number of seconds"<<endl;
    cin>>number;
    
    
    if (number>=60&&number<3600)
    {
        minute=number/60;
        cout<<"The minutes are"<<minute<<endl;
    }
    else if (number>=3600&&number<86400)
    {
        hour=number/3600;
        cout<<"The hours are "<<hour<<endl;
    }
    else if (number>=86400)
    {
        day=number/86400;
        cout<<"The days are "<<day<<endl;
    }
  
    return 0;
}

