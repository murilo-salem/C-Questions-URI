#include <stdio.h>

int main()
{
	int i, k = 0, v = 0;// k é sobre positivos, v é sobre negativos
	float j, sum;
	
	for(i = 1; i <= 6; i++){
		scanf("%f", &j);
		if(j >= 0){
			sum += j;
			k++;
			 } else {
				v++;
				}
		}
		
	printf("%d valores positivos\n", k);
	printf("%.1f\n", sum/k);
	
	return 0;
}

