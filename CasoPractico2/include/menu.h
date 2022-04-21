#ifndef MENU_H
#define MENU_H

using namespace std;

class menu
{
    public:
        menu();
        virtual ~menu();
        void menus();
        void login();
        void menuGen();
        void menuPeli();
        void menuSalas();
        void menuCine();
        void menuCliente();
        void catalogos();
        void insert();
		void display();
		void modify();
		void search();
		void delet();
		void insertSala();
		void displaySala();
		void modifySala();
		void searchSala();
		void deletSala();
		void insertCine();
		void displayCine();
		void modifyCine();
		void searchCine();
		void deletCine();
		void insertClientes();
		void displayClientes();
		void modifyClientes();
		void searchClientes();
		void deletClientes();

    protected:

    private:
        string id, idS, idC, idCL;
        string nombre, nombreS, nombreC, nombreCL;
        string clasificacion, direccion, nit;
        string genero;
        string idioma;
        double precio, precioSala;
};

#endif // MENU_H
