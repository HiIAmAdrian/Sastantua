/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 17:24:01 by adstan            #+#    #+#             */
/*   Updated: 2017/08/20 22:11:58 by adstan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

int spatii(size)
{
	int i;
	int ss; 
	int nr_stelute_rand;
	int j;
	int k;
	int idk;
	int stele_adaugate;

	i = 0;
	j = 0;
	k = 1;
	ss = 0;
	stele_adaugate = 4;
	idk = 3;
	nr_stelute_rand = 1;
	while (k <= size)
	{   
		while (j < idk)
		{   
			if (k == size)
				while(i < nr_stelute_rand)
					i++;
			j++;
			nr_stelute_rand += 2;
		}   
		j = 0;
		idk++;
		k++;
		ss++;
		nr_stelute_rand += stele_adaugate;
		if ( ss == 2)
		{   
			ss = 0;
			stele_adaugate += 2;
		}   
	}   
	return (i);
}

void baza(nr_stelute_rand, idk, size)
{
	int s;
	int i;
	int j;
	int spatii_rand;
	int k;
	int p;

	i = 0;
	j = 0;
	k = 0;
	p = 0;
	if (size % 2 == 0)
		s = size - 1;
	else 
		s = size;
	while (i < idk - s)
	{	
		spatii_rand = (spatii(size) / 2) - (nr_stelute_rand/2);
		while(spatii_rand > 0)
		{   
			ft_putchar(' ');
			spatii_rand--;
		}  
		ft_putchar('/');
		j = 0;
		while (j < nr_stelute_rand)
		{	
			ft_putchar('*');
			j++;
		}
		ft_putchar('\\');
		ft_putchar('\n');
		nr_stelute_rand+=2;
		i++;
	}
	i = 0;
	j = 0;
	while (j < s)
	{
		spatii_rand = (spatii(size) / 2) - (nr_stelute_rand/2);
		while(spatii_rand > 0)
		{   
			ft_putchar(' ');
			spatii_rand--;
		} 
		ft_putchar ('/');
		i = 0;
		while (i < ((nr_stelute_rand -s ) / 2))
		{	
			ft_putchar('*');
			i++;
		}
		i = 0;
		while (i < s)
			{
				if (p == s/2 && i == s - 2 && size > 4)
					ft_putchar('$');
				else	
					ft_putchar('|');
				i++;
			}
			p++;		
		i = 0;
		while (i < ((nr_stelute_rand - s ) / 2))
		{   
			ft_putchar('*');
			i++;
		}
		ft_putchar ('\\');
		ft_putchar ('\n');
		j++;
		nr_stelute_rand+=2;
	}
}
void sastantua(int size)
{
	int nr_stelute_rand;
	int i;
	int j;
	int k;
	int idk;
	int ss;
	int stele_adaugate;
	int spatii_rand;

	i = 0;
	j = 0;
	k = 1;
	ss = 0;
	stele_adaugate = 4;
	idk = 3;
	nr_stelute_rand = 1;
	while (k < size)
	{	while (j < idk)
		{
			spatii_rand = (spatii(size) / 2) - (nr_stelute_rand/2);
			while(spatii_rand > 0)
			{
				ft_putchar(' ');
				spatii_rand--;
			}
			ft_putchar('/');
			i = 0;
			while(i < nr_stelute_rand)
			{	
				ft_putchar('*');
				i++;
			}	
			ft_putchar('\\');
			ft_putchar('\n');
			j++;
			nr_stelute_rand += 2;
		}
		j = 0;
		idk++;
		k++;
		ss++;
		nr_stelute_rand += stele_adaugate;
		if ( ss == 2)
		{
			ss = 0;
			stele_adaugate += 2;
		}
	}
	baza(nr_stelute_rand,idk,size);
}
