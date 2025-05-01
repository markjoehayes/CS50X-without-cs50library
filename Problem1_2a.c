/*In a file called mario.c in a folder called mario-more, implement a program in C that recreates that pyramid, using hashes (#) for bricks, as in the below:

   #  #
  ##  ##
 ###  ###
####  ####

And let’s allow the user to decide just how tall the pyramids should be by first prompting them for a positive int between, say, 1 and 8, inclusive.
*/

#include<stdio.h>

int main(void)
{
    int height;	

	do{
		printf("Enter Height of pyramid (1-8): ");
		scanf("%d", &height);
	}
	while (height < 1 || height > 8);

	/*build pyramid*/
	for(int row = 0; row < height; row++){
		/*left spaces*/
		for (int space = 0; space < height- row - 1; space++)
			printf(" ");
		/*print left side hashes*/
		for(int hash = 0; hash <= row; hash++)
			printf("#");
		/*Gaps between pyramids*/
			printf("  ");
		/*right side hashes*/
		for(int hash = 0; hash <= row; hash++)
			printf("#");
		puts("");
	}
	return (0);
}


