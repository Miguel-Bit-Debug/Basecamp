/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midos-sa <midos-sa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 13:18:50 by midos-sa          #+#    #+#             */
/*   Updated: 2021/04/11 22:47:45 by midos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = 0;
	while (x <= 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_putchar('0' + x / 10);
			ft_putchar('0' + x % 10);
			ft_putchar(' ');
			ft_putchar('0' + y / 10);
			ft_putchar('0' + y % 10);
			if (x != 98 || y != 99)
			{
				write(1, ", ", 2);
			}
			y++;
		}
		x++;
	}
}

int main()
{
	ft_print_comb2();
}