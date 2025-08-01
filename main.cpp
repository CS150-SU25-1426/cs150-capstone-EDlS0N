#include <iostream>
#include "BobaTeaList.h"
using namespace std;

void showMenu() {
    cout << "\n=== BOBA TEA INVENTORY SYSTEM ===" << endl;
    cout << "1. Add Tea" << endl;
    cout << "2. Edit Tea" << endl;
    cout << "3. Delete Tea" << endl;
    cout << "4. Show All Teas" << endl;
    cout << "5. Exit" << endl;
    cout << "Choose an option: ";
}

int main() {
    BobaTeaList teaList;
    int choice;
    
    while (true) {
        showMenu();
        cin >> choice;
        cin.ignore();
        
        if (choice == 1) {
            string name;
            int quantity;
            
            cout << "Enter tea name: ";
            getline(cin, name);
            cout << "Enter quantity: ";
            cin >> quantity;
            cin.ignore();
            
            teaList.addTea(name, quantity);
            cout << "Tea added successfully!" << endl;
        }
        else if (choice == 2) {
            string name;
            cout << "Enter tea name to edit: ";
            getline(cin, name);
            
            if (teaList.editTea(name)) {
                cout << "Tea edited successfully!" << endl;
            } else {
                cout << "Tea not found. Please try again." << endl;
            }
        }
        else if (choice == 3) {
            string name;
            cout << "Enter tea name to delete: ";
            getline(cin, name);
            
            if (teaList.deleteTea(name)) {
                cout << "Tea deleted successfully!" << endl;
            } else {
                cout << "Tea not found. Please try again." << endl;
            }
        }
        else if (choice == 4) {
            cout << "\nCurrent Inventory:" << endl;
            teaList.showAll();
        }
        else if (choice == 5) {
            cout << "Goodbye!" << endl;
            break;
        }
        else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }
    
    return 0;
}