#pragma once

class node{
    int element;
    node* next;
    public:
    node(int e, node* n){
        element = e;
        next = n;
    }
    friend class list;
};