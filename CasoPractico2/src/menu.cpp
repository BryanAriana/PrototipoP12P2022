#include <iostream>
#include <istream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
#include <conio.h>
#include <iomanip>
#include "menu.h"
using namespace std;
menu::menu()
{
    //ctor
}

menu::~menu()
{
    //dtor
}
void menu::menus()
{
    int choice;
    char s;
    do

    {
    system("cls");
    cout << "*********************************************"<<endl;
    cout << "   | Sistema del Cine |"<<endl;
    cout << "*********************************************"<<endl;
    cout << " 1. Ingresar"<<endl;
    cout << " 2. Salir"<<endl;

    cout << "*********************************************"<<endl;
    cout << "Opcion a escoger : [1/2]"<<endl;
    cout << "*********************************************"<<endl;
    cout << "Selecciona tu opcion: "<<endl;
    cin>>choice;

    switch(choice)
        {
                case 1:
                        login();
                        break;
                case 2:
                        exit(0);
                        break;
                default:

                        cout<<"Hiciste algo mal, prueba otra vez"<<endl;

        }
        getch();
    }while(choice!= 2);
}
void menu::login()
{
    int count;
    string nombre, contra, n, c;
    system("cls");
    cout << "*********************************************"<<endl;
    cout << "          | Ingresar al Sistema |"<<endl;
    cout << "*********************************************"<<endl;
    cout << " Nombre de Usuario:"<<endl;
    cin >>nombre;
    cout << " Contraseña:"<<endl;
    cin >>contra;

    ifstream input("RegistroUsuarios.txt");
        while(input>>n>>c)
        {
                if(n==nombre && c==contra)

                {
                        count=0;
                        system("cls");
                }
        }
        input.close();
        if(count==0)
        {
                cout<<"\nHola "<< nombre<<"\nTu Ingreso ha sido Exitoso!";
                cin.get();
                cin.get();
                menu::menuGen();


        }
        else
        {
                cout<<"\nError en el accesos\nEl usuario o contraseña son invalidos\n";
        }
}
void menu::menuGen()
{
    int choice;
    char s;
    do
    {
        system ("cls");

        cout << "\t\t\t *********************************************"<<endl;
        cout << "\t\t\t    | Sistema del Cine - Bryan Alejandro Ariana Juarez 9959-21-2832  |"<<endl;
        cout << "\t\t\t *********************************************"<<endl;
        cout << "\t\t\t  1. Catalogos"<<endl;
        cout << "\t\t\t  2. Procesos"<<endl;
        cout << "\t\t\t  3. Informes"<<endl;
        cout << "\t\t\t  4. Salir"<<endl;

        cout << "\t\t\t *********************************************"<<endl;
        cout << "\t\t\t Opcion a escoger : [1/2/3/4]"<<endl;
        cout << "\t\t\t *********************************************"<<endl;
        cout << "\t\t\t Selecciona tu opcion: "<<endl;
        cin>>choice;

    switch(choice)
    {
    case 1:
        catalogos();
		break;
	case 2:

		break;
	case 3:
		break;
	case 4:
		exit(0);
	default:
		cout << "\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(choice!= 7);
}
void menu::catalogos()
{
    int choice;
    char s;
    do
    {


    system ("cls");

        cout << "\t\t\t *********************************************"<<endl;
        cout << "\t\t\t      | Catalogos |"<<endl;
        cout << "\t\t\t *********************************************"<<endl;
        cout << "\t\t\t  1. Peliculas"<<endl;
        cout << "\t\t\t  2. Salas"<<endl;
        cout << "\t\t\t  3. Cines"<<endl;
        cout << "\t\t\t  4. Clientes"<<endl;
        cout << "\t\t\t  5. Salir"<<endl;

        cout << "\t\t\t *********************************************"<<endl;
        cout << "\t\t\t Opcion a escoger : [1/2/3/4/5]"<<endl;
        cout << "\t\t\t *********************************************"<<endl;
        cout << "\t\t\t Selecciona tu opcion: "<<endl;
        cin>>choice;

        switch(choice)
        {
    case 1:
        menuPeli();
		break;
    case 2:
        menuSalas();
		break;
	case 3:
	    menuCine();
		break;
    case 4:
        menuCliente();

		break;
	case 5:
		exit(0);
	default:
		cout << "\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(choice!= 7);

}
void menu::menuPeli()
{
    int choice;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t----------------------------------------"<<endl;
	cout<<"\t\t\t |   Menu Peliculas  |"<<endl;
	cout<<"\t\t\t----------------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingresar Pelicula"<<endl;
	cout<<"\t\t\t 2. Despliegar Peliculas"<<endl;
	cout<<"\t\t\t 3. Modificar Peliculas"<<endl;
	cout<<"\t\t\t 4. Buscar Peliculas"<<endl;
	cout<<"\t\t\t 5. Borrar Peliculas"<<endl;
	cout<<"\t\t\t 6. salir"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5/6]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	do
    	{
    		insert();
    		cout<<"\n\t\t\t Agrega otra persona(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
	case 2:
		display();
		break;
	case 3:
		modify();
		break;
	case 4:
		search();
		break;
	case 5:
		delet();
		break;
	case 6:
		menuGen();
	default:
		cout<<"\n\t\t\t Opcion invalida...";
	}
	getch();
    }while(choice!= 6);
}
void menu::insert()
{
	system("cls");
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------Agregar informacion de la Pelicula ---------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa id de la Pelicula         : ";
	cin>>id;
	cout<<"\t\t\tIngresa nombre de la Pelicula         : ";
	cin>>nombre;
	cout<<"\t\t\tIngresa clasificacion de la pelicula     : ";
	cin>>clasificacion;
	cout<<"\t\t\tIngresa genero de la pelicula      : ";
	cin>>genero;
	cout<<"\t\t\tIngresa idioma de la pelicula      : ";
	cin>>idioma;
	cout<<"\t\t\tIngresa precio de la entrada para la pelicula      : ";
	cin>>precio;
    file.open("registroDePeliculas.txt", ios::app | ios::out);
	file<<std::left<<std::setw(15)<< id <<std::setw(15)<< nombre <<std::left<<std::setw(15)<< clasificacion <<std::left<<std::setw(15)<< genero<<std::setw(15)<<idioma<<std::setw(15)<<precio<< "\n";
	file.close();
}
void menu::display()
{
	system("cls");
	fstream file;
	int total=0;
	cout<<"\n-------------------------Tabla de Informacion de las peliculas -------------------------"<<endl;
	file.open("registroDePeliculas.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> id >> nombre >> clasificacion >> genero >> idioma >> precio;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t id de la pelicula: "<<id<<endl;
			cout<<"\t\t\t Nombre de la pelicula: "<<nombre<<endl;
			cout<<"\t\t\t Clasificacion de la pelicula: "<<clasificacion<<endl;
			cout<<"\t\t\t Genero de la pelicula: "<<genero<<endl;
			cout<<"\t\t\t Idioma de la pelicula: "<<idioma<<endl;
			cout<<"\t\t\t Precio de entrada para la Pelicula: "<<precio<<endl;
			file >> id >> nombre >> clasificacion >> genero >> idioma >> precio;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}
void menu::modify()
{
	system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Modificacion de Informacion de Peliculas-------------------------"<<endl;
	file.open("registroDePeliculas.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese Id de la pelicula que quiere modificar: ";
		cin>>participant_id;
		file1.open("registro.txt",ios::app | ios::out);
		file >> id >> nombre >> clasificacion >> genero >> idioma >> precio;
		while(!file.eof())
		{
			if(participant_id!=id)
			{
			file<<std::left<<std::setw(15)<< id <<std::setw(15)<< nombre <<std::left<<std::setw(15)<< clasificacion <<std::left<<std::setw(15)<< genero<<std::setw(15)<<idioma<<std::setw(15)<<precio<< "\n";
			}
			else
			{
				cout<<"\t\t\tIngrese Id de la pelicula: ";
				cin>>id;
				cout<<"\t\t\tIngrese Nombre de la pelicula: ";
				cin>>nombre;
				cout<<"\t\t\tIngrese clasificacion de la pelicula: ";
				cin>>clasificacion;
				cout<<"\t\t\tIngrese genero de la pelicula: ";
				cin>>genero;
				cout<<"\t\t\tIngrese Idioma de la pelicula: ";
				cin>>idioma;
				cout<<"\t\t\tIngrese precio de entrada para la pelicula: ";
				cin>>precio;
				file1<<std::left<<std::setw(15)<< id <<std::setw(15)<< nombre <<std::left<<std::setw(15)<< clasificacion <<std::left<<std::setw(15)<< genero<<std::setw(15)<<idioma<<std::setw(15)<<precio<< "\n";
				found++;
			}
			file >> id >> nombre >> clasificacion >> genero >> idioma >> precio;

		}
		file1.close();
		file.close();
		remove("registroDePeliculas.txt");
		rename("registro.txt","registroDePeliculas.txt");
	}
}

void menu::search()
{
	system("cls");
	fstream file;
	int found=0;
	file.open("registroDePeliculas.txt",ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos de la pelicula buscada------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		string participant_id;
		cout<<"\n-------------------------Datos de la pelicula buscada------------------------"<<endl;
		cout<<"\nIngrese Id de la pelicula que quiere buscar: ";
		cin>>participant_id;
		file >> id >> nombre >> clasificacion >> genero >> idioma >> precio;
		while(!file.eof())
		{
			if(participant_id==id)
			{
				cout<<"\n\n\t\t\t Id de la pelicula: "<<id<<endl;
				cout<<"\t\t\t Nombre de la pelicula: "<<nombre<<endl;
				cout<<"\t\t\t Clasificacion de la pelicula: "<<clasificacion<<endl;
				cout<<"\t\t\t Genero de la pelicula: "<<genero<<endl;
				cout<<"\t\t\t Idioma de la pelicula: "<<idioma<<endl;
				cout<<"\t\t\t Precio de entrada para la Pelicula: "<<precio<<endl;
				found++;
			}
			file >> id >> nombre >> clasificacion >> genero >> idioma >> precio;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Pelicula no encontrada...";
		}
		file.close();
	}
}


void menu::delet()
{
	system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Informacion de la Pelicula a Borrar-------------------------"<<endl;
	file.open("registroDePeliculas.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el Id de la pelicula que quiere borrar: ";
		cin>>participant_id;
		file1.open("registro.txt",ios::app | ios::out);
		file >> id >> nombre >> clasificacion >> genero >> idioma >> precio;
		while(!file.eof())
		{
			if(participant_id!= id)
			{
				file1<<std::left<<std::setw(15)<< id <<std::setw(15)<< nombre <<std::left<<std::setw(15)<< clasificacion <<std::left<<std::setw(15)<< genero<<std::setw(15)<<idioma<<std::setw(15)<<precio<< "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
			file >> id >> nombre  >> clasificacion >> genero >> idioma >> precio;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Id de la pelicula no encontrado...";
		}
		file1.close();
		file.close();
		remove("registroDePeliculas.txt");
		rename("registro.txt","registroDePeliculas.txt");
	}
}
void menu::menuSalas()
{
    int choice;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t----------------------------------------"<<endl;
	cout<<"\t\t\t |   Menu Salas  |"<<endl;
	cout<<"\t\t\t----------------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingresar Sala"<<endl;
	cout<<"\t\t\t 2. Despliegar Salas"<<endl;
	cout<<"\t\t\t 3. Modificar Sala"<<endl;
	cout<<"\t\t\t 4. Buscar Sala"<<endl;
	cout<<"\t\t\t 5. Borrar Sala"<<endl;
	cout<<"\t\t\t 6. salir"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5/6]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	do
    	{
    		insertSala();
    		cout<<"\n\t\t\t Agrega otra persona(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
	case 2:
		displaySala();
		break;
	case 3:
		modifySala();
		break;
	case 4:
		searchSala();
		break;
	case 5:
		deletSala();
		break;
	case 6:
		menuGen();
	default:
		cout<<"\n\t\t\t Opcion invalida...";
	}
	getch();
    }while(choice!= 6);
}
void menu::insertSala()
{
	system("cls");
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------Agregar informacion de la Sala ---------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa id de la Sala         : ";
	cin>>idS;
	cout<<"\t\t\tIngresa nombre del Cine         : ";
	cin>>nombreS;
	cout<<"\t\t\tIngresa precio de la sala      : ";
	cin>>precioSala;
    file.open("registroDeSalas.txt", ios::app | ios::out);
	file<<std::left<<std::setw(15)<< idS <<std::setw(15)<< nombreS <<std::left<<std::setw(15)<< precioSala << "\n";
	file.close();
}
void menu::displaySala()
{
	system("cls");
	fstream file;
	int total=0;
	cout<<"\n-------------------------Tabla de Informacion de las salas -------------------------"<<endl;
	file.open("registroDeSalas.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> idS >> nombreS >> precioSala;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t id de la sala: "<<idS<<endl;
			cout<<"\t\t\t Nombre del cine: "<<nombreS<<endl;
			cout<<"\t\t\t Precio de la sala: "<<precioSala<<endl;
			file >> idS>> nombreS >> precioSala;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}
void menu::modifySala()
{
	system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Modificacion de Informacion de Salas-------------------------"<<endl;
	file.open("registroDeSalas.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese Id de la Salas que quiere modificar: ";
		cin>>participant_id;
		file1.open("registro.txt",ios::app | ios::out);
		file >> idS >> nombreS >> precioSala;
		while(!file.eof())
		{
			if(participant_id!=id)
			{
			file<<std::left<<std::setw(15)<< idS <<std::setw(15)<< nombreS <<std::left<<std::setw(15)<< precioSala << "\n";
			}
			else
			{
				cout<<"\t\t\tIngrese Id de la sala: ";
				cin>>idS;
				cout<<"\t\t\tIngrese Nombre del Cine: ";
				cin>>nombreS;
				cout<<"\t\t\tIngrese precio de la sala: ";
				cin>>precioSala;
				file1<<std::left<<std::setw(15)<< idS <<std::setw(15)<< nombreS <<std::left<<std::setw(15)<< precioSala<< "\n";
				found++;
			}
			file >> idS >> nombreS >>  precioSala;

		}
		file1.close();
		file.close();
		remove("registroDeSalas.txt");
		rename("registro.txt","registroDeSalas.txt");
	}
}

void menu::searchSala()
{
	system("cls");
	fstream file;
	int found=0;
	file.open("registroDeSalas.txt",ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos de la Sala buscada------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		string participant_idS;
		cout<<"\n-------------------------Datos de la Sala buscada------------------------"<<endl;
		cout<<"\nIngrese Id de la sala que quiere buscar: ";
		cin>>participant_idS;
		file >> idS >> nombreS >>  precioSala;
		while(!file.eof())
		{
			if(participant_idS==idS)
			{
				cout<<"\n\n\t\t\t Id del sala: "<<idS<<endl;
				cout<<"\t\t\t Nombre del sala: "<<nombreS<<endl;
				cout<<"\t\t\t Precio de la sala: "<<precioSala<<endl;
				found++;
			}
			file >> idS >> nombreS >>  precioSala;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Sala no encontrada...";
		}
		file.close();
	}
}


void menu::deletSala()
{
	system("cls");
	fstream file,file1;
	string participant_idS;
	int found=0;
	cout<<"\n-------------------------Informacion de la Sala a Borrar-------------------------"<<endl;
	file.open("registroDeSalas.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el Id de la sala que quiere borrar: ";
		cin>>participant_idS;
		file1.open("registro.txt",ios::app | ios::out);
		file >> idS >> nombreS >> precioSala;
		while(!file.eof())
		{
			if(participant_idS!= idS)
			{
				file1<<std::left<<std::setw(15)<< idS <<std::setw(15)<< nombreS <<std::left<<std::setw(15)<< precioSala<< "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
			file >> idS >> nombreS  >>  precioSala;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Id de la pelicula no encontrado...";
		}
		file1.close();
		file.close();
		remove("registroDeSalas.txt");
		rename("registro.txt","registroDeSalas.txt");
	}
}
void menu::menuCine()
{
    int choice;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t----------------------------------------"<<endl;
	cout<<"\t\t\t |   Menu Cines  |"<<endl;
	cout<<"\t\t\t----------------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingresar Cine"<<endl;
	cout<<"\t\t\t 2. Despliegar Cine"<<endl;
	cout<<"\t\t\t 3. Modificar Cine"<<endl;
	cout<<"\t\t\t 4. Buscar Cine"<<endl;
	cout<<"\t\t\t 5. Borrar Cine"<<endl;
	cout<<"\t\t\t 6. salir"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5/6]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	do
    	{
    		insertCine();
    		cout<<"\n\t\t\t Agrega otra persona(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
	case 2:
		displayCine();
		break;
	case 3:
		modifyCine();
		break;
	case 4:
		searchCine();
		break;
	case 5:
		deletCine();
		break;
	case 6:
		menuGen();
	default:
		cout<<"\n\t\t\t Opcion invalida...";
	}
	getch();
    }while(choice!= 6);
}
void menu::insertCine()
{
	system("cls");
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------Agregar informacion de Cine ---------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa id del cine         : ";
	cin>>idC;
	cout<<"\t\t\tIngresa nombre del Cine         : ";
	cin>>nombreC;
	cout<<"\t\t\tIngresa direccion del cine      : ";
	cin>>direccion;
    file.open("registroDeCines.txt", ios::app | ios::out);
	file<<std::left<<std::setw(15)<< idC <<std::setw(15)<< nombreC <<std::left<<std::setw(15)<< direccion << "\n";
	file.close();
}
void menu::displayCine()
{
	system("cls");
	fstream file;
	int total=0;
	cout<<"\n-------------------------Tabla de Informacion de Cines -------------------------"<<endl;
	file.open("registroDeCines.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> idC >> nombreC >> direccion;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t id del cine: "<<idC<<endl;
			cout<<"\t\t\t Nombre del cine: "<<nombreC<<endl;
			cout<<"\t\t\t Direccion del cine: "<<direccion<<endl;
			file >> idC>> nombreC >> direccion;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}
void menu::modifyCine()
{
	system("cls");
	fstream file,file1;
	string participant_idC;
	int found=0;
	cout<<"\n-------------------------Modificacion de Informacion de Cines-------------------------"<<endl;
	file.open("registroDeCines.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese Id de los cines que quiere modificar: ";
		cin>>participant_idC;
		file1.open("registro.txt",ios::app | ios::out);
		file >> idC >> nombreC >> direccion;
		while(!file.eof())
		{
			if(participant_idC!=idC)
			{
			file<<std::left<<std::setw(15)<< idC <<std::setw(15)<< nombreC <<std::left<<std::setw(15)<< direccion << "\n";
			}
			else
			{
				cout<<"\t\t\tIngrese Id del cine: ";
				cin>>idC;
				cout<<"\t\t\tIngrese Nombre del Cine: ";
				cin>>nombreC;
				cout<<"\t\t\tIngrese direccion del cine: ";
				cin>>direccion;
				file1<<std::left<<std::setw(15)<< idC <<std::setw(15)<< nombreC <<std::left<<std::setw(15)<< direccion<< "\n";
				found++;
			}
			file >> idC >> nombreC >>  direccion;

		}
		file1.close();
		file.close();
		remove("registroDeCines.txt");
		rename("registro.txt","registroDeCines.txt");
	}
}

void menu::searchCine()
{
	system("cls");
	fstream file;
	int found=0;
	file.open("registroDeCines.txt",ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos del cine buscado------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		string participant_idC;
		cout<<"\n-------------------------Datos del cine buscado------------------------"<<endl;
		cout<<"\nIngrese Id del cine que quiere buscar: ";
		cin>>participant_idC;
		file >> idC >> nombreC >>  direccion;
		while(!file.eof())
		{
			if(participant_idC==idC)
			{
				cout<<"\n\n\t\t\t Id del Cine: "<<idC<<endl;
				cout<<"\t\t\t Nombre del Cine: "<<nombreC<<endl;
				cout<<"\t\t\t Direccion del cine: "<<direccion<<endl;
				found++;
			}
			file >> idC >> nombreC >>  direccion;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Sala no encontrada...";
		}
		file.close();
	}
}


void menu::deletCine()
{
	system("cls");
	fstream file,file1;
	string participant_idC;
	int found=0;
	cout<<"\n-------------------------Informacion del Cine a Borrar-------------------------"<<endl;
	file.open("registroDeCines.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el Id del cine que quiere borrar: ";
		cin>>participant_idC;
		file1.open("registro.txt",ios::app | ios::out);
		file >> idC >> nombreC >> direccion;
		while(!file.eof())
		{
			if(participant_idC!= idC)
			{
				file1<<std::left<<std::setw(15)<< idC <<std::setw(15)<< nombreC <<std::left<<std::setw(15)<< direccion<< "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
			file >> idC >> nombreC  >>  direccion;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Id del cine no encontrado...";
		}
		file1.close();
		file.close();
		remove("registroDeCines.txt");
		rename("registro.txt","registroDeCines.txt");
	}
}
void menu::menuCliente()
{
    int choice;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t----------------------------------------"<<endl;
	cout<<"\t\t\t |   Menu Clientes  |"<<endl;
	cout<<"\t\t\t----------------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingresar Cliente"<<endl;
	cout<<"\t\t\t 2. Despliegar Clientes"<<endl;
	cout<<"\t\t\t 3. Modificar Cliente"<<endl;
	cout<<"\t\t\t 4. Buscar Cliente"<<endl;
	cout<<"\t\t\t 5. Borrar Cliente"<<endl;
	cout<<"\t\t\t 6. salir"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5/6]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	do
    	{
    		insertClientes();
    		cout<<"\n\t\t\t Agrega otra persona(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
	case 2:
		displayClientes();
		break;
	case 3:
		modifyClientes();
		break;
	case 4:
		searchClientes();
		break;
	case 5:
		deletClientes();
		break;
	case 6:
		menuGen();
	default:
		cout<<"\n\t\t\t Opcion invalida...";
	}
	getch();
    }while(choice!= 6);
}
void menu::insertClientes()
{
	system("cls");
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------Agregar informacion del Cliente ---------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa id del cliente         : ";
	cin>>idCL;
	cout<<"\t\t\tIngresa nombre del Cliente         : ";
	cin>>nombreCL;
	cout<<"\t\t\tIngresa NIT del cliente      : ";
	cin>>nit;
    file.open("registroDeClientes.txt", ios::app | ios::out);
	file<<std::left<<std::setw(15)<< idCL <<std::setw(15)<< nombreCL <<std::left<<std::setw(15)<< nit << "\n";
	file.close();
}
void menu::displayClientes()
{
	system("cls");
	fstream file;
	int total=0;
	cout<<"\n-------------------------Tabla de Informacion de Clientes -------------------------"<<endl;
	file.open("registroDeClientes.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> idCL >> nombreCL >> nit;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t id del cliente: "<<idCL<<endl;
			cout<<"\t\t\t Nombre del cliente: "<<nombreCL<<endl;
			cout<<"\t\t\t NIT del cine: "<<nit<<endl;
			file >> idCL>> nombreCL >> nit;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}
void menu::modifyClientes()
{
	system("cls");
	fstream file,file1;
	string participant_idCL;
	int found=0;
	cout<<"\n-------------------------Modificacion de Informacion de Clientes-------------------------"<<endl;
	file.open("registroDeClientes.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese Id de los clientes que quiere modificar: ";
		cin>>participant_idCL;
		file1.open("registro.txt",ios::app | ios::out);
		file >> idCL >> nombreCL >> nit;
		while(!file.eof())
		{
			if(participant_idCL!=idCL)
			{
			file<<std::left<<std::setw(15)<< idCL <<std::setw(15)<< nombreCL <<std::left<<std::setw(15)<< nit << "\n";
			}
			else
			{
				cout<<"\t\t\tIngrese Id del cliente: ";
				cin>>idCL;
				cout<<"\t\t\tIngrese Nombre del Cliente: ";
				cin>>nombreCL;
				cout<<"\t\t\tIngrese direccion del cliente: ";
				cin>>nit;
				file1<<std::left<<std::setw(15)<< idCL <<std::setw(15)<< nombreCL <<std::left<<std::setw(15)<< nit<< "\n";
				found++;
			}
			file >> idCL >> nombreCL >>  nit;

		}
		file1.close();
		file.close();
		remove("registroDeClientes.txt");
		rename("registro.txt","registroDeClientes.txt");
	}
}

void menu::searchClientes()
{
	system("cls");
	fstream file;
	int found=0;
	file.open("registroDeClientes.txt",ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos del cliente buscado------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		string participant_idCL;
		cout<<"\n-------------------------Datos del cliente buscado------------------------"<<endl;
		cout<<"\nIngrese Id del cliente que quiere buscar: ";
		cin>>participant_idCL;
		file >> idCL >> nombreCL >>  nit;
		while(!file.eof())
		{
			if(participant_idCL==idCL)
			{
				cout<<"\n\n\t\t\t Id del Cliente: "<<idCL<<endl;
				cout<<"\t\t\t Nombre del Cliente: "<<nombreCL<<endl;
				cout<<"\t\t\t nit del cliente: "<<nit<<endl;
				found++;
			}
			file >> idCL >> nombreCL >>  nit;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Sala no encontrada...";
		}
		file.close();
	}
}


void menu::deletClientes()
{
	system("cls");
	fstream file,file1;
	string participant_idCL;
	int found=0;
	cout<<"\n-------------------------Informacion del Clinte a Borrar-------------------------"<<endl;
	file.open("registroDeCliente.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el Id del cliente que quiere borrar: ";
		cin>>participant_idCL;
		file1.open("registro.txt",ios::app | ios::out);
		file >> idCL >> nombreCL >> nit;
		while(!file.eof())
		{
			if(participant_idCL!= idCL)
			{
				file1<<std::left<<std::setw(15)<< idCL <<std::setw(15)<< nombreCL <<std::left<<std::setw(15)<< nit<< "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
			file >> idCL >> nombreCL  >>  nit;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Id del cliente no encontrado...";
		}
		file1.close();
		file.close();
		remove("registroDeClientes.txt");
		rename("registro.txt","registroDeClientes.txt");
	}
}
