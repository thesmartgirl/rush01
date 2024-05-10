int check_double(int tab[4][4], int pos, int num)
{
	int i;

	i = 0;
	while (i < pos / 4)
	{
		if (tab[i][pos % 4] == num)
			return (1);
		i++;
	}
	i = 0;
	while (i < pos % 4)
	{
		if (tab[pos / 4][i] == num)
			return (1);
		i++;
	}
	return (0);
}

/* can be optimized by using 	while (i < pos/4) & 	while (i < pos%4) */
