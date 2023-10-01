/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitouna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 05:03:02 by aaitouna          #+#    #+#             */
/*   Updated: 2022/06/18 05:03:12 by aaitouna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int Argc, char *Argv[])
{
	int	i;

	i = Argc - 1;
	while (i > 0)
	{
		putstr(Argv[i]);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
