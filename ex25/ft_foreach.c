/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:44:34 by naatoyan          #+#    #+#             */
/*   Updated: 2024/01/10 17:57:13 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<unistd.h>

void	ft_putnbr(int nb);
void	ft_foreach(int *tab, int length, void (*f)(int));

int	main (void)
{
	int a[7] = {1, 2, 3, 4, 5, 6, 7};
	ft_foreach(a, 7, &ft_putnbr);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}
*/
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i != length)
	{
		f(tab[i]);
		i++;
	}
}
