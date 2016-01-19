/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 19, 2016, 08:30 AM
    Purpose: Menu
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
    unsigned short nSoltn;//Problem solution to display;
    bool reDsply=true;//Exit program when false
    
    
    //Menu to display solution
    do{
        //Input problem to display, i.e. Menu
        cout<<"Assignment 3 problem set"<<endl;
        cout<<"Type 1 to Display Problem 1"<<endl;
        cout<<"Type 2 to Display Problem 2"<<endl;
        cout<<"Type 3 to Display Problem 3"<<endl;
        cout<<"Type anything else to exit "<<endl;
        cin>>nSoltn;
        //solutions to all the problems
        switch(nSoltn){
            case 1:{
                cout<<endl<<"Solution to Problem 1"<<endl;
                break;
            }
            case 2:{
                cout<<endl<<"Solution to Problem 2"<<endl;
                break;
            }   
            case 3:{
                cout<<endl<<"Solution to Problem 3"<<endl;
                break;
            }
            default:{
                cout<<"Exiting the program "<<endl;
                reDsply=false;
            }
        }
    }while (reDsply);
        
    
    return 0;
}

