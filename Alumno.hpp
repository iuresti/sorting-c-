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