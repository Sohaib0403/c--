
// find character is in upper case or lower case

#include<iostream>
using namespace std;

int main() {

    char ch;

    cout << " ennter students marks ";
    cin >> ch;

    if(ch >= 'a' && ch <= 'z'){ // using AND operators
        cout << "given character " << ch << " is in lowercase\n" ;
    }
     else{
       cout << "given character " << ch << " is in uppercase\n" ;
    }



    return 0;

}