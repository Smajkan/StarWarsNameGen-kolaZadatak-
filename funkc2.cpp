#include<iostream>
using namespace std;

void racunFunkcije(int x, int x1)
{
  int rjfunkc, counter;
  counter=0;
  for(int i=x;i<x1+1;i++){
    counter+=1;
    //x^2 + 2x - 5
    rjfunkc=i*i+2*i-5;
    cout<<"Rj. za ["<<counter<<"] broj gdje je vr. X["<<i<<"] je: "<<rjfunkc<<endl;
  }
}

int main()
{
  int x, x1;

  restart:
  cout<<"Unesite poc. opsega: ";
  cin>>x;
  cout<<"Unesite kraj opsega: ";
  cin>>x1;

  if(x>x1 || x==x1){
    cout<<"Pocetak opsega ne moze biti manji od kraja opsega. Pokusajte ponovo";
    cout<<endl;
    goto restart;
    
  }
  else{
    racunFunkcije(x,x1);
  }


return 0;
}