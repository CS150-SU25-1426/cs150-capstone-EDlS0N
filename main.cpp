#include <iostream>
#include "BobaTea.h"
using namespace std;

int main() {
    BobaTea tea1;
    BobaTea tea2("Taro", 25);
    BobaTea tea3("Thai Tea", 15);
    
    cout << tea1 << endl;
    cout << tea2 << endl;
    cout << tea3 << endl;
    
    cout << "tea2 == tea3? " << (tea2 == tea3) << endl;
    
    tea1.setName("Matcha");
    tea1.setQuantity(20);
    cout << tea1 << endl;
    
    return 0;
}