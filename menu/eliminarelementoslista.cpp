#include <iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo  *siguiente;
};
void menu();
void insertarLista(Nodo *&,int);
void mostrarLista(Nodo *);
void eliminarNodo(Nodo *&,int);



Nodo *lista=NULL;

int main(){
	
	menu();
	
	
	
	getch();
	return 0;	
	
}
void menu(){
	int opcion,dato;
	do{
		cout<<"\t.::MENU::.\n";
	
	    cout<<"1.- Agregar elementos\n";
        cout<<"2.-Imprimir elementos \n";
        cout<<"3.-Eliminar un nodo de la lista \n";
	    cout<<"4.-Salir\n";
	    cout<<"\elige una opcion\n\n";
	    cin>>opcion;
	    
	    switch(opcion){
		    case 1:
			    cout<<"\tIngresa un numero: ";
	            cin>>dato;
	            insertarLista(lista,dato);
	            cout<<"\n";
	            system("pause");
			    break;
		    case 2:
			    cout<<"Imprimir valores "<<endl;
			    mostrarLista(lista);
			    cout<<"\n";
			    system("pause");
			    break ;
			case 3:
			    cout<<"\nDigite el elemento que deseas eliminar:  ";
			    cin>>dato;
			    eliminarNodo(lista,dato);
			    cout<<"\n";
			    system("pause");
			  
		}
		system("cls");
				
		
	}while(opcion!=4);
}

void insertarLista(Nodo *&lista,int valor){
	Nodo  *nuevo_nodo =new Nodo();
	nuevo_nodo->dato=valor;
	
	Nodo *aux1=lista;
	Nodo *aux2;
	
	while((aux1 != NULL)&&(aux1->dato<valor)){
		aux2=aux1;
		aux1=aux1->siguiente;	
	}
	
	if (lista == aux1){
		lista=nuevo_nodo;
	}
	else{
		aux2->siguiente=nuevo_nodo;
		
	}
	nuevo_nodo->siguiente=aux1;
	
	cout<<"\tDato "<<valor<<"agregado correctamente en lista \n";
}

void mostrarLista(Nodo  *lista){
	Nodo *actual=new Nodo();
	
	actual=lista;
	while(actual != NULL ){
		cout<<actual->dato<<"->";
		actual=actual->siguiente;
	}
}

void eliminarNodo(Nodo *&lista,int n){
	//verificar si lista etsa vacia
	if (lista !=NULL){
		Nodo *aux_borrar;
		Nodo *anterior =NULL;
		
		aux_borrar=lista;
		//hacer el recorrido de la lista
		while ((aux_borrar != NULL)&&(aux_borrar->dato != n)){
			anterior =aux_borrar;
			aux_borrar =aux_borrar->siguiente;
		}
		//elemento no encontrado
		if(aux_borrar == NULL){
			cout<<"Elemento no encontrado";
		}
		//se elimina el primer elemento
		else if(anterior ==NULL){
			lista =lista->siguiente;
			delete aux_borrar;
		}
		//el elemento esta en la lista pero no es el primero
		else{
			anterior->siguiente =aux_borrar->siguiente;
			delete aux_borrar;
			
		}
	}
}
