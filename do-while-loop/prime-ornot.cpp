#include<iostream>
using namespace std;

int main() {
    
    int n;
    bool isPrime = true;
    cin >> n;

    int i = 2;

    do {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
        i++;
    } while (i <= n);

    if (isPrime == true) {
        cout << "Number is prime\n";
    } else {
        cout << "Number is non-prime\n";
    }
    
    return 0;
}
