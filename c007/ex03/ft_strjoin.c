/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitouna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:46:18 by aaitouna          #+#    #+#             */
/*   Updated: 2022/06/21 11:46:19 by aaitouna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	get_total_lenght(int size, char **strs)
{
	int	i;
	int	j;
	int	totla_size;

	totla_size = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			totla_size++;
			j++;
		}
		totla_size++;
		i++;
	}
	return (totla_size);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		totla_size;
	int		i;
	int		k;
	char	*tab;

	i = 0;
	k = 0;
	while (sep[k])
		k++;
	totla_size = get_total_lenght(size, strs);
	if (size)
		totla_size += k * (size - 1);
	tab = (char *) malloc(totla_size + 1);
	if (tab == NULL)
		return (NULL);
	tab[0] = '\0';
	while (i < size)
	{	
		ft_strcat(tab, strs[i]);
		if (i < size - 1)
			ft_strcat(tab, sep);
		i++;
	}
	return (tab);
}
