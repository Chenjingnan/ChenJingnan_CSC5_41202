/* 
 * File:   main.cpp
 * Author: Jingnan Chen
 * Created on January 20, 2016, 08:58 AM
 * purpose: play rock-paper-scissor game with computer
 */

//system Libraries
#include <iostream>
#include <cstdlib>//rand function
#include <ctime>//time to set the random number seed
using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv){
    
    cout<<endl<<"The Rock-Paper-Scissor Game"<<endl<<endl;
    
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    char computr;
    char player;
    
    do{
        cout<<"What is your move P,R,S?"<<endl;
        cin>>player;
        player=toupper(player);
        
    }while (!(player=='P'||player=='R'||player=='S'));
    
    do{
        computr=rand()%4+80;
        
    }while (computr=='Q');
    
    
    
    cout<<"The computer played "<<computr<<endl;
    cout<<"The player move "<<player<<endl;
    
    
    
   
   //Exit stage right
    return 0;

}
