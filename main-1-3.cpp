#include <iostream> 
#include "Person.h"
using namespace std;

extern PersonList deepCopyPersonList(PersonList pl);

int main() {
    int size = 3;
    PersonList original;
    original.numPeople = size;
    original.people = new Person[size];
        
    for (int i = 0; i < size; i++) {
        original.people[i].name = "Jane Doe";
        original.people[i].age = 1;
    }
    for (int i = 0; i < size; i++) {
        cout << "Person " << i << ": " << original.people[i].name << "Age: " << original.people[i].age << endl;
    }

    cout << "Copied: " << endl;
    PersonList copy = deepCopyPersonList(original);
    for (int i = 0; i < size; i++) {
        cout << "Person " << i << ": " << copy.people[i].name << "Age: " << copy.people[i].age << endl;
    }

    delete[] original.people;
    delete[] copy.people;

    return 0;
}