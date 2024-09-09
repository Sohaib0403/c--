// find number is negative or positive 

#include<iostream>
using namespace std;

int main() {
    int n;

    cout << " enter the value of n : ";
    cin >> n;

    if(n >= 0){
        cout << "the entered number n is positive : " << n;
    }
    else{
        cout<< "the enterred number n is negative : " << n ;
    }

    return 0;

}