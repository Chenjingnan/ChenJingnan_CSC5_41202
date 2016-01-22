/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 21, 2016, 14:30 PM
    Purpose: Magic Dates
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
    int month, day, year;
    
    cout<<"Enter a month (in numeric form)."<<endl;
    cin>>month;
    cout<<"Enter a day."<<endl;
    cin>>day;
    cout<<"Enter a two-digit year."<<endl;
    cin>>year;
    
    if (year==month*day)
        cout<<" The date is magic. "<<endl;
    else 
        cout<<" The date is not magic. "<<endl;
    
    return 0;
}

