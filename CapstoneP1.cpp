#include "BobaTea.h"

BobaTea::BobaTea() {
    name = "Unknown";
    quantityInStock = 0;
}

BobaTea::BobaTea(string name, int quantity) {
    this->name = name;
    this->quantityInStock = quantity;
}

string BobaTea::getName() const {
    return name;
}

int BobaTea::getQuantity() const {
    return quantityInStock;
}

void BobaTea::setName(string name) {
    this->name = name;
}

void BobaTea::setQuantity(int quantity) {
    this->quantityInStock = quantity;
}

bool BobaTea::operator==(const BobaTea& other) const {
    return name == other.name;
}

ostream& operator<<(ostream& os, const BobaTea& tea) {
    os << "BobaTea [" << tea.name << ", Stock: " << tea.quantityInStock << "]";
    return os;
}