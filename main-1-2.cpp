#include <iostream> 
#include "Person.h"
using namespace std;

extern PersonList createPersonList(int n);

int main() {
    int size = 3; 
    PersonList list = createPersonList(size);

    for (int i = 0; i < size; i++) {
        cout << "Person " << i << ": " << list.people[i].name << "Age: " << list.people[i].age << endl;
    }

    delete[] list.people;

    return 0;
}