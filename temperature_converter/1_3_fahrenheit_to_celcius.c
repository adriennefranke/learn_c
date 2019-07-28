#include <stdio.h>

/* print Fahrenheit-Celcius table
	for fahr = 0, 20, ..., 300 */
int main()
{
	
	// all variables must be declared before they are used in C
	// these next 3 lines are a declaration
	
	float fahr, celcius;
	float lower, upper, step;

	//these next 3 lines are assignment statements which set the variables to their initial values
	
	lower = 0; /* lower limit of temperature scale */
	upper = 300; /* upper limit */
	step = 20; /* step size */

	fahr = lower;
	printf("fahr celcius\n"); // this is a heading above the table
	while (fahr <= upper)	{
		celcius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celcius);
		fahr = fahr + step;
	}
}