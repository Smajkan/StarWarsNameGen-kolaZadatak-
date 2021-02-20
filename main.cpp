#include<iostream>
#include<string>
using namespace std;


void genIme(string ime, string prezime, string djprez, string rodjgrad){

//3slImena+2SlGradaRodj
string fName,cityN,starwarsName;
fName=ime.substr(0,3);
cityN=rodjgrad.substr(0,2);
starwarsName=fName+cityN;
//---------------------------------


string lName, grrodj, prezimefin;

lName=djprez.substr(0,2);
grrodj=rodjgrad.substr(0,3);

prezimefin=lName+grrodj;

cout<<"Vase StarWars ime glasi:"<<starwarsName<<" "<<prezimefin<<endl;
}


int main()
{
  string ime,prezime,djprez,rodjgrad;
  cout<<"Molimo Vas unesite ime:";
  cin>>ime;
  cout<<"Molim Vas unesite prezime:";
  cin>>prezime;

  cout<<"Molim Vas upisite majcino djevojacko prezime:";
  cin>>djprez;
  cout<<"Molim Vas upisite grad u kojem ste rodjeni:";
  cin>>rodjgrad;
  cout<<endl;
  

  genIme(ime, prezime, djprez, rodjgrad);


}