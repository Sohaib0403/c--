#include<iostream>
using namespace std;

int main() {
    
    int n;
    int i = 1;

    cout << "Enter the value of n: ";
    cin >> n;

    do {
        cout << i << endl;
        i++;
    } while (i <= n);

    cout << endl;

    return 0;
}
