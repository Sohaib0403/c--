// print sum of odd numbers 1 to n

#include<iostream>
using namespace std;

int main() {
    
     int n,oddSum = 0;

     cout << "enther the value of n : " ;
     cin>>n;

    for(int i = 1; i <= n ; i++){
       if(i%2 != 0){
           
            oddSum +=i;
        }

     }

    cout << oddSum << endl;

return 0;
 
}