/*-----------------------------------------------------
-                               __                    -
-                             .d$$b                   -
-                           .' TO$;\                  -
-                          /  : TP._;                 -
-                         / _.;  :Tb|                 -
-                        /   /   ;j$j                 -
-                    _.-"       d$$$$                 -
-                  .' ..       d$$$$;                 -
-                 /  /P'      d$$$$P. |\              -
-                /   "      .d$$$P' |\^"l             -
-              .'           `T$P^"""""  :             -
-          ._.'      _.'                ;             -
-       `-.-".-'-' ._.       _.-"    .-"              -
-     `.-" _____  ._              .-"                 -
-    -(.g$$$$$$$b.              .'                    -
-      ""^^T$$$P^)            .(:                     -
-        _/  -"  /.'         /:/;                     -
-     ._.'-'`-'  ")/         /;/;                     -
------------------------------------------------------*/

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	sastantua(int size)
{

	if(size > 0)
	{
		/* Get the number of rows, and the length of the bottomost row */
		int rows = 0;
		int counter1 = 0;

		while (counter1 < size)
		{
			rows = rows + 3 + counter1;
			counter1++;
		}

		int width;
		int counter2 = 1;
		int tier_extra = 2;

		width = 1 + ( (rows - 1) * 2) + 2;
		while (counter2 < size)
		{
			width = width + (2 * tier_extra);
			if(counter2 % 2 == 0)
			{
				tier_extra++;
			}
			counter2++;
		}

		/* Print pyramid */
		int stars = 1;
		int spaces = (width - 3)/2;
		int door;
		if(size % 2 == 1)
		{
			door = size;
		}
		else
		{
			door = size - 1;
		}
		int starsForDoor;

		int rowsTilTierCounter = 3;
		int rowsTilNextTier = 3;
		int everyOtherTierCounter = 1;
		int tierIncrease = 1;

		for(int curRow = 1; curRow <= rows; curRow++){
			for(int x = 1; x <= spaces; x++){ft_putchar(' ');}
			ft_putchar('/');
			if(curRow > rows - door){
				starsForDoor = (stars - door)/2;
				for(int x = 1; x <= starsForDoor; x++){ft_putchar('*');}
				if(door >= 5 && (rows - curRow == (door/2)) ){
					for(int x = 1; x <= door - 2; x++){ft_putchar('|');}
					ft_putchar('$');
					ft_putchar('|');
				}
				else{
					for(int x = 1; x <= door; x++){ft_putchar('|');}
					}
				for(int x = 1; x <= starsForDoor; x++){ft_putchar('*');}
			}
			else
			{
				for(int x = 1; x <= stars; x++){ft_putchar('*');}
			}
			ft_putchar('\\');
			ft_putchar('\n');
					stars = stars + 2;
			rowsTilNextTier--;
			if(rowsTilNextTier == 0)
			{
				rowsTilTierCounter++;
				everyOtherTierCounter++;
				rowsTilNextTier = rowsTilTierCounter;
				if(everyOtherTierCounter % 2 == 0)
				{
					tierIncrease++;
				}
				stars = stars + (tierIncrease * 2);
			}
			
			spaces = (width - stars - 2)/2;
		}
	}	
}

int	main(void)
{
	sastantua(1);
	sastantua(2);
	sastantua(3);
	sastantua(4);
	sastantua(5);
	sastantua(6);
	return (EXIT_SUCCESS);
}
