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

    protected:

    private:
        string id, idS;
        string nombre, nombreS;
        string clasificacion, descripcion;
        string genero;
        string idioma;
        double precio, precioSala;
};

#endif // MENU_H
