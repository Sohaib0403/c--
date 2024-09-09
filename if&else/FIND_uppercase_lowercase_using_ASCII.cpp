
// find character is in upper case or lower case using ASCII
// A-B = 65 to 90 - 26 LETTERS
// a-b = 97 to 122

#include<iostream>
using namespace std;

int main() {

    char ch;

    cout << " ennter students marks ";
    cin >> ch;

    if(ch >= 65 && ch <= 90){ // using AND operators
    cout << "given character " << ch << " is in uppercase\n" ;
       
    }
     else{
        cout << "given character " << ch << " is in lowercase\n" ;
    }



    return 0;

}