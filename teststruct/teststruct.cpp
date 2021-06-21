#include <iostream>
#include <cmath>
#include "struct1.h"
using namespace std;
int main() 
{
    struct1 data1,data2;
    data1.a=2;
    data1.b=3;
    data1.c=4;
    data2.a=4;
    cout << "please input b and c for data2"<<endl;
    cin>> data2.b>>data2.c;
    cout <<data1.a<<data1.b<<data1.c<<data2.a<<data2.b<<data2.c<<endl;
    return 0;
}