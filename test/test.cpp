#include "../src/equalwords.hpp"

#include <iostream>

using namespace std;

int main()
{

    string s = "hello";
    string P = "hello";

    isTheSame(s, P);

    if (s != P)
    {
        cout << "Fail. Words are not the same." << endl;    
        return 1;
    }
    
cout << "Test OK" << endl;
return 0;
 
}

