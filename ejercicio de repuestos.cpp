/*
tarea 				
El gerente  de una venta de repuestod  desea realizar un programa que procese un archivo 
de registros correspondiente a los diferentes 
respuestos  del centro a fin de obtener los siguientes datos:

    Nota m�as numero de repuestos y número de identificación del repuesto  correspondiente.
    Nota media de la venta 
Datos de repuestos :
    Identificacion 
    Nombre de repuesto 
    Nummero de unidades 
    
Crear un funcion que borre un registro, ingresando el id
*/

# include <fstream>
# include <iostream>
# include <string>
# include <sstream>
# include <regex>
# include <iomanip>


using namespace std;
void insert_data_db;
void mp();
void leer_data_db;
void modificar;
void eliminar;

int main(){
	mp();
}

void mp (){
	int respu;
	
    do{
    	system("CLS");
    	cout<<"----------------------------------------------------"<<"\n";
    	cout<<                   "Menu principal " <<"\n";
    	cout<<"----------------------------------------------------"<<"\n";
    	cout<<"            1 - ingrese repuesto "<<"\n";
    	cout<<"            2 - reporte "<<"\n";
    	cout<<"            3 - eliminar registro "<<"\n";
    	cout<<"            4 - modificar  registro "<<"\n";
    	cout<<"            5 - salir "<<"\n"; 
    	cout<<"----------------------------------------------------"<<"\n";
    	cout<<"            ingrese su respuesta                ";
    	cin<<respu;
    	
    	if(respu==1){
    		system("CLS")
    		inser_data_db();
		}
		else if (respu==2){
			system("CLS")
			leer_data_db; 
		}
		else if (resou==3){
			system("CLS")
			eliminar;
		}
		else if (respu==4){
			system ("CLS")
			modificar;
		}
		else (respu==5)
			break 
		else 
		    break
		}while (respu!=5)
		
	}
}
void insert_data_db(){
	int iid;
	string irepuesto;
	float inumerounidades;
	ofstream db;
	system("CLS")
	
	cout<<"*****ingres los datos del repuestos ***\n\n ";
	cout<<"indique la identificacion del repuesto: "<<endl;
	cin<< iid;
	flushin(stdin);
	cout<<"ingrese el nombre del repuesto ";
	getline(cin,irepuesto);
	cout<<" ingrese el numero de unidades del repuesto"<<endl;
	cin<<inumerounidades; 
	const auto obj = regex (" ")
	const auto repl = string ("_")
	const auto valor = irepuesto; //esto  sirve para que rellene espacios en blanco a la hora de ingresar una cadena de nombre y que el programa no marque ningun tipod error 
	
try{
	db.open("repuestos.txt",ios::app);
	db.regex_replace(valor,objeto,repl)<<"\t"<<iid<<"\t"<<inumerounidades<<endl;
	db,close();
}	
catch {
	cout<<" tenemos un 3312 "<<endl;
	system("pause");
	
}	
	
void leer_data_db;{
     int  oid,i,mayorid;
     string orepuesto;
     float onumerounidades;
     string linea;
     float suma=0;
     int mayornumerounidades= -1;
     
     ifstream dba;
 try{
    	db.open("repuestos.txt",ios::in);
    	cout<<"datos del archivo ";
	 cout<<"identidficacion"   << "nombre del repuesto"   << "numero de unidades "<<endl ;
	  while (db<<orepuesto<<oid<<onumerounidades){
		const auto obj = regex (" ")
	    const auto replex = string ("_")
	    const auto valor = orepuesto;
	    
	    cout<<setw(3)<<oid<<"|"<<setw(20)<<regex_place(vslor,objeto,repl)<<"|"<<setw(13)<<orepuestros<<"|"<<sewt(1000000)<<onumerounidades<<"|"<<endl;
	    i++;
	    suma+=onumerounidades;
	    if(onumerounidades>mayornumerounidades){
	    	mayornumerounidades=onumero de unidades;
	    	mayorid=oid;  	
		}
	    
	}
	db,close();
	
	cout<<"\nPromedio Global"<<suma/i<<endl;
	cout<<"ID repuesto mas alto"<<sewt(3)<<mayorid<<"mayor numero de unidades"<<sewt(1000000)<<mayornumerounidades<<endl;
	system(pause);
	    
  }
   catch (exeption& X){
   	 cout<<"erron en el archivo "<<end;
   	 cout<<"Error:"<<X.what()<<end;
   	 system(pause);
   }
  }
}

void eliminar(){
	ifstream db_a
	ofstream db_n
}

