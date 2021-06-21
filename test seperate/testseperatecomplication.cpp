#include <iostream>
#include <cstdlib>
using namespace std;
extern int func1(int a, int b);
extern int func2(int a, int b);
int k;
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