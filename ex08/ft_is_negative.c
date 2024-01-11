/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:31:06 by naatoyan          #+#    #+#             */
/*   Updated: 2024/01/10 17:19:42 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<unistd.h>
void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}
//int	main(void)
//{
//	ft_is_negative(-6);
//	return (0);
//}
