//
//  main.cpp
//  heap_sort
//
//  Created by Pranav Singhal on 16/12/19.
//  Copyright © 2019 Pranav Singhal. All rights reserved.
//  Revise max heap and insertion and how deletion of the root of the heap element sorts the heap!

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)  //1 based indexing
        cin>>a[i];
  /*  for(int i=2;i<=n;i++)  //implementing max heap by inserting elements one by one and comparing with their parents left to right apporach. o(nlogn) slower then heapify.
    {
        int t=i;
        while(t>1) //till t reaches the root
        {
        if(a[t/2]<a[t])  //swapping parent and daughter
        {
            int temp=a[t];
            a[t]=a[t/2];
            a[t/2]=temp;
            
        }
       
            //if swap does not take place then no need to go further up for that particular elemt insertion.
             else break;
            
            t=t/2;  //updating the parent
        }
     }*/
    
    //Heapifying technique to form heap of a set of numbers.
    
    
    //moving right to left.
    //o(n) hence faster then left to right heap creation.
    
    int p=n;
    while(p>=1)
    {
        int j=p;
        while(j<=n)
        {
        int l=2*j;
        int r=2*j+1;
        int large=j;
        if(l>n)
        {
            break;
            
        }
            
        if(a[large]<a[l] && l<=n)
            large=l;
        if(a[large]<a[r] && r<=n)
            large=r;
        if(large!=j)
        {
           
            swap(a[large],a[j]);
            j=large;
             
         }
            else
                break;
        }
        p--;
    }
    
    cout<<endl;
    cout<<"Max Heap:\n\n";
    for(int i=1;i<=n;i++)  //display of the max heap
        cout<<a[i]<<" ";
    
    cout<<endl<<endl;
    
    int t=n;
    
    while(t>1)  //deleting root by swapping it withlast element of root and reducing the size of heap by 1.
    {
        int temp=a[t];
        a[t]=a[1];
        a[1]=temp;
        t--;
        int j=1;
        while(j<=t)  //heapifying the new one less size heap.
        {
            int l=2*j;
            int r=2*j+1;
            int large=j;
            if(l>t)
                break;
            if(a[large]<a[l] && l<=t)
                large=l;
            if(a[large]<a[r] && r<=t)
                large=r;
            if(large!=j)
            {
               
                swap(a[large],a[j]);
                 j=large;
            }
            else //if parent is larger then it's heapified hence break.
                break;
        }
            
        
    }
    
    cout<<"Sorted Heap after deletion of root:\n\n";
    
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
    
    cout<<endl<<endl;
    
    
    
    
    
    return 0;
}
    
