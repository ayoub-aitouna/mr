/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitouna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 21:08:02 by aaitouna          #+#    #+#             */
/*   Updated: 2022/06/13 21:08:04 by aaitouna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdbool.h>

bool	ft_is_character(char c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'));
}

bool	ft_is_lower(char c)
{
	return (c <= 122 && c >= 97);
}

void	ft_lower(char *c)
{
	if (!ft_is_lower(*c))
	{
		*c += 32;
	}
}

void	ft_upper(char *c)
{
	if (ft_is_lower(*c))
	{
		*c -= 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	bool	is_first_character;

	i = 0;
	is_first_character = true;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			is_first_character = false;
		else if (ft_is_character(str[i]))
		{
			if (is_first_character)
			{
				ft_upper(&str[i]);
				is_first_character = false;
			}
			else
				ft_lower(&str[i]);
		}
		else
			is_first_character = true;
		i++;
	}
	return (str);
}
