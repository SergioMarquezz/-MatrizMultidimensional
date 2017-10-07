
#include<iostream>

using namespace std;

///DECLARACION DE METODOS

void mostrarMatriz();
void totalElementos();
void finMatriz();
void matrizLlena();
void busqueda();
void eliminacion();
void actualizar();

///DECLARACION DE VARIABLES GLOBALES

int Matriz[4][4];
int valor_usuario;
int elementos;
int tamano_matriz;
int tamano_tipo_dato;
int numero_buscar;
int numero_eliminar;
int numero_actualizar;
int numero1_actualizar;
bool matriz_llena=false;






int main(){

    cout<<"Matriz de [4][4]\n\n";
    totalElementos();
    finMatriz();

    ///RECORRIDO DE LA MATRIZ

	for(int fila=0; fila<4; fila++){

        for(int columna=0; columna<4; columna++){

            ///FUNCIÓN DE LLENADO

            cout<<"\nIngrese un numero en la posicion ["<<fila<<"]["<<columna<<"]: ";
            cin>>valor_usuario;
            Matriz[fila][columna] = valor_usuario;





	}
}
    mostrarMatriz();
    matrizLlena();
    busqueda();
    eliminacion();
    actualizar();
}



///IMPLEMENTACIÓN DE METODOS

void mostrarMatriz(){

cout<<"\n\n";
    for(int fila=0; fila<4; fila++){

        for(int columna=0; columna<4; columna++){

		cout<<Matriz[fila][columna]<<"\t";




	}

	cout<<endl;
}
    cout<<endl;
}

void totalElementos(){

///sizeof DEVUELVE EL TAMAÑO EN BYTES DE UNA VARIABLE O TIPO DE DATO

tamano_matriz = sizeof(Matriz); ///SE OBTIENE EL TAMAÑO DE LA MATRIZ EN BYTES (64 bytes) 4*16;
tamano_tipo_dato = sizeof(int); ///SE OBTIENE EL TAMAÑO DE int EN BYTES (4 bytes)

elementos = tamano_matriz / tamano_tipo_dato;
cout<<"Se pueden almacenar "<<elementos<<" elementos en la matriz\n\n";


}

void finMatriz(){

for(int fila=0; fila<4; fila++){

    for(int columna=0; columna<4; columna++){

        if(fila == 3 && columna == 3){ ///if ACCEDIENDO A LA POSICION 3,3

             cout<<"El tope de la matriz [4][4] es: "<<fila<<","<<columna<<"\n";


        }


    }
}

}

void matrizLlena(){

    for(int fila=0; fila<4; fila++){

        for(int columna=0; columna<4; columna++){

          if(Matriz[fila][columna]!=0){

            matriz_llena = true;


          }

        }

    }
    if (matriz_llena == true){

        cout<<"Matriz llena";
        cout<<endl;
    }

    else{

        cout<<"Matriz vacia";
        cout<<endl;
    }



}

void busqueda(){

    ///FUNCIÓN DE BUSQUEDA

    cout<<"\nNúmero que desea buscar: ";
    cin>>numero_buscar;

    for(int fila=0; fila<4; fila++){

        for(int columna=0; columna<4; columna++){

            if(Matriz[fila][columna]==numero_buscar){

                cout<<"\n";
                cout<<numero_buscar<<" se encuentra en la posicion "<<fila<<","<<columna<<"\n\n";

            }


        }

    }

}

void eliminacion(){

    cout<<"Numero que quiere eliminar: ";
    cin>>numero_eliminar;

    for(int fila=0; fila<4; fila++){

        for(int columna=0; columna<4; columna++){

            if(Matriz[fila][columna]==numero_eliminar){

                Matriz[fila][columna]=0;

                  mostrarMatriz();

            }


        }

    }

}

void actualizar(){

    cout<<"\nNumero que quiere actualizar: ";

    cin>>numero_actualizar;

    cout<<"Digite el nuevo numero: ";
    cin>>numero1_actualizar;

    for(int fila=0; fila<4; fila++){

        for(int columna=0; columna<4; columna++){

            if(Matriz[fila][columna]==numero_actualizar){

                Matriz[fila][columna]=numero1_actualizar;

                cout<<endl;

                cout<<"Se cambio el numero "<<numero_actualizar<<" por el numero "<<numero1_actualizar;

                mostrarMatriz();
            }

        }
    }



}

