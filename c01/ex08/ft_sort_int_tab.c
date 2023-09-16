/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_table.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitouna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 04:11:07 by aaitouna          #+#    #+#             */
/*   Updated: 2022/06/12 17:47:54 by aaitouna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *tab, int i)
{
	int	temp;

	temp = tab[i + 1];
	tab[i + 1] = tab[i];
	tab[i] = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	sorted_count;

	i = 0;
	sorted_count = 0;
	while (sorted_count < size)
	{
		if (i >= size - 1)
		{
			i = 0;
		}
		if (tab[i] > tab[i + 1])
		{
			sorted_count = 0;
			ft_swap(tab, i);
		}
		else
		{
			sorted_count++;
		}
		i++;
	}
}
