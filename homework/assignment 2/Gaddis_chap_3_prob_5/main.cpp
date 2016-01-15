/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 13, 2016, 08:30 PM
    Purpose: Male and Female Percentages   
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
    float male;
    float female;
    float total;
    float percent1;
    float percent2;
    
    cout<<"Enter the number of males registered in a class"<<endl;
    cin>>male;
    
    cout<<"Enter the number of females registered in a class"<<endl;
    cin>>female;
    
    total=male+female;
    percent1=male/total;
    percent2=female/total;
    
    
    cout<<"The percentage of males in the class "<<percent1<<endl;
    
    cout<<"The percentage of females in the class "<<percent2<<endl;

    
    return 0;
}
