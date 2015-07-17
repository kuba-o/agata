#include <iostream>
#include <vector>
using namespace std;

vector <int> dziel1;
vector<int> dziel2;
void dzielniki(int liczba, vector<int>& v);
int pomocnicza=0;
int liczba1,liczba2;
int main(int argc, char const *argv[]) {
	//zczytac dwie liczby
	//sprawdzamy dzielnik 1 i 2 i porownujemy
	cin>>liczba1;
	cin>>liczba2;

	dzielniki(liczba1, dziel1);
	for(int i=0;i<dziel1.size();++i)
	//cout<<"test";
		cout<<dziel1[i]<<endl;
	dzielniki(liczba2,dziel2);
	for(int i=0;i<dziel2.size();++i)
		cout<<dziel2[i]<<endl;
	
	for(int i=0;i<dziel1.size();++i){
		for(int j=0;j<dziel2.size();++j){
			if(dziel1[i]==dziel2[j]){
				pomocnicza=dziel1[i];
			}
		}
	}
	cout<<"dzielnik to: "<<pomocnicza<<endl;
	/*
	for(int i=dziel1.size()-1;i>-1;--i){
		for(int j=dziel2.size()-1;j>-1;--j){
			if(dziel1[i]==dziel2[j]){
				cout<<"dzielnik to: "<<dziel1[i]<<endl;
				break;
			}
		}
	}
	*/

	return 0;

}

void dzielniki(int liczba, vector<int>& v){
	for(int i=1;i<=liczba;i++){
		if(liczba%i==0){
			v.push_back(i);
		}
	}
	
}