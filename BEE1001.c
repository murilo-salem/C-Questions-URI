#include <stdio.h>

int main()
{
	int A, B, X;
	
	scanf("%d", &A);
	scanf("%d", &B);
	X = A + B;
	
	printf("X = %d\n", X);
	// Para printar a variável não é necessário usar &.
	
	return 0;
}

