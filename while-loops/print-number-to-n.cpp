// print number to n

#include <iostream>
using namespace std;

int main()
{

    int n, count = 1;

    cout << "enther the value of n : ";
    cin >> n;

    while (count <= n)
    {

        cout << count << " ";
        count++;
    }
    cout << endl;

    return 0;
}