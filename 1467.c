#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()

{
	int A, B, C;
	char Vencedor;

	scanf("%d %d %d", &A, &B, &C);

	do
	{
		if (A==B && A==C && B==C)
			Vencedor = '*';
		else
			if (A!=B && B==C)
				Vencedor = 'A';
			else
				if (A==C && B!=A)
					Vencedor = 'B';
            else
                if (A==B && C!=A)
                    Vencedor = 'C';

	printf("%c\n", Vencedor);

	} while ( (scanf("%d %d %d", &A, &B, &C)!=EOF));





	return 0;
}
