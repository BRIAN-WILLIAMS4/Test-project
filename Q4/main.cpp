/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string removeVowels(const string& s) {
    string result;
    for (char c : s) {
        char l = tolower(c);
        if (!(l=='a'||l=='e'||l=='i'||l=='o'||l=='u'))
            result += c;
    }
    return result;
}

int main() {
    string s;
    getline(cin, s);
    cout << removeVowels(s);
    return 0;
}
