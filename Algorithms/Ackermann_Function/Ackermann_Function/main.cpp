//
//  main.cpp
//  Ackermann_Function
//
//  Created by Pranav Singhal on 05/12/19.
//  Copyright © 2019 Pranav Singhal. All rights reserved.
//

#include<bits/stdc++.h>
using namespace std;

int A(int m,int n) //Ackermann Function Definition as per the book
{
    if(m==0)
        return n+1;
    if(n==0)
        return A(m-1,1);
    return A(m-1,A(m,n-1));
}

int main()
{
    int m,n;
    cin>>m>>n;
    cout<<A(m,n)<<endl;
    
}
