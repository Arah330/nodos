#include <iostream>
using namespace std;
struct Nodo{
	int valor;
	struct Nodo *Ptr;
};

	void agregar(struct nodo*&iniciolista,int valor);
	void imprimir(struct nodo*&iniciolista);
int main(){	
	struct Nodo *inicio;
	struct Nodo *aux;
	int opcion;
	int menu;
	cout<<"\elige una opcion\n\n";
	cout<<"1.- Agregar\n";
	cout<<"2.-Imprimir\n";
	cout<<"3.-Salir\n";
	
	cin>>opcion;
    do{
  	switch(opcion){
		case 1:
			cout<<"Agrgar un nuevo nodo"<<endl;
			cin>>valor;
			agregar(inicio,valor);
		break;
		case 2:
			cout<<"Imprimir valores "<<endl;
			while (nodo*apuntador){
				cout<<"imprimir"<<endl;
				cin>>valor;
				cout<<endl;
		break ;
		case 3:
			cout<<"salir "<<endl;
			break;
			default: 
			cout<<endl;
			cout<<"error"<<endl;		
	}
	
	}
	}while (opcion!=3);
	return 0;
	
}
void agregar(struct nodo*&iniciolista,int valor){
	struct Nodo *aux;
	struct Nodo *aux2;
	aux->valor=valor;
	aux->Ptr=NULL;
	
	aux2=iniciolista;

	if(iniciolista==NULL){
		iniciolista=aux;
		
}else{

	while(aux2==NULL){
		aux2=aux2->Ptr;
		auxiliar->valor;
		
	};
	

	
	
	
}
	}
		
void imprimirlista(struct nodo*&iniciolista){
	struct nodo*auxiliar;
	iniciolista=auxiliar;
	while(auxiliar!NULL){
	cout<<auxiliar->valor;
	auxiliar=auxiliar->Ptr;
	
	}
	
}
	

