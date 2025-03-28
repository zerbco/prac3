#include "Person.h"
using namespace std;


Person* createPersonArray(int n)  {
    Person *personarray = new Person[n];

    for (int i = 0; i < n; i++) {
        
        personarray[i].name = "John Doe";
        personarray[i].age = 0;
    }
    return personarray;
}