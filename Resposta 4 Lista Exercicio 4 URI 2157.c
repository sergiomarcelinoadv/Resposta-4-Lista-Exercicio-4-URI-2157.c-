#include <iostream>
 
using namespace std;
 
int main() {
 
   	unsigned short numero1, numero2, i, j, casos;
	unsigned short aux, aux2;

	scanf("%hu", &casos);

	while (casos--)
	{
		scanf("%hu %hu", &numero1, &numero2);

		for (i = numero1; i <= numero2; i++)
			printf("%hu", i);

		for (i = numero2; i >= numero1; i--)
		{
			aux = i;
			while (aux)
			{
				aux2 = aux%10;
				printf("%hu", aux2);
				aux = aux/10;
			}

		}	

		printf("\n");
	}
 
    return 0;
}
