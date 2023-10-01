/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitouna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 04:57:38 by aaitouna          #+#    #+#             */
/*   Updated: 2022/06/18 04:57:41 by aaitouna         ###   ########.fr       */
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

	i = 1;
	while (i < Argc)
	{
		putstr(Argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
