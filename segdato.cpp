#include<iostream>

using namespace std;

struct Nodo{
	int valor;
	struct Nodo *Ptr;
	
};

int main(){
	struct Nodo *inicio;
	struct Nodo *aux;
	
	inicio=NULL;
	aux=new Nodo();
	aux->valor=12;
	aux->Ptr=NULL;
	
	inicio=aux;
	
	aux=new Nodo();
	aux->valor=11;
	aux->Ptr=NULL;
	inicio->Ptr=aux;
	
	aux=new Nodo();
	aux->valor=15;
	aux->Ptr=NULL;
	inicio->Ptr->Ptr=aux;
	
	aux=new Nodo();
	aux->valor=19;
	aux->Ptr=NULL;
	inicio->Ptr->Ptr->Ptr=aux;
	
	aux=new Nodo();
	aux->valor=19;
	aux->Ptr=NULL;
	inicio->Ptr->Ptr->Ptr=aux;
	
	aux=new Nodo();
	aux->valor=25;
	aux->Ptr=NULL;
	inicio->Ptr->Ptr->Ptr->Ptr=aux;
	
	

	cout<<inicio->valor<<"\n";
	cout<<inicio->Ptr->valor<<"\n";
	cout<<inicio->Ptr->Ptr->valor<<"\n"; 
	cout<<inicio->Ptr->Ptr->Ptr->valor<<"\n"; 
	cout<<inicio->Ptr->Ptr->Ptr->Ptr->valor<<"\n";
	 
	
	
return 0;
	
}
