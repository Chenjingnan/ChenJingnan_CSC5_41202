/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 11, 2016, 9:00 AM
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
    bool x=true;
    bool y=true;
    
    //Create Heading
    cout<<"X Y !X !Y x^y x&&y x||y etc...."<<endl;
    
    //first row
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x^y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"  ";
    cout<<(x||y?'T':'F')<<"  "<<endl;
    
    //second row
    x=true; y=false;
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x^y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"  ";
    cout<<(x||y?'T':'F')<<"  "<<endl;
    
    //third row
    x=false; y=true;
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x^y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"  ";
    cout<<(x||y?'T':'F')<<"  "<<endl;
    
    //fourth row
    x=false; y=false;
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x^y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"  ";
    cout<<(x||y?'T':'F')<<"  "<<endl;
    
    
    
    
    
    
    
    //Swap using temp
    
    //Swap using exclusive or operator
    
    
    //Exit stage right
    return 0;
}

