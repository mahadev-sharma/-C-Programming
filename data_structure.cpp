//data structure
#include <iostream>

using namespace std;

struct personalData
{
    string name;
    string surname;
    string telephoneNumber;
    short age;
}a,b;

int main()
{
    personalData person[5];
    a.age = 50;
    cout << a.age << endl;


    person[0].name = "mahadev";
    person[1].name = "pandey";
    person[0].surname = "sharma";
    person[0].telephoneNumber = "9924647905";
    person[0].age = 25;

    cout << person[0].name << endl;
    cout << person[0].surname << endl;
    cout << person[0].telephoneNumber << endl;
    cout << person[0].age << endl << endl;


    cout << (*person).name << endl;
    cout << (*&person[0]).name << endl;
    cout << person ->name << endl;//this person pointer is pointing to name
    cout << (person+1) -> name << endl;//this person pointer is pointing to name
    return 0;
}
