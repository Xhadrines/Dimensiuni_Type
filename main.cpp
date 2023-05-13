/*
 * Autor: Xhadrines
 *
 * Data: 23.11.2022
 * 
 * Descriere:
 * 	In aceast programel afiseaza dimensiunile la fiecare type
 * 
 * P.S. Aceasta aplicatie a fost realizata in linux folosind terminalul
 */

#include <iostream>
#include <climits>

using namespace std;

int main() 
{
	cout << "=========================================" << endl;
	
    	cout << "Informatii folosind sizeof: " << endl;
	
    	cout << "\tchar: " << sizeof(char) << " bytes." << endl;
	
    	cout << "\tint : " << sizeof(int) << " bytes." << endl;
	
    	cout << "\tunsigned int: " << sizeof(unsigned int) << " bytes." << endl;
	
   	cout << "\tshort: " << sizeof(short) << " bytes." << endl;
	
   	cout << "\tlong: " << sizeof(long) << " bytes." << endl;
	
    	cout << "\tlong long: " << sizeof(long long) << " bytes." << endl;

    	cout << "\tfloat: " << sizeof(float) << " bytes." << endl;
	
    	cout << "\tdouble: " << sizeof(double) << " bytes." << endl;
	
    	cout << "\tlong double: " << sizeof(long double) << " bytes." << endl;

	cout << "=========================================" << endl;
	
	cout << "Informatii folosind valorile din climits." << endl;
    
    	cout << "Valorile minime: " << endl;
	
    	cout << "\tchar: " << CHAR_MIN << endl;
	
    	cout << "\tint: " << INT_MIN << endl;
	
    	cout << "\tshort: " << SHRT_MIN << endl;
	
    	cout << "\tlong: " << LONG_MIN << endl; 
	
    	cout << "\tlong long: " << LLONG_MIN << endl;
    
    	cout << "Valorile maxime: " << endl;
	
    	cout << "\tchar: " << CHAR_MAX << endl;
	
    	cout << "\tint: " << INT_MAX << endl;
	
    	cout << "\tshort: " << SHRT_MAX << endl;
	
    	cout << "\tlong: " << LONG_MAX << endl;
	
    	cout << "\tlong long: " << LLONG_MAX << endl;
	
	cout << "=========================================" << endl;
	
    	return 0;
}

