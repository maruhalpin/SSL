#include <stdio.h>

int main()
{
	FILE* f=fopen("output.txt","w");

	fprintf(f,"Hello, World!"); // Imprime Hello, World! en el archivo output.txt

	fclose(f);
	return 0;
}
