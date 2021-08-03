#include <iostream>
using namespace std;

#define tam 50
void agregarElementos(int a[], int n);
void imprimirElementos(int a[], int n);
void ordenamientoElementos(int a[], int n);
void menorElementos (int a[], int n);

int main(){

    int arreglo1[tam];
    int n;
    cout<<"Ingrese el tamano del arreglo: ";
    cin>>n;
    while(n<=0){
        cout<<"Ingrese el tamano del arreglo en positivo: ";
        cin>>n;
    }

    agregarElementos(arreglo1,n);
    ordenamientoElementos(arreglo1,n);
    imprimirElementos (arreglo1,n);
    

    return 0;
}

void agregarElementos(int a[],int n)
{
	
	for(int i=0;i<n;i++)
	{
		cout<<"Ingresa el numero "<<i+1<<": ";
		cin>>a[i];
	}
	
}

void imprimirElementos(int a[],int n)
{
    for (int i=0; i<n;i++)
    {
        cout<<"["<<a[i]<<"]";
    }
}

void ordenamientoElementos(int a[], int n){
    int i,j,aux,min;

    for(i=0; i<n; i++){
        min=i;
        for ( j = i+1; j < n; j++)
        {
            if (a[j]<a[min])
            {
                min=j;
            }   
        }
        aux = a[i];
        a[i]= a[min];
        a[min]=aux;
    }
}

void menorElementos (int a[], int n){

}