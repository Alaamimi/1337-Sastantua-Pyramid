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

void		ft_putchar(char c);

#define ODD_NUM(n)	(n % 2 == 1)
#define TIER_GROWTH(n)	(1 + ((!ODD_NUM(n)) ? (n) / 2 : ((n) - 1) / 2))
#define DOOR_SIZE(n)	((ODD_NUM(nth)) ? nth : (nth) - 1)
#define TIER_ROWS(n)	(n + 2)

static void	ft_repeatchar(char c, int i)
{
	while (i-- > 0)
		ft_putchar(c);
}

static int	door_row(int width, int door, int rows)
{
	if (rows < door)
	{
		ft_repeatchar('*', (width - door) / 2);
		if ((door >= 5) && (rows == door / 2))
		{
			ft_repeatchar('|', door - 2);
			ft_putchar('$');
			ft_putchar('|');
		}
		else
			ft_repeatchar('|', door);
		ft_repeatchar('*', (width - door) / 2);
		return (1);
	}
	return (0);
}

static int	print_tier(int last, int nth, int width, int indent)
{
	int	rows;

	rows = TIER_ROWS(nth);
	while (rows--)
	{
		ft_repeatchar(' ', indent + rows);
		ft_putchar('/');
		if (last == 1 && door_row(width, DOOR_SIZE(nth), rows))
			;
		else
			ft_repeatchar('*', width);
		ft_putchar('\\');
		ft_putchar('\n');
		width += 2;
	}
	return (width + (TIER_GROWTH(nth + 1) * 2));
}

static int	recurse(int last, int tier, int indent)
{
	int	width;

	if (tier == 1)
		return (print_tier(last, tier, 1, indent));
	else if (tier > 1)
	{
		width = recurse(0, tier - 1,
							indent + TIER_GROWTH(tier) + TIER_ROWS(tier));
		return (print_tier(last, tier, width, indent));
	}
	return (0);
}

void		sastantua(int size)
{
	recurse(1, size, 0);
}
