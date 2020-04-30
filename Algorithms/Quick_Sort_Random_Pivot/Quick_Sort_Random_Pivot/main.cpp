//
//  main.cpp
//  Quick_Sort_Random_Pivot
//
//  Created by Pranav Singhal on 17/12/19.
//  Copyright © 2019 Pranav Singhal. All rights reserved.
// Quick Sort in which the pivots are selected randomly in the list during the partitioning.

#include<iostream>
#include<time.h>
using namespace std;

int partition(int a[],int l,int h)
{
    int i=l;
    int j=h;
    while(i<j)
    {
        do{
            i++;
        }while(a[l]>a[i]);
        do{
            if(i>j)
                           break;
            j--;
           
            
        }while(a[l]<a[j]);
        if(i<j)
            swap(a[i],a[j]);
    }
    swap(a[l],a[j]);
    return j;
    }
// intialises random pivot by swapping random index between low and high with the pivot.
int partition_r(int a[],int l,int h)
{
    srand(time(NULL));
    int random=l+rand()%(h-l);
    swap(a[random],a[l]);
    return partition(a,l,h);
}

void quicksort(int a[],int l,int h)
{
    if(l<h)
    {
        int p=partition_r(a,l,h);
        quicksort(a,l,p);
        quicksort(a,p+1,h);
        
        
    }
}


int main()
{
    int n;
    cin>>n;
    int a[n+1];
    a[n]=INT_MAX;
    for(int i=0;i<n;i++)
        cin>>a[i];
    quicksort(a,0,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 143;
}
