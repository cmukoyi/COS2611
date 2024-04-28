#include<iostream>
#include<cstdlib>
#include"List.h"



using namespace std;

List::List(){
    head = NULL;
    curr = NULL;
    temp = NULL;
}

void List::AddNode(int addData){
nodePtr n = new node;
n->next = NULL;
n->Data = addData;
if (head != NULL){
    curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
       curr->next = n;
   
}else
{
     head = n;
}


}

void List::DeleteNode(int delData){
    nodePtr delPtr = new node;
    curr = head;
    temp = head;
    while (curr != NULL && curr->Data != delData )
    {
        temp = curr;
        curr = curr->next;
    }
    if (curr == NULL){
        cout << "Not found" << endl;
        delete delPtr;

    }else   
    {
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
        if(delPtr == head){
            head= head->next;
            temp = NULL;
        }
    delete delPtr;
    
    cout << "The value " << delData << " was deleted \n";
        
    }
      

}

void List::PrintList(){
    curr = head;
    cout<< "Printing node data.." << endl; 
    while (curr != NULL )
    {
        cout << curr->Data << endl;
        curr = curr->next;
    }

    

}

