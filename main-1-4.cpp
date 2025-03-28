#include <iostream> 
#include "Person.h"
using namespace std;

extern PersonList createPersonList(int n);
PersonList shallowCopyPersonList(PersonList pl);

int main() {
    int size = 3;
    PersonList original = createPersonList(size);

    for (int i = 0; i < size; i++) {
        cout << "Person " << i << ": " << original.people[i].name << "Age: " << original.people[i].age << endl;
    }

    cout << "Copied: " << endl;
    PersonList copy = shallowCopyPersonList(original);
    for (int i = 0; i < size; i++) {
        cout << "Person " << i << ": " << copy.people[i].name << "Age: " << copy.people[i].age << endl;
    }

    delete[] original.people;

    return 0;
}