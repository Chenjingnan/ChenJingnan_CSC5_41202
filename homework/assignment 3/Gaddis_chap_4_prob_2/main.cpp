/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 21, 2016, 14:30 PM
    Purpose: Roman Numeral Convert
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
    int number;
    cout<<"Enter a number within the range of 1 through 10."<<endl;
    cin>>number;
    
    switch (number)
    {
        case 10:
            cout<<"X"<<endl;
            break;
        case 9:
            cout<<"IX"<<endl;
            break;
        case 8:
            cout<<"VIII"<<endl;
            break;
        case 7:
            cout<<"VII"<<endl;
            break;
        case 6:
            cout<<"VI"<<endl;
            break;
        case 5:
            cout<<"V"<<endl;
            break;
        case 4:
            cout<<"IV"<<endl;
            break;
        case 3:
            cout<<"III"<<endl;
            break;
        case 2:
            cout<<"II"<<endl;
            break;
        default:
            cout<<"I"<<endl;
    }
  
    
   
    return 0;
}

