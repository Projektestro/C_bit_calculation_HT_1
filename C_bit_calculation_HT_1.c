#include <stdio.h>
#include <stdlib.h>

// Задание: рассчитать количество единиц в двоичной записи заданного числа

int main(int argc, char *argv[]) {
	
	int dec = 0;
	int bin = 0;
	
	int cmd = 0;
	
	do
	{
		printf("Choose action\n");
		printf("1. Count bits \n");
		printf("0. Exit\n");		
		
		scanf("%i", &cmd);
		
		switch(cmd)
			{
			case 1:
				{
				printf("Enter decimal number:\n");
				scanf("%i", &dec);
				
				while(dec >= 1)
					{
					if((dec % 2) == 1)
						{
						bin++;
						}
					
					dec = (dec - dec % 2) / 2;
					}
				
				printf("The count of '1' in binary number is %i \n", bin);
				}	
				break;
			default:
				break;	
			}
		bin = 0;			
	}
	while(cmd);
	
	return 0;
}