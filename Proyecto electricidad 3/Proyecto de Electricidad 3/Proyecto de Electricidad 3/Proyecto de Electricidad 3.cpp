#include <cstdlib>
#include <iostream>
#include <string.h>
#include <Windows.h>
using namespace std;
// List cross
string usuariobase = "suy";
string contraBase = "12345";


struct lista {
    string usuario;
    string contraseña;
    string nombre;
    string profesion;
    
    lista* sig;
};




//------------------------ Class padre ---------------------------
class Persona
{
public:
    Persona(string , string, string);
    ~Persona();
    virtual void mostrar();
private:
    string nombre;
    string apellido;
    string carilla;
};
Persona::Persona(string _nombre, string _apellido, string _carilla)
{
    nombre = nombre;
    apellido = _apellido;
    carilla = _carilla;
}
Persona::~Persona()
{
}
void Persona::mostrar() {
    cout << "\nSon: " << nombre << " " << apellido << " " << carilla;
}


// ----------------------- Class que hereda persona --------------------
class Tecnico : public Persona
{
public:
    Tecnico(string, string, string, int);
    ~Tecnico();
    void mostrarCarnet();

private:
    int carnetID;

};
Tecnico::Tecnico(string _nombre,string _apellido,string _carilla, int _carnetID) : Persona(_nombre, _apellido, _carilla){
    carnetID = _carnetID;
}
Tecnico::~Tecnico()
{
}
void Tecnico::mostrarCarnet() {
    mostrar();
    cout << "\nCarnet -> " << carnetID;
}

// ------------------- Class Ingeniero hereda Persona ------------------
class IngenieroElectrico : public Persona
{
public:
    IngenieroElectrico(string, string, string, string);
    ~IngenieroElectrico();

private:
    string titulo;

};
IngenieroElectrico::IngenieroElectrico(string _nombre, string _apellido, string _carilla, string _titulo) : Persona(_nombre,_apellido, _carilla)
{
    titulo = _titulo;
}
IngenieroElectrico::~IngenieroElectrico()
{
}
// - - - - - - - - - - - -  Portotipe of function - - - - - - - - - -

static void menu();
void ingresoNuevo();
bool comparacion(string, string);
bool comparacion2(string, string, string, string);
void ingresoSistema();
bool preguntas(string rpta);
void subEleccionDecalculos();
// Prototipe function of electrical 

float qulomb(float, float, float, float);
float intensidadA(float, float);
float ohmR(float, float);
float tensionV(float, float);
float potencia(float, float);
float potenciaAp(float, float);
float calorQ(float, float, float);
float energia(float, float);



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
        ingresoSistema();
    }
    else
    {  // Si no es nuevo ingresa al sistema. 
        do {
            cout << "\n Ingrese su contraseña y usuario. ";
            cout << "\n Usuario: ";  cin >> usuario;
            cout << "\n Contraseña: "; cin >> contraseña;
            if (comparacion2(usuariobase,usuario,contraBase,contraseña)) {
                ingresoSistema(); // Ingreso al sistema. 
            }
            else {  // Mensaje de fallo
                cout << "\n Error. ";
                cout << "\n Verifique nuevamente el usuario o la contraseña. ";
                cout << "\n vuelva a intentarlo. ";
            }
        } while (comparacion2(usuariobase, usuario, contraBase, contraseña) != true);
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
bool comparacion2(string a, string b, string c, string d) { // Comparacion para los ingresos de las personas.
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
        cout << "\n - 7. Desea salir? . " << endl;
        cout << "\n Aqui >>>"; cin >> opc;

    switch (opc)
    {
    case 1:
        subEleccionDecalculos();
        
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
bool preguntas(string rpta) { // funcion depregunta para la Asignacion de respuesta ;
    string rpta;
    cin >> rpta;
    return (rpta != "si") ? true : false;
};

float qulomb(float a, float b, float c, float d) {
    return a = b * ((c * c) / pow(d, 2));
};

float intensidadA(float a, float b) {
    return a / b;
};
float ohmR(float a, float b) {
    return a / b;
};
float tensionV(float a, float b) {
    return a / b;
};
float potencia(float a, float b) {
    return a * b;
};
float potenciaAp(float a, float b) {
    return sqrt(pow(a,2) + pow(b,2));

};
float calorQ(float a, float b, float t) {
    return (a * a) * b * t;
};
float energia(float a, float b) {
    return a * b;

};

void subEleccionDecalculos() {
    cout << "\n Dime que formula matematica quieres: ";
    int opc;
    float v, i, r, p, s, q, t, fp, e;
    cout << "\n -> 1. Energia. ";
    cout << "\n -> 2. Amperaje / Intensidad. ";
    cout << "\n -> 3. Voltios / Tension. ";
    cout << "\n -> 4. Resistencia / Ohm. ";
    cout << "\n -> 5. Potencia / watts. ";
    cout << "\n -> 6. Calor en conductor. ";
    cout << "\n -> 7. Potencia Aparente. ";
    cout << "\n -> 8. Coulomb / Qlmb. ";
    cout << "\n Volver. ";

    cin >> opc;
    switch (opc)
    {

    case 1:
        cout << "\n -- Energia --";
        cout << "\nDime la potencia en w: ";
        cin >> p;
        cout << "\nDime la tension en v: ";
        cin >> t;
        energia(p,t);
        
        break;
    case 2: 
        cout << "\n -- Intensidad / Amperaje -- ";
        cout << "\nDime la potencia en w: ";
        cin >> i;
        cout << "\nDime la tension en v: ";
        cin >> v;
        potencia(i,v);

        break;
    case 3:
        cout << "\n -- Voltios / Tension -- ";
        cout << "\nDime la intensidad / amperaje: ";
        cin >> i;
        cout << "\nDime la potencia: ";
        cin >> p;
        tensionV(p, i);

        break;
    case 4:
        cout << "\n -- Resistencia / Ohm -- ";

        cout << "\nDime la tension: ";
        cin >> v;
        
        cout << "\nDime el amperaje: ";
        cin >> i;

        ohmR(v, i);

        break;
    case 5:
        cout << "\n -- Potencia / Watts -- ";

        cout << "\nDime la tension: ";
        cin >> v;

        cout << "\nDime el amperaje:  ";
        cin >> i;

        potencia(v,i);
        break;
    case 6:
        float resutlado;
        cout << "\n -- Ley de joule -- ";

        cout << "\nDime la intensidad: ";
        cin >> i;

        cout << "\nDime la resistencia: "; 
        cin >> r;

        cout << "\nDime el tiempo: ";
        cin >> t;
        calorQ(i,r,t);
        resultado = calor;
        cout << "\n Es: " << resutlado;


        break;
    case 7:
        cout << "\n -- Potencia aparente -- ";


        break;
    case 8:
        cout << "\n -- Coulomb / Qlmb -- ";
    default: 
        cout << "\n La formula no esta. Sigue buscando.";
        break;
    }


}