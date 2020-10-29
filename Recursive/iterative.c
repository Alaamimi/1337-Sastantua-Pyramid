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

static int	print_tier(int last, int nth, int width, int total_width)
{
	int	rows;
	int door;

	door = DOOR_SIZE(nth);
	rows = TIER_ROWS(nth);
	while (rows--)
	{
		ft_repeatchar(' ', (total_width - width) / 2);
		ft_putchar('/');
		if (last == 1 && rows < door)
		{
			ft_repeatchar('*', (width - door) / 2);
			ft_repeatchar('|', door - 2);
			ft_putchar(((door >= 5) && (rows == door / 2)) ? '$' : '|');
			ft_putchar('|');
			ft_repeatchar('*', (width - door) / 2);
		}
		else
			ft_repeatchar('*', width);
		ft_putchar('\\');
		ft_putchar('\n');
		width += 2;
	}
	return (width);
}

static int	get_total_width(int tiers)
{
	int width;

	width = 0;
	while (tiers > 0)
	{
		width += TIER_ROWS(tiers) * 2;
		if (tiers - 1 > 0)
			width += TIER_GROWTH(tiers) * 2;
		tiers--;
	}
	return (width);
}

void		sastantua(int tiers)
{
	int i;
	int width;
	int	total_width;

	total_width = get_total_width(tiers);
	width = 1;
	i = 0;
	while (++i <= tiers)
	{
		width = print_tier(((i == tiers)), i, width, total_width);
		if (i + 1 <= tiers)
			width += TIER_GROWTH(i + 1) * 2;
	}
}
