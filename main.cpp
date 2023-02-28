#include <iostream>
using namespace std;

int main() {
  int x;
  srand(time(0));  //seed for get different random number
  x=rand();
  cout<<"\nx= "<<x;

  
  for(int i=0; i<=10; i++){
    x=rand()%2;
    cout<<"\nx= "<<x;
    if(x==0){
      cout<<"\nHeads";
    }else{
      cout<<"\nTails";
    }
  }
}