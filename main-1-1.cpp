#include <iostream> 
#include "Person.h"
using namespace std;


extern Person* createPersonArray(int n);

int main() {
int size = 3;
Person *people = createPersonArray(size);

for (int i = 0; i < size; i++) {
cout << "Person" << i << "; " << people[i].name << ", " << people[i].age << endl;
}

delete[] people;

return 0;
}