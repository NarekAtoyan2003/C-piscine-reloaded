/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:50:14 by naatoyan          #+#    #+#             */
/*   Updated: 2024/01/10 16:42:29 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s2[i] == s1[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s2[i] - s1[i]);
}

void	ft_print(char **argv, int argc)
{
	int	i;

	i = 1;
	while (i != argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 1;
	while (j < argc)
	{
		i = 2;
		while (i < argc)
		{
			if (ft_strcmp(argv[i - 1], argv[i]) <= 0)
			{
				argv[0] = argv[i];
				argv[i] = argv[i - 1];
				argv[i - 1] = argv[0];
			}
			i++;
		}
		j ++;
	}
	ft_print(argv, argc);
	return (0);
}
