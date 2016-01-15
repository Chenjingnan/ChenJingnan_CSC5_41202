/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 13, 2016, 08:30 PM
    Purpose:Test Average  
 */

//System Libraries
#include <iostream>
#include <iomanip>


using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    float score1;
    float score2;
    float score3;
    float score4;
    float score5;
    float average;
    
    cout<<"Enter your five test scores"<<endl;
    
    cout<<"Enter first score "<<endl;
    cin>>score1;
    
    cout<<"Enter second score "<<endl;
    cin>>score2;
    
    cout<<"Enter third score "<<endl;
    cin>>score3;
    
    cout<<"Enter fourth score "<<endl;
    cin>>score4;
    
    cout<<"Enter fifth score "<<endl;
    cin>>score5;
    
    average=(score1+score2+score3+score4+score5)/5;
    
    cout<< setprecision(1)<<fixed<<showpoint;
    cout<<"The average score is "
            <<average<<endl;
 
    return 0;
}
