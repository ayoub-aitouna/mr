/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitouna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 00:32:51 by aaitouna          #+#    #+#             */
/*   Updated: 2022/06/14 00:32:58 by aaitouna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	dec_to_hex(int n)
{
	int	value;

	if (n == 0)
		return ;
	if (n > 16)
		write(1, "0", 1);
	dec_to_hex(n / 16);
	if (n % 16 < 10)
		value = 48 + n % 16;
	else
		value = 87 + n % 16;
	write(1, &value, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			write(1, "\\", 1);
			dec_to_hex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
