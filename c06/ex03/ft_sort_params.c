/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitouna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 05:08:42 by aaitouna          #+#    #+#             */
/*   Updated: 2022/06/18 05:08:46 by aaitouna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_char_tab(char *tab[], int size)
{
	int		counter;
	int		sorted_count;
	char	*temp;

	counter = 1;
	sorted_count = 1;
	while (sorted_count < size)
	{
		if (counter >= size - 1)
		{
			counter = 1;
		}
		if (ft_strcmp(tab[counter], tab[counter + 1]) > 0)
		{
			sorted_count = 1;
			temp = tab[counter + 1];
			tab[counter + 1] = tab[counter];
			tab[counter] = temp;
		}
		else
		{
			sorted_count++;
		}
		counter++;
	}
}

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	sort_arg(char *str[], int size)
{
	int	i;

	i = 1;
	ft_sort_char_tab(str, size);
	while (i < size)
	{
		putstr(str[i]);
		i++;
	}
}

int	main(int Argc, char *Argv[])
{
	if (Argc >= 3)
		sort_arg(Argv, Argc);
	else if (Argc == 2)
		putstr(Argv[1]);
	return (0);
}
