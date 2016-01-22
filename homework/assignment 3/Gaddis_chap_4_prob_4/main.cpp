/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 21, 2016, 14:30 PM
    Purpose: Areas of Rectangles 
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
    int length1,width1,length2,width2,area1,area2;
    
    cout<<"Enter the length and width of two rectangles"<<endl;
    cout<<"Enter the length of rectangle 1"<<endl;
    cin>>length1;
    cout<<"Enter the width of rectangle 1"<<endl;
    cin>>width1;
    cout<<"Enter the length of rectangle 2"<<endl;
    cin>>length2;
    cout<<"Enter the width of rectangle 2"<<endl;
    cin>>width2;
    
    area1=length1*width1;
    area2=length2*width2;
    
    if (area1<area2)
        cout<<"The rectangle 2 has the greater area."<<endl;
    else if (area1>area2)
        cout<<"The rectangle 1 has the greater area."<<endl;
    else
        cout<<"The areas of two rectangles are the same."<<endl;
    
  
    return 0;
}

