#include<iostream>

using namespace std;
struct Nodo{
	int valor;
	struct Nodo *Ptr;
};
int main(){
	struct Nodo dato1,dato2,dato3,dato4,dato5;
	dato1.valor=3;
	dato1.Ptr=NULL;
	dato2.valor=7;
	dato2.Ptr=NULL;
	dato3.valor=9;
	dato3.Ptr=NULL;
	dato4.valor=5;
	dato4.Ptr=NULL;
	dato5.valor=2;
	dato5.Ptr=NULL;
	
	dato1.Ptr=&dato2;
	dato2.Ptr=&dato3;
	dato3.Ptr=&dato4;
	dato4.Ptr=&dato5;
	cout<<dato1.valor;
	cout<<dato2.valor;
	cout<<dato2.Ptr->valor; 
	cout<<dato3.Ptr->valor; 
	cout<<dato4.Ptr->valor;
	 
	
	
return 0;
	
}
