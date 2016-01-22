/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 21, 2016, 09:30 PM
    Purpose: Days in a Month 
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
    int month, year;
    
    cout<<"Enter the month (an integer in the range of 1 through 12)";
    cout<<"and the year"<<endl;
    cout<<"Enter the month"<<endl;
    cin>>month;
    cout<<"Enter the year"<<endl;
    cin>>year;
    
    if (month==1)
        cout<<"31 days"<<endl;
    if (month==3)
        cout<<"31 days"<<endl;
    if (month==4)
        cout<<"30 days"<<endl;
    if (month==5)
        cout<<"31 days"<<endl;
    if (month==6)
        cout<<"30 days"<<endl;
    if (month==7)
        cout<<"31 days"<<endl;
    if (month==8)
        cout<<"31 days"<<endl;
    if (month==9)
        cout<<"30 days"<<endl;
    if (month==10)
        cout<<"31 days"<<endl;
    if (month==11)
        cout<<"30 days"<<endl;
    if (month==12)
        cout<<"31 days"<<endl;
    
    if (month==2)   
        {
        if (year%100==0)
        
            {
            if (year%400==0)
            cout<<"29 days"<<endl;
            else 
            cout<<"28 days"<<endl;
            }
    
        else if (year%100!=0)
            {
            if (year%4==0)
            cout<<"29 days"<<endl;
            else 
            cout<<"28 days"<<endl;
            }
        }

  
    return 0;
}

