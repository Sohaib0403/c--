// print number to n

#include<iostream>
using namespace std;

int main() {
    
     int n;
     bool isPrime = true;
      cin >> n;

      for(int i =2 ; i<= n ;i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
      }

      if(isPrime == true ){
        cout << "no . prime \n";
      }
      else{
        cout << "no. is non-Prime\n";
      }
   
  
return 0;
 
}