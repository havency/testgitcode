#include <iostream>
#include <cstdlib>
#include "extern.h"
#include "globalvar.h"
using namespace std;
int main(){
    int y;
    if (cin>>y)
    {
        func1 (y,12);
        func2(y,40);
    }
    else
    {
        func1(y,70);
    }
    return 0;
    
}