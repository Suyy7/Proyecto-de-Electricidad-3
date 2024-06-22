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
    Persona(string , string, int);
    ~Persona();
    virtual void mostrar();
private:
    string usuario;
    string contraseña;
    string nombre;
    string apellido;
    int edad;
};
Persona::Persona(string _nombre, string _apellido, int _edad)
{
    nombre = nombre;
    apellido = _apellido;
    edad = _edad;
}
Persona::~Persona()
{
}
void Persona::mostrar() {
    cout << "\nSon: " << nombre << " " << apellido << " " << edad;
}


// ----------------------- Class que hereda persona --------------------
class Tecnico : public Persona
{
public:
    Tecnico(string, string, int, int);
    ~Tecnico();
    void mostrarCarnet();

private:
    int carnetID;

};
Tecnico::Tecnico(string _nombre,string _apellido,int _edad, int _carnetID) : Persona(_nombre, _apellido, _edad){
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
    IngenieroElectrico(string, string, int, string, string);
    ~IngenieroElectrico();

private:
    string titulo;
    string matricula;

};
IngenieroElectrico::IngenieroElectrico(string _nombre, string _apellido, int _edad, string _titulo, string _matricula) : Persona(_nombre, _apellido, _edad)
{
    matricula = _matricula;
    titulo = _titulo;
}
IngenieroElectrico::~IngenieroElectrico()
{
}

// -----------------------------------------------------------------------//
// - - - - - - - - - - - -  Portotipe of function - - - - - - - - - -

static void menu();
void ingresoNuevo();
bool comparacion(string, string);
bool comparacion2(string, string, string, string);
void ingresoSistema();
bool preguntas(string rpta);
void subEleccionDecalculos();
void menuDeLeyes();
void planosGuardados();
void herramientasYusos();
void contactos();
void ayudaDeEmpresa();
void datosNuevos();
// Prototipe function of electrical calculates


float intensidadA(float, float);
float ohmR(float, float);
float tensionV(float, float);
float potencia(float, float);
float potenciaAp(float, float);
float calorQ(float, float, float);
float energia(float, float);



int main()
{
    cout << "\t Menu de ingreso ";
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
    string rta;
    


    cout << "\t Bienvenido, nuevo usuario. " << endl;
    cout << "\n Eres profesional? "; cin >> rta;
    if (preguntas(rta)) {
        datosNuevos();
    }
    else {
        cout << "\n Bienvenido Gente Normie ";
        datosNuevos();
    }

    
    

};

// Comaparacion basica de usuario. 
bool comparacion(string a, string b) { // comparacion de char sea contra o usuario. 
    return (a == b) ? true : false;
};
bool comparacion2(string a, string b, string c, string d) { // Comparacion para los ingresos de las personas.
    return (a == b && c == d) ? true : false;
};
void ingresoSistema() {
    int opc = NULL;

    do {
        cout << "\t Bienvenido al sistema. " << endl;
        cout << "\n Digite una opcion luego del siguiente menu. ";
        cout << "\n - 1. Calculos Electricos. " << endl;
        cout << "\n - 2. Leyes, normativas y convenios. " << endl;
        cout << "\n - 3. Planos guardados. " << endl;
        cout << "\n - 4. Herramientas de medicion y sus usos. " << endl;
        cout << "\n - 5. Contactos de recomendacion. " << endl;
        cout << "\n - 6. Ayuda de la empresa. " << endl;
        cout << "\n - 7. Desea salir? . " << endl;
        cout << "\n Aqui >>> "; cin >> opc;

        switch (opc)
        {
        case 1:
            
            subEleccionDecalculos();

            break;

        case 2:
            
            menuDeLeyes();

            break;

        case 3:

            planosGuardados();

            break;
        case 4:

            herramientasYusos();

            break;
        case 5:

            contactos();

            break;
        case 6:

            ayudaDeEmpresa();

            break;
        case 7: 
            break;

        
        }
    } while (opc != 7);
}; 

