/*Suppose you work at a store and a customer gives you $1.00 (100 cents) for candy that costs $0.50 (50 cents). You’ll need to pay them their “change,” the amount leftover after paying for the cost of the candy. When making change, odds are you want to minimize the number of coins you’re dispensing for each customer, lest you run out (or annoy the customer!). In a file called cash.c in a folder called cash, implement a program in C that prints the minimum coins needed to make the given amount of change, in cents, as in the below:

Change owed: 25
1

But prompt the user for an int greater than 0, so that the program works for any amount of change:

Change owed: 70
4

Re-prompt the user, again and again as needed, if their input is not greater than or equal to 0 (or if their input isn’t an int at all!).
*/

#include<stdio.h>

int main(void)
{
	int change;
	int result, quarter = 25, dime = 10, nickel = 5, penny = 1, num_coins = 0;


	do{
		printf("Change owed: ");
	 	result = scanf("%d", &change);
		while (getchar() != '\n');
	}
	
	while (change < 0 || result != 1);
	if (change == 0)
		printf("%d\n", 0);

	while ((change / quarter) > 0){
		++num_coins;
		change -= quarter;
	}
	while ((change / dime) > 0){
		++num_coins;
		change -= dime;
	}
	while ((change / nickel) > 0){
		++num_coins;
		change -= nickel;
	}
	while ((change / penny) > 0){
		++num_coins;
		change -= penny;
	}

	printf("%d\n", num_coins);
	return (0);
}

