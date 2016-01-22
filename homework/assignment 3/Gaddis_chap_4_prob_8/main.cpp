/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 21, 2016, 14:30 PM
    Purpose: Color Mixer 
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
    char color1,color2;
    char yellow,red,blue;
    
    cout<<"Enter the names of two primary colors to mix";
    cout<<"(red,blue,yellow)."<<endl;
    
    
    cout<<"Enter the first color."<<endl;
    cin>>color1;
    cin.ignore();
    color1=cin.get();
    
    cout<<"Enter the second color."<<endl;
    cin>>color2;
    cin.ignore();
    color2=cin.get();
    
    
    if (color1==red, color2==blue)
        cout<<"The secondary color is purple."<<endl;
    else if (color2==red, color1==blue)
        cout<<"The secondary color is purple."<<endl;
    else if (color1==red, color2==yellow)
        cout<<"The secondary color is orange."<<endl;
    else if (color2==red, color1==yellow)
        cout<<"The secondary color is orange."<<endl;
    else if (color1==blue, color2==yellow)
        cout<<"The secondary color is green."<<endl;
    else if (color2==blue ,color1==yellow)
        cout<<"The secondary color is green. "<<endl;
    else
        cout<<"ERROR!"<<endl;
    
    
    
    
    
    return 0;
}

   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
  

