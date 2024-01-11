/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:04:54 by naatoyan          #+#    #+#             */
/*   Updated: 2024/01/10 17:15:32 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int	a;

	a = 97;
	while (a <= 122)
	{
		ft_putchar(a);
		a++;
	}
}
/*
int 	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
