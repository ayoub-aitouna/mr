/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitouna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 08:34:52 by aaitouna          #+#    #+#             */
/*   Updated: 2022/06/21 08:34:54 by aaitouna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	array_length;
	int	*arr;
	int	i;

	array_length = max - min;
	i = 0;
	if (array_length <= 0)
		return (NULL);
	arr = (int *) malloc((array_length) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	while (i < (max - min))
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
