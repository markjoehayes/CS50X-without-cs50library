#include<stdio.h>

int main(void)

{
	int change;
	int quarter = 25;
	int num_coins = 0;

	printf("change owed: ");
	scanf("%d", &change);

	while (change / quarter > 0){
		++num_coins;
		change -= quarter;
	}
	printf("%d\n", num_coins);
}
