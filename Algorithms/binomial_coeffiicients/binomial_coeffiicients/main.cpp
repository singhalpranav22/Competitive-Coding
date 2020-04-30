//
//  main.cpp
//  binomial_coeffiicients
//
//  Created by Pranav Singhal on 04/12/19.
//  Copyright © 2019 Pranav Singhal. All rights reserved.
//

#include<bits/stdc++.h>
using namespace std;

long long int bin(long long int n,long long int r)
{
    if(r==0)  //Base case
        return 1;
    if(r==n)  //Base case
        return 1;
    return bin(n-1,r)+bin(n-1,r-1); //Recursion
}

int main()
{
    long long int m,n;
    cin>>m>>n;
    cout<<bin(m,n)<<endl;
    return 0;
}

