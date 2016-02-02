/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on February 2nd, 2016, 08:20 AM
    Purpose: How big is the X you wanna print
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

//User Libraries

//Global Constants
const int COL=50;

//Function prototypes
    int fillAry(char [][COL],int);
    void prntAry(char [][COL],int,int);
   
    
//Execution Begins Here
int main(int argc, char** argv) {
    srand (static_cast<unsigned int>(time(0)));
    
    const int ROW=50;
    char array[ROW][COL];
    
    int row_col=fillAry(array,ROW);
    
    prntAry(array,ROW,row_col);

   

    return 0;
}



/******************************************************************************/
/*******************************Fill Array***********************************/
/******************************************************************************/
//Inputs:
//a->A 2 dimensional array
//ROW->number of rows in the array
//COL->number of columns in the array
//Outputs:
//a->List initialized with random 2 digit numbers
/******************************************************************************/
int fillAry(char a[][COL],int ROW){
    //randomly choose how many rows and columns
    int row_col=rand()%49+2;//[2,50]
    
    for(int row=0;row<row_col;row++){
        for(int col=0;col<row_col;col++){
            a[row][col]=' ';
        }
    }
    //fill the back slash part of x
    for(int row=0;row<row_col;row++){
        for(int col=0;col<row_col;col++){
            if (row==col)
                a[row][col]=(row_col-row)+48;
        }
    }
    //fill the forward slash part of x
    for(int row=0;row<row_col;row++){
        for(int col=0;col<row_col;col++){
            if ((row+col)==(row_col-1))
                a[row][col]=(row+1)+48;
        }
    }
    
    
    //SEND BACK how many cells are occupied
    return row_col;
}


/******************************************************************************/
/*******************************Print Array***********************************/
/******************************************************************************/
//Inputs:
//a->List
//n->Size of the array
//Outputs:
//a->Printed List
/******************************************************************************/
void prntAry(char a[][COL],int ROW,int rc){
    //loop and fill the array with random numbers
    cout<<endl;
    for(int row=0;row<rc;row++){
        for(int col=0;col<rc;col++){
                cout<<a[row][col];
        }
        cout << endl;
    }
    cout<<endl;
    
    
    
}


// character '0' = 48
//          '1' = 49