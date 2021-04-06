/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midos-sa <midos-sa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 23:42:50 by midos-sa          #+#    #+#             */
/*   Updated: 2021/04/05 19:37:28 by midos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main()
{
	int vetor[] = {1, 2, 3, 4, 5, 8, 9, 11, 10, 15};
	int aux;

	for(int x = 0; x < 10; x++)
	{
		for(int y = x; y < 10; y++)
		{
			if(vetor[x] > vetor[y])
			{
				aux = vetor[x];
				vetor[x] = vetor[y];
				vetor[y] = aux;
			}
		}
	}

	for(int z = 0; z  < 10; z++)
	{
		printf("%d\n", vetor[z]);
	}
	return(0);
}
