// Program importuje oraz prządkuje imiona z pliku imiona.in

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	
	vector<string> imiona;
	
	string imie;
	ifstream Dane;
	Dane.open("IMIONA.IN", ios_base::in);
	if(Dane. is_open()){
		
		while(Dane>>imie){
			
			string::iterator iZnakM = find(imie.begin(), imie.end(),'-');
			
			while(iZnakM!=imie.end()){
				
				imie.erase(iZnakM);
	 			iZnakM = find(imie.begin(),imie.end(),'-');
			}
			
			for (int i=1;i<imie.size();i++)	{
				imie[i]	= tolower(imie[i]);
				imie[0] = toupper(imie[0]);	}
			
			
	//cout<<imie<<endl;
	
			imiona.push_back(imie);
		}
			Dane.close();
		}
	
	else{
	cout<<"B³¹d programu"; 
	return 99;
	}
	
	sort(imiona.begin(), imiona.end()); //sortowanie include <algorithm>
	for(int i=0; i<imiona.size(); i++){
		
		cout<<imiona[i]<<endl;
	}
	
	return 0;
}


// import danych
// lista , uporzadkowac
