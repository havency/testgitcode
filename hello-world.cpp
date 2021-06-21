/*
 * File: hello-world.cpp
 * A common program used to demo a new language
 */
#include <iostream>
using namespace std;
                    // Load info of a Standard C++ library
                    // Standard C++ namespace
                    // Program's entry point
/* Major program codes */
int main() 
{
    int larger;
    int k,g,s;
    int a = 200;
    int b = 400;
    cout << "Hello World!" << endl;
    cout << "this is my first program, this is just for testing" << endl;
    cout << '1'
         <<'2'
         << endl;
    cout << a << endl;
    cout << b << endl;
    cout << a*b << endl;
    cout << a+b << endl;
    cout << 17%5 <<endl;
    int x,y,you,me;
    x=4;
    y=you=12;
    cout << "x equals to" << "\t"<<x << endl;
    cout << "y equals to" << "\t"<< y << endl;
    cout << "you equals to" << you << endl;
    cout << "me equals to" << me << endl;
    cout << "test for backspace" << "\b" << "testing" <<endl;
    cout << s;
    cin >> k >> g ;
    if (k>50 && g<k)//if test
    {
        cout << k << '\n '<< "is the number k you entered"<<endl;
        cout << k-g << '\n '<< "is the result"<< endl;
    }
    else if (k<50 || g<50)
    {
       cout << "the number  is smaller than 50, please give me a number larger than 50";
    } 
    else if (!g)
    {cout << "g cannot be zero";}
    else {
        cout << "the program cannot run under this situation ErROr";
    }
    
    larger = (x > y) ? x : y;
    cout << larger << endl;

    
        
    
    return 0;
}