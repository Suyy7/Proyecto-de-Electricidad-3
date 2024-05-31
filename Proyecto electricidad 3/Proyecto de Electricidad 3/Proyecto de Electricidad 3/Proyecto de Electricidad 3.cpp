#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;
// List cross

struct lista {
    int date;
    lista* sig;
};




//- - - - - - - - - - - - - Class Deff  - - - - - - - - - - - - - - 
class Persona
{
public:
    Persona();
    ~Persona();
    virtual void mostrar();
private:
    string nombre;
    string apellido;
    string carilla;
};
Persona::Persona()
{
}
Persona::~Persona()
{
}
class Tecnico : public Persona
{
public:
    Tecnico();
    ~Tecnico();

private:

};
Tecnico::Tecnico() : Persona(){}
Tecnico::~Tecnico()
{
}
class IngenieroElectrico : public Persona
{
public:
    IngenieroElectrico();
    ~IngenieroElectrico();

private:

};
IngenieroElectrico::IngenieroElectrico() : Persona()
{
}
IngenieroElectrico::~IngenieroElectrico()
{
}
// - - - - - - - - - - - -  Portotipe of function - - - - - - - - - -

static void menu();
void ingresoNuevo();
bool comparacion(string, string);
void ingresoSistema();


int main()
{
    cout << "\n Menu de ingreso ";
    menu();




    cout << "\nTerminado... \n";
    cin.get();
    return 0;
}

static void menu() {

    string usuario;
    string contraseña;

    string rpta = "si";
    const char rptaN = 'no';

    cout << "\n Dime si eres nuevo. ";
    cin >> rpta;
    

    if (rpta == "si") {
        ingresoNuevo(); // Lista 
    }
    else
    {  // Si no es nuevo ingresa al sistema. 
        cout << "\n Ingrese su contraseña y usuario. ";
        cout << "\n Usuario: ";  cin >> usuario;
        cout << "\n Contraseña: "; cin >> contraseña;
        if (comparacion(usuario, contraseña) && comparacion(usuario,contraseña)) {
            // Ingreso al sistema;
        }
        else {  // Mensaje de fallo
            cout << "\n Error. ";
            cout << "\n Verifique nuevamente el usuario o la contraseña. ";
            cout << "\n vuelva a intentarlo. ";
        }
    }




}
void ingresoNuevo() {
    string nombre;
    string apellido;
    string nUsuario;
    string contraseña;
    string matricula;
    string actividad;


    cout << "\t Bienvenido, nuevo usuario. " << endl;
    cout << "\n Dime tu nombre: "; cin >> nombre;
    cout << "\n Dime tu apellido: "; cin >> apellido;
    cout << "\n Dime tu usuario: "; cin >> nUsuario;
    cout << "\n Dime tu contraseña: "; cin >> contraseña;
    cout << "\n Dime tu actividad: "; cin >> actividad;

};


bool comparacion(string a, string b) { // comparacion de char sea contra o usuario. 
    return (a == b) ? true : false;
};
bool comparacion(string a, string b, string c, string d) { // comparacion de char sea contra o usuario. 
    return (a == b && c == d) ? true : false;
};
void ingresoSistema() {
    int opc = NULL;

    cout << "\t Bienvenido al sistema. " << endl;
    cout << "\n Digite una opcion luego del siguiente menu. ";
        cout << "\n - 1. Calculos Electricos. " << endl;
        cout << "\n - 2. Leyes, normativas y convenios. " << endl;
        cout << "\n - 3. Planos guardados. " << endl;        
        cout << "\n - 4. Herramientas de medicion y sus usos. " << endl;
        cout << "\n - 5. Contactos de recomendacion. " << endl;
        cout << "\n - 6. Ayuda de la empresa. " << endl;
        cout << "\n Aqui >>>"; cin >> opc;

    switch (opc)
    {
    case 1:
        
        break;
    case 2:
        
        break;
    case 3:
        
        break;
    case 4:;
        break;
    case 5:;
        break;
    case 6:
       
        break;
    default:
        cout << "\n Opcion no encontrada... ";
        break;
    }
};