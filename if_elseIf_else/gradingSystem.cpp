// grading suystem use for grade students on the basis of marks

#include<iostream>
using namespace std;

int main() {

    int marks;

    cout << " ennter students marks ";
    cin >> marks;

    if(marks >= 90){
        cout << "Grade A\n";
    }
    else if(marks >= 80 && marks < 90){ // using AND operators
        cout<< "Grade B\n" ;
    }
    else if(marks >= 50 && marks < 80){ 
        cout<< "Grade C\n" ;
    }
     else{
        cout<< "Grade D\n" ;
    }



    return 0;

}