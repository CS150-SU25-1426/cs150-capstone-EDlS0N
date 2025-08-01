#ifndef BOBATEALIST_H
#define BOBATEALIST_H

#include <vector>
#include "BobaTea.h"
using namespace std;

class BobaTeaList {
private:
    vector<BobaTea> teas;

public:
    BobaTeaList();
    
    void addTea(string name, int quantity);
    bool editTea(string name);
    bool deleteTea(string name);
    void showAll() const;
    
    bool operator==(const BobaTeaList& other) const;
    friend ostream& operator<<(ostream& os, const BobaTeaList& list);
};

#endif