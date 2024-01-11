/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:42:50 by naatoyan          #+#    #+#             */
/*   Updated: 2024/01/08 16:53:37 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb >= 1)
		i *= nb * ft_recursive_factorial(nb - 1);
	return (i);
}
/*
int main()
{
	printf("%d",ft_recursive_factorial(24));
}*/
