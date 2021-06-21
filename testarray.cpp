#include <iostream>
using namespace std;
int array1(int a[], int b)
{
}
int main()
{
    int x[3];
    int y = 0;
    int z[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    while (y < 3)
    {
        x[y] = y + 2 * y;
        cout << x[y] << endl;
        y += 1;
    }
    cout << z << endl;
    char s1[6] = {'h', 'k', 'u', 's', 't', 'z'};
    // At this point, s1 is still a simple char array
    for (int j = 0; j < 5; j++)
        cout << s1[j];
    cout << endl;
    s1[5] = '\0'; // Now, s1 is a C string
    cout << s1 << endl;

    return 0;
}
