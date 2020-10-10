#include <iostream>
#include <time.h>

using namespace std;

class Alumno
{
private:
    string firstName;
    string lastName;
    int clave;
    clock_t birthday;

public:
    Alumno();
    Alumno(string, string, int);
    string getfirstName();
    string getlastName();
    clock_t getbirthday();
    int getclave();
    void setfirstName(string);
    void setlastName(string);
    void setclave(int);
    void setbirthday(clock_t);
    void printAlumno();
    ~Alumno();
};

// Te recomiendo separar la declaración (en un archivo .h) y la implementación (en un archivo .cpp) .. 
// con los templates creo que no se puede, pero si la clase no usa templates, mejor sepárala

Alumno::Alumno() {}

Alumno::Alumno(string _firstName, string _lastName, int _clave /*,clock_t _birthday*/)
{
    firstName = _firstName;
    lastName = _lastName;
    clave = _clave;
    //birthday = _birthday;
}
string Alumno::getfirstName()
{
    return firstName;
}

string Alumno::getlastName()
{
    return lastName;
}

int Alumno::getclave()
{
    return clave;
}

// Utiliza referencias cuando pases objetos por parámetro, en C++ debes tener cuidado al pasar objetos por parámetro .. si no son referencias 
// llamas al constructor de copia al entrar y al destructor al salir innecesariamente, generando más memoria y procesamiento... incluso hay casos donde
// podría generar un bug
//
// Es decir, tu parámetro debería ser: string &_firstName
// O mejor aún.. const string &_firstName
// Una referencia constante da la certeza de que el objeto pasado por parámetro no será modificado (el estado) dentro del método que lo usa
void Alumno::setfirstName(string _firstName)
{
    firstName = _firstName;
}
void Alumno::setlastName(string _lastName)
{
    lastName = _lastName;
}

void Alumno::setclave(int _clave)
{
    clave = _clave;
}

void Alumno::printAlumno()
{
    cout << firstName << lastName << clave;
}
