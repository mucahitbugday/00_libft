/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 01:44:50 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/17 12:13:16 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// gönderilen karakterden sonrasını alır ve yenı dızı olusturur
//	kelime sayar
int	ft_wordcounter(const char *str, char c)
{
	int	i;
	int	c_mi;

	i = 0;
	c_mi = 0;
	while (*str)
	{
		if (*str != c && c_mi == 0)
		{
			c_mi = 1;
			i++;
		}
		else if (*str == c)
			c_mi = 0;
		str++;
	}
	return (i);
}

//	kelimenin uzunlugunu sayar

int	ft_charcounter(const char *str, char c)
{
	int	i;

	i = 0;
	while (*str && (*str != c))
	{
		i++;
		str++;
	}
	return (i);
}

char	**ft_split(char const *str, char c)
{
	char	**ret;
	int		retindex;

	retindex = 0;
	if (!str)
		return (0);
	ret = malloc(sizeof(char *) * ft_wordcounter(str, c) + 1);
	if (!ret)
		return (0);
	while (*str)
	{
		while (*str == c && *str)
			str++;
		if (*str == '\0')
			break ;
		ret[retindex] = ft_substr(str, 0, ft_charcounter(str, c));
		retindex++;
		str += ft_charcounter(str, c);
	}
	ret[retindex] = NULL;
	return (ret);
}

/*
#include <stdio.h>
int		main(void)
{
	int i = 0;
	char **tab;

	char *x = "Mücahit Buğday";
		
	tab = ft_split(x, ' ');
	while (i <= ft_strlen(tab))
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
	return (0);
}
*/