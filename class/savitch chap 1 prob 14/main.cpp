/* 
 * File:   main.cpp
 * Author: Jingnan Chen
 * Created on January 7, 2016, 10:25 AM
 * purpose: How far does it drop
 */

//system Libraries
#include <iostream>//I/O Library
#include <cstdlib> //Random function location
#include <cmath> // Math funcyions
#include <ctime> // Time to set the random seed
#include <iomanip> //Format Library
using namespace std;

//User Libraries

//Global Constant
const float GRAVITY=32.174f;//Sea Level Earth Acceleration Constant ft/sec^2

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv){
    //Set the random number seed
    srand (static_cast<unsigned int>(time(00)));
    
    //Declare variables
    float drpTime, distance;// Time in sec and Distance in feet
    
    //Inputting the time with a random number
    drpTime=rand()%11+10;//[10,20]secs
    
    //Calculate the number of fellow perpetrators
    distance=0.5f*GRAVITY*drpTime*drpTime;
    
    //Output the results
    cout<<"Drop Time="<<drpTime<<"(sec)"<<endl;
    cout<<"Free Fall Distance="<<distance<<"(ft)"<<endl;
            
   //Exit stage right
    return 0;

}
