/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 25, 2016, 11:30 AM
    Purpose:Room Capacity
 */

//System Libraries
#include <iostream>
#include <cstdlib>//srand and rand function
#include <ctime>//time to set the random number seed
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //set the random number seed
    srand (static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables
    const unsigned short GAMES=36000;//max number of throws
    //Frequency of our dice throws
    unsigned short wins=0,losses=0;

    
    for (int game=1;game<=GAMES;game++){
        char die1=rand()%6+1;//number between [1,6]
        char die2=rand()%6+1;//number between [1,6]
        char sum=die1+die2;
        if (sum==2||sum==3||sum==12)losses++;
        else if (sum==7||sum==11)wins++;
        else {
            //roll again
            bool kpRln=true;
            do {
                die1=rand()%6+1;//number between [1,6]
                die2=rand()%6+1;//number between [1,6]
                char sum2=die1+die2;
                if (sum==sum2)wins++;kpRln=false;
                if (sum2==7)losses++;kpRln=false;
            }while (kpRln);
        }
            
    }
    
    cout<<"Out of "<<GAMES<<" played"<<endl;
    cout<<"You won "<<wins<<" games and "<<endl;
    cout<<"You lost "<<losses<<" games"<<endl;
    
    return 0;
}

