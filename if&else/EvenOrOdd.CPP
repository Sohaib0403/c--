// find number IS EVEN OR ODD

#include<iostream>
using namespace std;

int main() {
    int n;

    cout << " enter the value of n : ";
    cin >> n;

    if(n%2 == 0){
        cout << "the entered number n is Even : " << n;
    }
    else{
        cout<< "the enterred number n is odd : " << n ;
    }

    return 0;

}