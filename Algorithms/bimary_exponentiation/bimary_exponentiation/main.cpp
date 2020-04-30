//
//  main.cpp
//  binary_exponentiation
//
//  Created by Pranav Singhal on 07/12/19.
//  Copyright © 2019 Pranav Singhal. All rights reserved.
//

#include<bits/stdc++.h>
using namespace std;
//Make a diagram to know how it's working to gat a good idea !!
int binexp(int x,int n)
{
    if(n==0)
        return 1;
    int ans=binexp(x,n/2);
    if(n%2==0)
        return ans*ans;
    else
        return x*ans*ans;
}

int main()
{
    int x;
    int n;
    cin>>x>>n;
    cout<<binexp(x,n);
    return 143;
}
