#include "classes/list.h"
#include "functions/menu.h"
#include <iostream>
#include <unistd.h>
using namespace std;

int main(){

    list C;
    int option, value, value2;
    do{
        system("clear");
        option = selection();
        switch(option){
            case 1:
                cout << "Enter a value to add:";
                cin >> value;
                if(!C.insert(value)){
                    cout << "\n That value already exists. Try again.\n";
                    getchar();
                }
                break;
            case 2:
                C.show();
                cout << "\n\n Select a value: ";
                cin >> value;
                cout << "\n Enter a next value: ";
                cin >> value2;
                if(!C.insertAfter(value, value2)){
                    cout << "\nThe next value already exists or the selected value doesn't exists. Try again.\n";
                    getchar();
                }
                break;
            case 3:
                if(!C.show()){
                    cout << "\nList is empty.\n";
                    sleep(1);
                    break;
                }
                cout << "\n\n Select a value:";
                cin >> value;
                C.del(value);
                break;
            case 4:
                if(!C.show()){
                    cout << "\nList is empty.\n";
                    sleep(2);
                }
                break;
        }
    }while(option != 0);

    return 0;
}