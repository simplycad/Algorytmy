//Grzegorz Janik IiE 17/18N gr1 - zadanie zaliczeniowe

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void dziel(int p, int q){
int cyfra, reszta;
  
vector<int>cyfry,reszty;
  
cout<<endl<<"Licznik: "<<p<<endl<<endl<<"Mianownik: "<<q<<endl<<endl<<"Iloraz: ";
  
cyfra=p/q;
reszta=p%q;
  
cout<<cyfra<<'.';
if(reszta==0) cout<<reszta<<endl;
else{
   
bool koniec=false, okres=false;
    
while(!koniec&&!okres){
reszty.push_back(reszta);
    reszta*=10;
    cyfra=reszta/q;
    cyfry.push_back(cyfra);
    reszta%=q;

if(reszta==0){
koniec=true;
    
for(int i=0; i<cyfry.size(); ++i)
    cout<<cyfry[i];
    cout<<endl<<endl;
      }
      
vector<int>::iterator szukaj=find(reszty.begin(), reszty.end(), reszta); // do wyszukiwania w tablicy wykorzystano iterator
if(szukaj!=reszty.end()){

okres=true;

int index=distance(reszty.begin(), szukaj);
        
for(int i=0; i<index; ++i)
	cout<<cyfry[i];
	cout<<'(';
        
for(int i=index; i<cyfry.size(); ++i)
    
	cout<<cyfry[i];
    cout<<')'<<endl<<endl;}
}}}

int main(){
  
  int p, q;
  
  cout<<"Podaj licznik"<<endl;
  cin>>p;
  cout<<"Podaj mianowik"<<endl;
  cin>>q;
  dziel(p, q);
  
  return 0;
}