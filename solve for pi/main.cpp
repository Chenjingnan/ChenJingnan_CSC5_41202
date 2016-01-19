/* 
 * File:   main.cpp
 * Author: Jingnan Chen
 * Created on January 19, 2016, 11:58 AM
 * purpose: Calculate pi
 */

//system Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv){
    const unsigned char nTerms=13;
    float etox=1,x;//e^x
    //input the value x
    cout<<"Input x of e^x computation"<<endl;
    cin>>x;
    
    //calculate e^x
    for (int n=1; n<=nTerms; n++){
        unsigned int factN=1;
        for (int i=1;i<=n;i++){
            factN*=i;
        }
        //calculate e^x with the above factorial
        etox+=pow(x,n)/factN;
    }
    
    cout<<"The exact value of e^"<<x<<"="<<exp(x)<<endl;
    cout<<"The approx value of e^"<<x<<"="<<etox<<endl;
        
   //Exit stage right
    return 0;

}
