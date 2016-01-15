/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 14, 2016, 10:50 AM
    Purpose:Calculate the Square Root
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    float qwntity=0.1f;
    float sum=0;
    int nloops=10000000;//number of times to loop
    float answer;
    
    for (int i=1;i<=nloops;i++){
        sum+=qwntity;
    }
    
    answer=nloops*qwntity;
    
    cout<<"The product answer = "<<answer<<endl;
    cout<<"The sum answer = "<<sum<<endl;
    cout<<"The percent error = "<<(answer-sum)/answer*100<<"%"<<endl;
    
    return 0;
}
