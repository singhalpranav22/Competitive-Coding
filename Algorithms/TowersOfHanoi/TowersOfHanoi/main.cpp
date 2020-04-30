// Game of The Towers of Hanoi based on a Mythic Legend.
//  main.cpp
//  TowersOfHanoi
//
//  Created by Pranav Singhal on 05/12/19.
//  Copyright © 2019 Pranav Singhal. All rights reserved.
//

#include<iostream>
using namespace std;

enum tower {A='A',B='B',C='C'};

void TowersOfHanoi(int n,tower x,tower y,tower z) //Shifting from X to Y using Z as the auxilliary rod.
{
//    Move the n top diks from tower x to tower y
    if(n){
        TowersOfHanoi(n-1,x,z,y); //Shft n-1 rods from X to Z
        cout<<"Move top disk from tower "<<char(x)<<" to top of the tower "<<char(y)<<endl; //shift single disk from X TO B
        TowersOfHanoi(n-1,z,y,x); //shift n-1 rods from z to y using x as the auxilliary disk
    }
}

int main()
{
    int n;
    cin>>n;
    TowersOfHanoi(n,A,B,C);
    return 143;
}
