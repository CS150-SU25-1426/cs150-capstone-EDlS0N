#ifndef BOBATEA_H
#define BOBATEA_H

#include <string>
#include <iostream>
using namespace std;

class BobaTea {
private:
    string name;
    int quantityInStock;

public:
    BobaTea();
    BobaTea(string name, int quantity);
    
    string getName() const;
    int getQuantity() const;
    
    void setName(string name);
    void setQuantity(int quantity);
    
    bool operator==(const BobaTea& other) const;
    friend ostream& operator<<(ostream& os, const BobaTea& tea);
};

#endif