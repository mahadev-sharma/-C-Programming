#include<iostream>

using namespace std;
//pointers are ordinar variable that can store addresses of variables

main()
{
    int var = 5;

    int a = 20;

    cout << &var << endl;

    cout << *&var << endl;

    cout << "a = " << a << endl;

    int * const p = &var;//constant pointer

    const int *p2 = &a;//cant change value

    const int * const p3 = &a;//cant  change value and adress of pointer
   // int *p;//just used to inform this variable is pointer that is used to point adress of another variable


   // p = &var;

    cout << p << endl;

    cout << *p << endl;//astreak is used to retrieve(get) value from indicated pointed area in our memory(adress)

   //*p = 20;

   //var = 70;
  // p = &a;

   *p = 60 ;

   cout << "var = " << var << endl;

   cout << "*p = " << *p << endl;
   cout << "a = " << a << endl;


    return 0;


}
