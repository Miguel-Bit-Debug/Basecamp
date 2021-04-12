/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midos-sa <midos-sa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 20:27:34 by midos-sa          #+#    #+#             */
/*   Updated: 2021/04/11 20:02:36 by midos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(char x, char y, char z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = '0';
	while (i <= ('6' + 1))
	{
		j = i + 1;
		while (j <= ('7' + 1))
		{
			k = j + 1;
			while (k <= ('8' + 1))
			{
				print(i, j, k);
				if (i < '6' + 1)
				{
					write(1, ", ", 2);
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
