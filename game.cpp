#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Warrior {
public:
	int hp;
	Warrior(){
		hp = 150;
	}
	int dealDmg();
	int strike();
};

class Priest {
  public:
	int hp;
	Priest(){
		hp = 100;
	}
	int dealDmg();
	void heal();
};

int Warrior::strike(){
	return rand()%20+15;
}
int Warrior::dealDmg(){
	return rand()%20+1;	
}

int Priest::dealDmg(){
	return rand()%10+1;
}

void Priest::heal(){
	this->hp += rand()%25+1;
}

int main () {
	srand( time( NULL ) );
	Warrior warr;
	Priest pri;
	
	int around = 0;
	/*
	char check='k';
	
		cout<<"Are you ready to start the deathmatch? If so, press 'y'."<<endl;
		cin>>check;
	*/

	while (pri.hp >0 && warr.hp>0){
		
		if (rand()%100+1 > 55){
			pri.hp -= warr.strike();
			cout<<"Strike"<<endl;
		}
		else
			pri.hp -= warr.dealDmg();

		if (rand()%100+1 > pri.hp)
			pri.heal();
		else
			warr.hp -= pri.dealDmg();

	around++;
	cout<<"warr hp: "<<warr.hp<<endl;
	cout<<"pri hp: "<<pri.hp<<endl;
	}
	cout<<endl<<"The fight lasted for "<<around<<"rounds!"<<endl;
	if (pri.hp <1 && warr.hp <1)
		cout<<"Draw!";
	else if (pri.hp <1)
		cout<<"The warrior won!";
	else
		cout<<"The priest won!";
	
	return 0;
}