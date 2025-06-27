// CPlusPlusAndCSharp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>  /* Noncompliant */

int main()
{
    std::cout << "Hello World!\n";
}

void f()
{
    clock();
    signed char a = 'a'; // Noncompliant, explicitly signed
    unsigned char b = '\r'; // Noncompliant, explicitly unsigned
    char c = 10; // Noncompliant
    unsigned char d = c; // Noncompliant, d is explicitly signed while c is not
    char e = a; // Noncompliant, a is explicitly signed while e is not
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

// Triggering Actions
