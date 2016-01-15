/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 13, 2016, 08:30 PM
    Purpose: Average Rainfall   
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    string month1;
    string month2;
    string month3;
    float rain1;
    float rain2;
    float rain3;
    float average;
    
    cout<<"Enter the name of the first month"<<endl;
    getline(cin, month1);
    
    cout<<"Enter the name of the second month"<<endl;
    getline(cin, month2);
    
    cout<<"Enter the name of the third month"<<endl;
    getline(cin, month3);

    
    cout<<"Enter the amount of rain that fell in the first month "<<endl;
    cin>>rain1;
    
    cout<<"Enter the amount of rain that fell in the second month "<<endl;
    cin>>rain2;
    
    cout<<"Enter the amount of rain that fell in the third month "<<endl;
    cin>>rain3;

    
    average=(rain1+rain2+rain3)/3;
    
    cout<< setprecision(2)<<fixed<<showpoint;
    cout<<" The average rainfall for " <<month1<<", "<<month2<<" and "
            <<month3<<" is "<<average<<" inches. "<<endl;
    
    return 0;
}
