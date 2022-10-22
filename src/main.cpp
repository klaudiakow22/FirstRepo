#include "equalwords.hpp"

#include <iostream>

using namespace std;

int main()
{

    string s;
    string P;

    cout << "Enter word s: " << endl;
    getline (cin, s);

    cout << "Enter word P: " << endl;
    getline (cin, P);

    cout << isTheSame(s, P) << endl;

return 0;

}