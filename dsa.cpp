#include <iostream>
using namespace std;


bool isprime(int n){
  if(n<=1)
  return false;
  for(int i=2; i<n; i++){
    if(n%i==0){
      return false;
    }
  }
}

int main(){
  int n;
  cin>>n;

  if(isprime(n)){
    cout<<"this is prime number"<<endl;

    
  }else{
      cout<<"this is not prime number";
    }


  

}