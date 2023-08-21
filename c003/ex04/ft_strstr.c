/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitouna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 08:21:11 by aaitouna          #+#    #+#             */
/*   Updated: 2022/06/14 08:21:12 by aaitouna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		to_find_lenght;

	i = 0;
	j = 0;
	to_find_lenght = 0;
	if (to_find[0] == '\0')
		return (str);
	while (to_find[to_find_lenght])
		to_find_lenght++;
	while (str[i])
	{
		if (to_find[j] == str[i] && to_find[j])
		{
			j++;
			if (j == to_find_lenght)
				return (&str[i - j + 1]);
		}
		else
			j = 0;
		i++;
	}
	return (0);
}
