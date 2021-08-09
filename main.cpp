#include <iostream>
using namespace std;

//1)diseñe la funcion que busque un numero entero en el vector
//la funcion debe volver verdadero si el elemento existe en el vector
//o falso en caso contrario
//busqueda secuencial
bool busca(int array[], int tamanio, int elemento )
{
      for(int i=1; i<tamanio; i++)
          {
            if(array[i]==elemento)
                return true;
          }
      return false;
}


//2)Diseñe la funcion que busque un numero entero en el vector.
//la funcion debe devolver la posiscion donde el elemento fue encontrado.
//Devuelve -1 si no existe
/busqueda secuencial
bool buscar_pos(int array[], int tamanio, int elemento)
{
      for(int i=0; i<tamanio; i++)
      {
          if(array[i]==elemento)
              return i;
      }
      return -1;
}

int num;
//llenar el vector con numeros aleatorios
void valores_aleatorios(double num[], double tamanio){
    for(int i=0; i<tamanio;i++) {
        num[i] = rand() % 50 - 1
    }
    }
//buscar ELEMENTO EN EL VECTOR
int  X=55;
if(buscar(num,max,X))
           cout<<endl<<"el elemento"<<x<< "si exites"...;
else
    cout<<endl<< "el elemnto"<<x<< "No existe"...;

int pos=buscar_pos(num,max,X);
if(pos==-1)
    cout<<endl<<"No existe el elemnto"<<x<<"en el vector"...;
else
    cout<<endl<<"Existe el elemento"<<"en el vector"...;


//Tarea
void ordenscion_descendente(int vector[],int tamanio)
{
    for(int i=0; i<tamanio; i++)
    {
        for(int j=0; i<tamanio; j++)
        {
            if(vector[i]<vector[j])
            {
                int aux
                aux=vector[i];
                vector[j]=vector[j];
                vector[j]=aux;
            }
        }
    }
}

//Tarea 2

int imprimirnombres;
{
    string nombres[2]="Lucas","Matias";
{
    int i=0;
    nombre[i]
}
return i;
}

