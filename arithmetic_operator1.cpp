
/*Write a program that asks the user to input
a value of length expressed in inches, convert
it to centimeters and print in the console.*/
#include<iostream>
using namespace std;

main()
{
    cout << "Would you like to do lenght conversion from inch to cm" << endl ;

    cout << "So enter the number in inch : " ;

    int inch,cm;

    cin >> inch;

    cm = inch *2.54;

    cout << "value in cm is : " << cm;
}
