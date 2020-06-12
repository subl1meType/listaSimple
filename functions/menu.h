#pragma once
#ifndef headers
#include <iostream>
using namespace std;
#endif

int selection(){
    int option;

    cout << "Select an option: " << endl;
    cout << "1.- Add element" << endl;
    cout << "2.- Add after an element: " << endl;
    cout << "3.- Delete element" << endl;
    cout << "4.- Show list" << endl;
    cout << "0. Exit" << endl;
    cin >> option;

    return option;
}