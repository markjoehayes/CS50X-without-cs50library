/*In a file called mario.c in a folder called mario-less, implement a program in C that recreates that pyramid, using hashes (#) for bricks, as in the below:

       #
      ##
     ###
    ####
   #####
  ######
 #######
########

But prompt the user for an int for the pyramid’s actual height, so that the program can also output shorter pyramids like the below:

  #
 ##
###

Re-prompt the user, again and again as needed, if their input is not greater than 0 or not an int altogether.
*/

#include<stdio.h>

int main(void)
{
	int result, height, i, j, k;

	while(1){
		printf("Height: ");
		result = scanf("%d", &height);
		if (height < 0 || result != 1){
			while (getchar() != '\n');
			continue;
		}
		else
			break;
	}

	for (i = 1; i <= height; ++i){
		for(k=0; k < 2 * (height - i) -1; k++)
			printf(" ");
		    for(j = 1; j <= i; ++j )
				printf("# ");
		puts("");
	}
		
}