bool preguntas(string rpta) { // funcion depregunta para la Asignacion de respuesta ;
    string rpta;
    
    cin >> rpta;
    return (rpta == "si") ? true : false;
};
// Formulas Matematicas electricas basicas para las funciones 
// que necesitan realizar medidas. 

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

    int opc;
    float v, i, r, p, s, q, t, fp, e, resultado, calor;
    do {
        cout << "\n Dime que formula matematica quieres: ";

        cout << "\n -> 1. Energia. ";
        cout << "\n -> 2. Amperaje / Intensidad. ";
        cout << "\n -> 3. Voltios / Tension. ";
        cout << "\n -> 4. Resistencia / Ohm. ";
        cout << "\n -> 5. Potencia / watts. ";
        cout << "\n -> 6. Calor en conductor. ";
        cout << "\n -> 7. Volver. ";

        cin >> opc;
        switch (opc) {
        case 1:
            cout << "\n -- Energia --";

            cout << "\nDime la potencia en w: ";
            cin >> p;
            cout << "\nDime la tension en v: ";
            cin >> t;

            resultado = energia(p, t);
            cout << resultado;

            break;
        case 2:
            cout << "\n -- Intensidad / Amperaje -- ";

            cout << "\nDime la potencia en w: ";
            cin >> i;
            cout << "\nDime la tension en v: ";
            cin >> v;

            resultado = potencia(i, v);
            cout << resultado;

            break;
        case 3:
            cout << "\n -- Voltios / Tension -- ";

            cout << "\nDime la intensidad / amperaje: ";
            cin >> i;
            cout << "\nDime la potencia: ";
            cin >> p;

            resultado = tensionV(p, i);
            cout << resultado << endl;

            break;
        case 4:
            cout << "\n -- Resistencia / Ohm -- ";

            cout << "\nDime la tension: ";
            cin >> v;
            cout << "\nDime el amperaje: ";
            cin >> i;

            resultado = ohmR(v, i);
            cout << resultado << endl;

            break;
        case 5:
            cout << "\n -- Potencia / Watts -- ";

            cout << "\nDime la tension: ";
            cin >> v;
            cout << "\nDime el amperaje:  ";
            cin >> i;

            resultado = potencia(v, i);
            cout << resultado;

            break;
        case 6:

            cout << "\n -- Ley de joule -- ";

            cout << "\nDime la intensidad: ";
            cin >> i;
            cout << "\nDime la resistencia: ";
            cin >> r;
            cout << "\nDime el tiempo: ";
            cin >> t;

            resultado = calorQ(i, r, t);
            cout << "\n Es: " << resultado << " C";

            break;
        }
    } while (opc != 7);

}

void menuDeLeyes() {
    int opc;
    
    do {
        cout << "\n\t- Menu de Leyes y Normativas - ";
        cout << "\n - Dime que estas buscando. ";
        cout << "\n - 1. Normativa de acometida domiciliaria. ";
        cout << "\n - 2. Normativa de tablero electrico domiciliario. ";
        cout << "\n - 3. Normativa de cargas, grosor y tipo de cable. ";
        cout << "\n - 4. Normativa de acometida para locales. ";
        cout << "\n - 5. Normativa de tablero para locales. ";
        cout << "\n - 6. Salir. ";
        cout << "\n -> Dime tu eleccion: ";
        cin >> opc;

        switch (opc)
        {
        case 1: 
            cout << " \n Normativa de acometida domiciliaria.";

            break;
        case 2: 
            cout << "\n Normativa de tablero electrico domiciliario. ";

            break;
        case 3: 
            cout << "\n Normativa de cargas, grosor y tipo de cable.";

            break;
        case 4: 
            cout << "\n Normativa de acometida para locales.";

            break;
        case 5: 
            cout << "\n Normativa de tablero para locales. "; 

            break;
        case 6: 
            break;
        }


    } while (opc != 6);



};
void planosGuardados() {
    int planos[10];
    cout << "\n\t - Planos - ";
    cout << "\n Plano " << planos[0]; 



};
void herramientasYusos() {
    cout << "\n\t - Herramientas de medicion - "; 
    cout << "\n Multimetro basico: ";
    cout << "\n Pinza VoltAmperometrica. ";


};
void contactos() {
    cout << "\n\t - Contactos - Clientes - Mas -";
    cout << "\n Electricistas / Ingenieros ";
    cout << "\n Clientes. ";



};
void ayudaDeEmpresa() {
    cout << "\n\t - Ayuda de empresas / instituciones. -";
    cout << "\n - Contacto de institucion. ";


}; 

void datosNuevos() {
    string nombre;
    string apellido;
    string nUsuario;
    string contraseña;
    string matricula;
    string actividad;





    cout << "\n Dime tu nombre: "; cin >> nombre;
    cout << "\n Dime tu apellido: "; cin >> apellido;
    cout << "\n Dime tu usuario: "; cin >> nUsuario;
    cout << "\n Dime tu contraseña: "; cin >> contraseña;
    cout << "\n Dime tu actividad: "; cin >> actividad;



};