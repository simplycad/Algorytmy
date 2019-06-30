#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

struct LN {
	int w;
	int k;
	int n;
	
	LN(int wart, int KK, int mn):w(wart),k(KK),n(mn){}
};

	bool comp(const LN& a, const LN& b){  
		
		return (a.w<b.w);
	}

int main() {
	

	vector<LN>dane;
	
	int n2[]={1,512,256,128,64,32,16,8,4,2,1};

	ifstream plikWe("LN.IN");

	int lp=4,w,k,n;
	if(plikWe.is_open()){
		
		for(int i=0; i<lp; i++){
			plikWe>>k>>n;
			dane.push_back(LN(0,k,n));
		}
		plikWe.close();
	}
			
	else cout<<"Blad"<<endl;
	
	for(int i=0; i<lp; i++)
	dane[i].w=dane[i].k*n2[dane[i].n];
	
	sort(dane.begin(), dane.end(),  comp);
	
	for(int i=0; i<lp; i++)
		cout<<dane[i].w<<"	"<<dane[i].k<<"	"<<dane[i].n<<endl;
	
	
	return 0;
}
