//
//  main.cpp
//  Linked_List
//
//  Created by Pranav Singhal on 17/12/19.
//  Copyright © 2019 Pranav Singhal. All rights reserved.
// Code to implement Linked list in c++ using malloc and displaying the output of the linked list as enetered by the user.

#include<bits/stdc++.h>
using namespace std;
// A node structure of Linked List.
struct node{
    int a;
    struct node* next;
};

int main()
{
    cout<<"Linked List implementation !!\n";
    struct node* head; //Head node to store the starting address of the linked to be used in case we want to traverse through the list or delete element or insert some element in the middle.
    head=(struct node*)malloc(sizeof(struct node));
    head=NULL; //Initially initialising it to NULL.
    char ch='y'; //To be entered by the user in the loop for loop termination by the user.
    int i=1; //Just to make the code designed.
    struct node* p; //A node created to tranverse in the linked list ahead in the program.
    p=(struct node*)malloc(sizeof(struct node));
    while(ch=='y' || ch=='Y') //If user eneter anything other then y then he/she don;t wants to enter any other element.
    {
        cout<<"Enter link "<<i++<<"=";
        int n;
        cin>>n; //Enter the integer value you want to enter in the node.
        
        struct node *temp; //creating a temporary node.
        temp=(struct node*)malloc(sizeof(struct node));
        temp->a=n; //storing n in the temporary node (n is entered by the user).
        temp->next=NULL; //Initiallising next pointer of the temp node as NULL as in the list end pointer always points to the NULL.
        
        if(head==NULL) //It means the list is empty.
        {
            head=temp; //Intialising head as temp i.e. the firts node.
            p=temp; //Initialising p as temp as it would be used ahead.p is basically are permanent node to be used in the next iteration.
            p->next=NULL; //Initialising the p's next pointer as NULL as it's the head right now so it doesn't matter.
            
        }
        //if the list isn't empty.
        else{
        p->next=temp; //p->next which was initially empty is pointing to the address of temp which is the new node entered by the user.
        p=temp; //p is initiallised as temp now.
        }
        p->next=NULL; //As the end of the list is empty hence p->next should point to null.
        cout<<"Want to enter More data in the list?(Enter Y or y)=";
        cin>>ch;
        
        
        
    }
    p=head;
    i=1;
    cout<<endl;
    cout<<"Linked List is as follows:\n";
    //Loop for output of the list.
    while(1)
    {
        cout<<i++<<"="<<p->a;
        cout<<endl;
        p=p->next;
        if(p->next==NULL) //When the end of the list is found then that next pointer points to null and we would break the loop as given below.
        {
            cout<<i++<<"="<<p->a;
            cout<<endl;
            break;
        }
    }
    return 143; //You know naa ;)
    
    
    
}
