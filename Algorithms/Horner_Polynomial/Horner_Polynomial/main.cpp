//
//  main.cpp
//  Horner_Polynomial
//
//  Created by Pranav Singhal on 05/12/19.
//  Copyright © 2019 Pranav Singhal. All rights reserved.
//

#include<bits/stdc++.h>
using namespace std;

int sum=0;   //Recursive Version Not working In Progress....
int horner(int a[],int k,int n,int x)
{
    if(k==n)
        return a[k];
    
    
    return a[k]*x+horner(a,k+1,n,x)*x;
    
    
    
}
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n+1;i++)
    {
        cout<<"a["<<n-i<<"]=";
        cin>>a[i];
    }
    
   int x;
    cout<<"x=";
    cin>>x;
    /*int sum=0;
    for(int i=0;i<n;i++)  //Iterative Horner's Polynomial
    {
        sum=sum+a[i];
        sum=sum*x;
        
    }
    sum=sum+a[n];*/
    cout<<endl<<horner(a,0,n,x);
    return 143;
}
