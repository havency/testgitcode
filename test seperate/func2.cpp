#include <iostream> 
#include <cstdlib>
using namespace std;
extern int k;
int func2( int a, int b)
{
    if (a>b){
        k=a+b;
        cout<<k<<endl;

    }
    else {
        k=500;
        cout<<k<<endl;
    }

}