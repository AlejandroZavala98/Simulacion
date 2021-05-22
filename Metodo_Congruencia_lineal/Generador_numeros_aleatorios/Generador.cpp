#include <iostream>
#include <fstream>  // Para guardar numeros pseudoaletorios en un txt
#include <cstdlib>
#include <cmath>
#include <vector>
#include <time.h>
//Algoritmo por Zavala Prieto Joel Alejandro
using namespace std;
unsigned long long int a= 630360016;
unsigned long long int m= 2147483647;
unsigned long long int s=1;

vector<unsigned long long int> v={1,
1973272912, 281629770, 20006270, 1280689831, 2096730329, 1933576050, 913566091,
246780520, 1363774876, 604901985, 1511192140, 1259851944, 824064364, 150493284,
242708531, 75253171, 1964472944, 1202299975, 233217322, 1911216000, 726370533,
403498145, 993232223, 1103205531, 762430696, 1922803170, 1385516923, 76271663,
413682397, 726466604, 336157058, 1432650381, 1120463904, 595778810, 877722890,
1046574445, 68911991, 2088367019, 748545416, 622401386, 2122378830, 640690903,
1774806513, 2132545692, 2079249579, 78130110, 852776735, 1187867272, 1351423507,
1645973084, 1997049139, 922510944, 2045512870, 898585771, 243649545, 1004818771,
773686062, 403188473, 372279877, 1901633463, 498067494, 2087759558, 493157915,
59710427, 153090798, 1814496276, 536444882, 1663153658, 855503735, 67784357,
1432404475, 619691088, 119025595, 880802310, 176192644, 1116780070, 277854671,
1366580350, 1142483975, 2026948561, 1053920743, 786262391, 1792203830, 1494667770,
1923011392, 1433700034, 1244184613, 1147297105, 539712780, 1545929719, 190641742,
1645390429, 264907697, 620389253, 1502074852, 927711160, 364849192, 2049576050,
638580085, 547070247};

void sUniforme()
{
   s=v[int( time(NULL) ) % int( v.size() )];
}

double Uniforme()
{
    static unsigned long long int z=s;
    z*=a;
    z%=m;
    if( z==0 )
       return 1.0/m;
    return double(z)/m;
}


int main()
{

	long int iteraciones;
	double unif1,unif2;
	iteraciones = 10;
	
	ofstream archivo;
	archivo.open("C:/Users/aleja/Alejandro/Simulacion_DevC++/Generador_numeros_aleatorios/generador_inicial.txt");
	if (!archivo.is_open())
	{
		cout << "Error en el archivo" << endl;
		return 1;
	}
	
	archivo << "Random_Number_1" << "\t" << "Random_Number_2" << endl;
	
	for (int i=0; i<iteraciones; i++)
	{
	unif1 = Uniforme();
	unif2 = Uniforme();
	archivo << unif1 << "\t" << unif2 <<endl;
	}
	
	archivo.flush();
	archivo.close();
	return 0;
}

