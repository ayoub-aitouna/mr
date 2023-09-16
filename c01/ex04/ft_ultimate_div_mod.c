/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitouna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 21:23:53 by aaitouna          #+#    #+#             */
/*   Updated: 2022/06/11 21:23:57 by aaitouna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_dev;
	int	temp_mod;

	temp_dev = *a / *b;
	temp_mod = *a % *b;
	*a = temp_dev;
	*b = temp_mod;
}
