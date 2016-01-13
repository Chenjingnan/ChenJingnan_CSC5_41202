/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 13, 2016, 10:30 AM
    Purpose:Room Capacity
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    const unsigned char MAXCAP=35;//max capacity of the room
    unsigned short stsUtil;//seats utilized
    char delta;//difference between capacity and utilization
    
    cout<<"How many seats are being utilized in BE200?"<<endl;
    cin>>stsUtil;
    
    delta=MAXCAP-stsUtil;
    
    cout<<"Maximum room capacity of BE200= "<<static_cast<int>(MAXCAP)
            <<" seats"<<endl;
    if (delta>=0){
        cout<<"Class will be held, ";
        cout<<static_cast<int>(delta)<<" available seats remain";
    }
    else{
        cout<<"Room capacity has been exceeded, ";
        cout<<static_cast<int>(-delta)<<" students need to leave"<<endl;
    }
    
    
    return 0;
}
