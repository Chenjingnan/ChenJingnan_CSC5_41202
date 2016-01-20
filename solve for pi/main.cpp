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
const float PI=4*atan(1);

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv){
    
    cout<<endl<<"The finite sum for PI"<<endl;
    
   
    float apprxPI=1;//approximate value of PI to start
    unsigned int nTerms;
    char sign=-1;//alternating sign of the PI sequence
    
    cout<<"Input number of Terms to approximate PI"<<endl<<endl;
    cin>>nTerms;
    
    
    
    //calculate e^x
    for (int i=2,j=3; i<=nTerms; i++,j+=2){
        apprxPI+=(sign/static_cast<float>(j));
        sign*=-1;
                
    }
    
    apprxPI*=4;//multiply by 4 once to approximate PI
    
    cout<<"The exact value of PI= "<<PI<<endl;
    cout<<"The number of terms it took to approx PI= "<<nTerms<<endl;
    
    
   //Exit stage right
    return 0;

}
