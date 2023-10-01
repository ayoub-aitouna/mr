/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitouna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:19:10 by aaitouna          #+#    #+#             */
/*   Updated: 2022/06/21 11:19:12 by aaitouna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	lenght;
	int	*tab;
	int	i;

	lenght = max - min;
	i = 0;
	if (lenght <= 0)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *) malloc(lenght * sizeof(int));
	if (tab == NULL)
		return (-1);
	while (i < lenght)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (lenght);
}
