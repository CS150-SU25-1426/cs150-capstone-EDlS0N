#include "BobaTeaList.h"

BobaTeaList::BobaTeaList() {
}

void BobaTeaList::addTea(string name, int quantity) {
    BobaTea newTea(name, quantity);
    teas.push_back(newTea);
}

bool BobaTeaList::editTea(string name) {
    for (int i = 0; i < teas.size(); i++) {
        if (teas[i].getName() == name) {
            string newName;
            int newQuantity;
            
            cout << "Enter new name: ";
            getline(cin, newName);
            cout << "Enter new quantity: ";
            cin >> newQuantity;
            cin.ignore();
            
            teas[i].setName(newName);
            teas[i].setQuantity(newQuantity);
            return true;
        }
    }
    return false;
}

bool BobaTeaList::deleteTea(string name) {
    for (int i = 0; i < teas.size(); i++) {
        if (teas[i].getName() == name) {
            teas.erase(teas.begin() + i);
            return true;
        }
    }
    return false;
}

void BobaTeaList::showAll() const {
    if (teas.size() == 0) {
        cout << "No teas in inventory." << endl;
        return;
    }
    
    for (int i = 0; i < teas.size(); i++) {
        cout << teas[i] << endl;
    }
}

bool BobaTeaList::operator==(const BobaTeaList& other) const {
    if (teas.size() != other.teas.size()) {
        return false;
    }
    
    for (int i = 0; i < teas.size(); i++) {
        if (!(teas[i] == other.teas[i])) {
            return false;
        }
    }
    return true;
}

ostream& operator<<(ostream& os, const BobaTeaList& list) {
    if (list.teas.size() == 0) {
        os << "Empty tea list";
    } else {
        for (int i = 0; i < list.teas.size(); i++) {
            os << list.teas[i];
            if (i < list.teas.size() - 1) {
                os << "\n";
            }
        }
    }
    return os;
}