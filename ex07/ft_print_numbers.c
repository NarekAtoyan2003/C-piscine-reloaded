/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:41:59 by naatoyan          #+#    #+#             */
/*   Updated: 2024/01/10 17:07:56 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<unistd.h>
void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	n;

	n = '0';
	while (n <= '9')
	{
		ft_putchar(n);
		n++;
	}
}

//int	main ()
//{
//	ft_print_numbers();
//	return (0);
//}
