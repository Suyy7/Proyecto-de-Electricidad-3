#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;
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
Tecnico::Tecnico();
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
IngenieroElectrico::IngenieroElectrico()
{
}
IngenieroElectrico::~IngenieroElectrico()
{
}
// - - - - - - - - - - - -  Portotipe of function - - - - - - - - - -

static void menu();
void ingresoNuevo();
bool comparacion(char, char);
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

    string usuario = NULL;
    string contraseña = NULL;

    char rpta[3];
    const char rptaN = "no";

    cout << "\n Dime si eres nuevo. ";
    cin.getline(rpta, 3);
    _strlwr(rpta);

    if (rpta = "si") {
        ingresoNuevo(); // Lista 
    }
    else
    {  // Si no es nuevo ingresa al sistema. 
        cout << "\n Ingrese su contraseña y usuario. ";
        cout << "\n Usuario: ";  cin >> usuario;
        cout << "\n Contraseña: "; cin >> contraseña;
        if (comparacion(usuario) && comparacion(contraseña)) {
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


bool comparacion(char a[], char b[]) { // comparacion de char sea contra o usuario. 
    return (a = b) ? true : false;
};
void ingresoSistema() {
    cout << "\t Bienvenido al sistema. " << endl;
    switch ()
    {
    case 1:
        cout << "\n - 1. Calculos Electricos. " << endl;
        break;
    case 2:
        cout << "\n - 2. Leyes, normativas y convenios. " << endl;
        break;
    case 3:
        cout << "\n - 3. Planos guardados. " << endl;
        break;
    case 4:
        cout << "\n - 4. Herramientas de medicion y sus usos. " << endl;
        break;
    case 5:
        cout << "\n - 5. Contactos de recomendacion. " << endl;
        break;
    case 6:
        cout << "\n - 6. Ayuda de la empresa. " << endl;
        break;
    default:
        cout << "\n Opcion no encontrada... ";
        break;
    }
};