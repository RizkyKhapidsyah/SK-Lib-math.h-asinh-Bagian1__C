/* asinh example */
#include <stdio.h>      /* printf */
#include <math.h>       /* asinh, exp, cosh */
#include <conio.h>

/*	Source by CPlusPlus
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019
*/

int main() {
	double param, result;

	param = exp(2) - cosh(2);
	result = asinh(param);
	
	printf("The area hyperbolic sine of %f is %f.\n", param, result);
	_getch();
	return 0;
}