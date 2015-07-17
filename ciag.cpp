#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
	int liczba,wynik;
	cout<<"Wybierz liczbe z ciagu: "<<endl;
	
		cin>>liczba;
	while(liczba<1){
		cout<<"Podaj liczbe dodatnia";
		cin>>liczba;
	}

	int a,b,c;
	a=1;
	b=1;
	c=2;

	if(liczba==1)
		wynik=1;
	else if(liczba==2)
		wynik=1;
	else
	{ 
		for(int i=3;i<liczba;++i){

			a=b;
			b=c;
			c=a+b;
		}			
	}
	wynik=c;
	cout<<wynik<<endl;

	return 0;
	

}