#include <iostream>
using namespace std;
int main(){
    int y,z,c,e;
    char x;
    cout<< "please enter a number between 1-3";
    cin >> y;
    x = (y==3)? 'you got no reward this time,  try again!'
            :(y==2)? 'you got 2 reward this time,  congrates!'
                :(y==1)? 'you got 1 reward this time,  not bad!' :'sorry it is out of range';
    cout << x ;
}
        