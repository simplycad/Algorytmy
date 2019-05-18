// Konwerter liczb dziesietnych na system szesnastkowy

#include <iostream>

using namespace std;

int main(){
	
	int n;
	int hex[16]={0};
	string lhex[]={"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F"};
	string ldec[]={"0000", "0001","0010", "0011", "0100", "0101", "0110", "0111",
					"1000", "1001", "1010","1011","1100","1101","1110","1111"};
	
	
	cout<<"Podaj n: "<<endl;
	cin>>n;
	
	for(int i=0; i<8; i++)	{
		
		hex[i]=n%16;
		n=n/16;
	}
	cout<<"Liczba w systemie szesnastkowym"<<endl;
	cout<<"0x";
	
	for(int i=7; i>=0; i--)	{	
	cout<<lhex[hex[i]];
}
	
	cout<<endl;
	cout<<"Liczba w systemie binarnym"<<endl;

	for(int i=7; i>=0; i--)	
		cout<<ldec[hex[i]]<<" ";
	
	return 0;
}
