#include <iostream>
using namespace std;

class str{ public: str* a;};
str b;
int main()
{
    int a=90;
    //int* ap= &a;//
    b.a = new str;
    int*ap =new int;
    *ap= 80;
    cout<< a << endl;
    cout << ap<< endl;
    cout << *ap<< endl;
    
    /*delete ap;
    cout<< a << endl;
    cout << ap<< endl;
    ap = nullptr;
    cout<< a << endl;
    cout << ap<< endl;*/

    
}