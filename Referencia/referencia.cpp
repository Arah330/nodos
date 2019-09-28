#include<iostream>
using namespace std;
int porValor(int);
int porReferencia(int *);

int main(){
	cout<<"..::Programa que realiza paso por valor  y paso por referencia::.. ";
	int n=1;
	porValor(n);
	cout<<"\n valor almacenado en n es :"<<n<<endl;
	porReferencia(&n);
	cout<<"\nvalor almacenado en n es :"<<n<<endl;
	
	return 0;
	
	
}
int porValor(int v){
	v=15;
	return v;
}
int porReferencia(int *ref){
	*ref=15;
	
}

