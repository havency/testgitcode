#include <iostream>     /* File: value.cpp */
using namespace std;
int damn(int x,int y,int z){
        if (x>y)
            return x+y+z ;
        else 
            return -1;

    }
void textgiven(int x){
    cout << "the value of x in this test is " << x<<endl;
}
    
int main() {
    textgiven(2);
    cout << damn(4,4,3);
    return -1;
    
}
