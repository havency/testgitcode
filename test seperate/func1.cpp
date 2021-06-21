#include <iostream> 
#include <cstdlib>
using namespace std;
extern int k;
int func1(int a, int b)
{
    if(a+b<=90){
        k=a*b;
        cout<<k<<endl;
    }
    else
    {
        k=100;
        cout<<k<<endl;
    }
    
}
