//
// Created by Laszlo Hunor on 07.10.2021.
//

#include "List.h"
#include <iostream>
using namespace std;

List::List() {
    //cout<<"constructor"<<endl;
    this->first= nullptr;
}

List::~List() {
    //cout<<"destructor"<<endl;
    while (first!= nullptr){
        Node*temp=first;
        first=first->next;
        delete temp;
    }
    nodeCounter=0;
}

bool List::exists(int d) const {
    int i=0;
    Node*temp=first;
    while (i!=nodeCounter)
    {
        if(temp->value==d){
            return true;
        }
        temp=temp->next;
        i++;
    }
    return false;
}

int List::size() const {
    cout<<nodeCounter;
    return 0;
}

bool List::empty() const {
    if(first== nullptr){
        return true;
    }
    return false;
}

void List::insertFirst(int d) {
    first=new Node(d, first);
    ++nodeCounter;
}

int List::removeFirst() {
     first=first->next;
    return 0;
}

void List::remove(int d, List::DeleteFlag df) {
    
}

void List::print() const {
    Node* it=first;
    cout<<"[";
    while (it!= nullptr)
    {
        cout<<it->value<<" ";
        it=it->next;
    }
    cout<<"]"<<endl;
}