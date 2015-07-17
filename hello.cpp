#include <iostream>

using namespace std;
int highestpower;

int main(int argc, char const *argv[]) {
	cout<<"najwyzsza potega przy x:";
  cin>>highestpower;   
  float constants[highestpower+1];
  int i;
  float x1,x2,x,y1,y2,y;

  //wspolczynniki przy potegach
  for(i=highestpower;i>-1;--i){
  	cout<<"wspolczynnik przy x do potegi " <<i;
  	cin>>constants[i];
	}

	cout<<"podaj x1: ";
  cin>>x1;
  cout<<"podaj x2: ";
  cin>>x2;

  x=(x1+x2)/2;

  for(){
    
  } 


  return 0;
}