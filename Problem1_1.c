/*in a file called hello.c, in a folder called me, implement a program in C that prompts the user for their name and then says hello to that user. For instance, if the user’s name is Adele, your program should print hello, Adele\n!
*/

#include<stdio.h>

int main(void)
{
	char name[25];

	printf("What's your name? ");
	scanf("%s", name);
	printf("hello, %s\n", name);
	return (0);
}
