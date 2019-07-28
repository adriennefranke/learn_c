#include <stdio.h>

int main()
{
	float fahr, celcius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("celcius	fahr\n");
	while (celcius <= upper) {
		fahr = celcius * (9.0/5.0) + 32;
		printf("%6.1f %3.0f\n", celcius, fahr);
		celcius = celcius + step;
	}
}