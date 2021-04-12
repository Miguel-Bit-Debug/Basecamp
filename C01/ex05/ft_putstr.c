/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midos-sa <midos-sa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:40:09 by midos-sa          #+#    #+#             */
/*   Updated: 2021/04/12 16:44:44 by midos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putstr()
{
	char nome[] = "miguel";
	int i;

	i = -1;
	while(i++ < 6)
	{
		printf("%c\n", nome[i]);
		if (i == 6)
		{
			return ;
		}
	}
}

int main(void)
{
	ft_putstr();
	return (0);
}