# include <iostream>
# include <iomanip>
# include <windows.h>
# include <cstdio>
# include <cmath>

using namespace std;

int main(){
	
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), FOREGROUND_RED | FOREGROUND_INTENSITY );
	int input;
	double Pi=3.1415926548;

		cout<<"Precyzja 7: "<<setprecision(7)<<endl;
		cout<<"Pi = "<<Pi<<endl;
		cout<<fixed<<"Zmiennoprzecinkowa: "<<Pi<<endl;
		cout<<"Notacja "<<scientific<<Pi<<endl;
		cout<<endl;
		
		cout<<"Precyzja 10: "<<setprecision(10)<<endl;
		cout<<"Pi = "<<Pi<<endl;
		cout<<fixed<<"Zmiennoprzecinkowa: "<<Pi<<endl;
		cout<<"Notacja "<<scientific<<Pi<<endl;
		
		cout<<endl;
		cout<<fixed<<right;
		double r;
		for(int i=10; i<=100;i=i+10){
			r=sqrt(i);
			
			cout<<setw(6)<<setfill('.')<<i<<setfill(' ')<<setw(14)<<setprecision(3)<<r<<setw(23)<<setprecision(4)<<sqrt(r)<<endl;
		}
	
/*	cout<<"----------------------- "<<endl;
	cout<<"Podaj liczbe: "<<endl;
	cin>>input;
	

	cout<<"Liczba osemkowa: "<<oct<<input<<endl;
	cout<<"L. szesnastkowo: "<<hex<<input<<endl;
	cout<<"L. dziesietnie: "<<dec<<input<<endl;
	
	cout<<hex<<showbase<<uppercase<<input<<endl;
	cout<<nouppercase<<input<<endl;
	cout<<noshowbase<<input;

*/
	return 0;
}
