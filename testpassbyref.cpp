#include <iostream>
using namespace std;
void hi(int& a , int& b){
        a=b;
        cout<< a<< "," << b<<endl;
    }
int main(){
    int c,d;
    c = 50;d=90;
    int y;
    int & x = y;
    x=12;
    cout <<x << '\t' << y<< endl;
    hi( c ,d);
    return 0;

}