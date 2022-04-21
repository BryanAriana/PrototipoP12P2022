#include "menu.h"
#include <iostream>
#include <istream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
#include <conio.h>
#include <iomanip>
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
        cout << "\t\t\t  3. Asientos"<<endl;
        cout << "\t\t\t  4. Cines"<<endl;
        cout << "\t\t\t  5. Clientes"<<endl;
        cout << "\t\t\t  6. Salir"<<endl;

        cout << "\t\t\t *********************************************"<<endl;
        cout << "\t\t\t Opcion a escoger : [1/2/3/4/5/6]"<<endl;
        cout << "\t\t\t *********************************************"<<endl;
        cout << "\t\t\t Selecciona tu opcion: "<<endl;
        cin>>choice;

        switch(choice)
        {
    case 1:
		break;
    case 2:
		break;
	case 3:

		break;
	case 4:

		break;
	case 5:

		break;
    case 6:

        break;
	case 7:
		exit(0);
	default:
		cout << "\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(choice!= 7);

}
