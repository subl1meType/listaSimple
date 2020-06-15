#pragma once
#ifndef header
#include <iostream>
#include "node.h"
#endif

class list{
    node* first;
    public:
    list(){
        first = NULL;
    }
    bool insert(int e);
    bool insertAfter(int e, int af);
    bool exist(int e);
    bool show();
    bool del(int e);
};

bool list::insert(int e){
    if(exist(e)) return false;
    if ((first = new node(e, first)) == NULL){
        return false;
    }
    return true;
}

bool list::exist(int e){
    node* temp;
    temp = first;

    while (temp != NULL){
        if (temp->element == e){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

bool list::show(){
    if(first == NULL) return false;
    node* temp;
    temp = first;
    while(temp != NULL){
        std::cout << temp->element << ", ";
        temp = temp->next;
    }
    return true;
}

bool list::insertAfter(int e, int af){
    if (exist(af)) return false;
    if(!exist(e)) return false;

    node* temp;
    node* nuevo;
    temp = first;

    //one element
    if (temp->next == NULL){
        while(temp != NULL){
            if(temp->element == e){
                nuevo = new node(af, NULL);
                temp->next = nuevo;
            }
            temp = temp->next;
        }
    }
    else{
        while(temp != NULL){
            if(temp->element == e){
                nuevo = new node (af, temp->next);
                temp->next = nuevo;
            }
            temp = temp->next;
        }
    }

    return true;
}

bool list::del(int e){
    if(!exist(e)) return false;

    node* temp;
    node* temp2;
    temp = first;

    if(temp->element == e){
        if(temp->next == NULL){
            delete temp;
            first = NULL;
        }
        else{
            temp2 = temp->next;
            first = temp2;
            delete temp;
        }
    }
    else {
        while(temp != NULL){
            if(temp->element == e){
                temp2->next = temp->next;
                delete temp;
            }
            temp2 = temp;
            temp = temp->next;
        }
    }

    return true;
}