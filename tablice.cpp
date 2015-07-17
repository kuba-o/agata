#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(int argc, char const *argv[]) {
	int tablica[10];
	int suma=0;
	int i=0;
	float srednia;
	int najwiekszy;
	int najmniejszy;

	srand( time( NULL ) );
	
	for(i=0;i<10;++i) {
		tablica[i]=rand()%15;
		cout<<tablica[i]<<endl;
	}

	i=0;
	while(i<10){
		suma += tablica[i];
		++i;
	}

	cout<<"suma to: "<<suma<<endl;
	srednia=suma/10.0;
	cout<<"srednia to: "<<srednia<<endl;
	
	najmniejszy=0;
	najwiekszy=0;
	for(i=1;i<10;i++){
		if(tablica[i]<tablica[najmniejszy])
			najmniejszy=i;

		if(tablica[i]>tablica[najwiekszy])
			najwiekszy=i;


	}

	cout<<"najwiekszy to: "<<tablica[najwiekszy]<<endl;
	cout<<"najmniejszy to: "<<tablica[najmniejszy]<<endl;

	return 0;
}