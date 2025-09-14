#include<iostream>
#include"Gimnasio.h"
using namespace std;
int main(){
	Sucursal* s1 = new Sucursal();
	Gimnasio* g1 = new Gimnasio();
	g1->insertarSucursal(s1);
	cout << g1->toString();
	
}

