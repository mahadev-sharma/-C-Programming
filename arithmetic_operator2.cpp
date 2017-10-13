
/*Write a program that asks the user to input
a value of length expressed in inches, convert
it to centimeters and print in the console.*/
#include<iostream>
using namespace std;

main()
{
    cout << "So enter the number in celsious : " ;

    float ceLsious;

    cin >> ceLsious;

    cout << "value in celsious is : " << ceLsious << endl ;

    cout << "value in kelvin is : "  <<  ( ceLsious + 273.15 ) << endl ;

    cout << "value in fehranhit is : "  <<  ( ceLsious +32 )  << endl ;


}
