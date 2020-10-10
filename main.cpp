#include <iostream>
#include <string.h>
#include <time.h>
#include "Alumno.hpp"
#include "Comparator.hpp"
#include "StringAscendantComparator.hpp"

using namespace std;

template <typename T>
void sort(T [], Comparator, int );

int main()
{
    //clock_t clock1;
    Alumno alumno(); // <<<--- No se usan paréntesis para instanciar objetos en C++ a menos que reciban parámetros
    string datos[] = {"Edilberto", "Torres", "Jose", "Lopez"}; 
    sort(datos,StringAscendantComparator(), 5); 

    //alumno.setfirstName("EDILBERTO");
    return 0;
}

template <typename T>
void sort(T datos[], Comparator comparator, int n) // Para usar los métodos virtuales, se debe hacer a través de apuntadores así que aquí deberías recibir Comparator *comparator
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (comparator.compare(datos[j], datos[j+1]) < 0)
            {
                T temp = datos[j];
                datos[j] = datos[j+1];
                datos[j+1] = temp;
            }
            else
            {
                break;
            }
        }
    }
}
