//Write a program that asks the user to input three different line of text (3 strings)
// then using cout print the combination of the three in the console.

#include <iostream>

using namespace std;

main () {

    string text1, text2, text3;

    cout << "Enter first text: ";
    cin >> text1;

    cout << "Enter second text: ";
    cin >> text2;

    cout << "Enter third text: ";
    cin >> text3;

    cout << "The combination of the three is :" ;
    cout << text1 << " " << text2 << " " << text3;
}
