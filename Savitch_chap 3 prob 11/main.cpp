/* 
 * File:   main.cpp
 * Author: Jingnan Chen
 * Created on January 19, 2016, 10:25 AM
 * purpose: n!
 */

//system Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv){
    //Set the random number seed
    unsigned int n, factN=1;//N and N!
    
    
    cout<<"Enter the number you would like to compute the factorial n!"<<endl;
    cin>>n;
    
    for (int i=1; i<=n; i++){
        factN*=i;
    }
     
    cout<<n<<"!="<<factN<<endl;
    
   //Exit stage right
    return 0;

}
