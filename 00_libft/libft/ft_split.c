/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 01:44:50 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/12 16:56:27 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// gönderilen karakterden sonrasını alır ve yenı dızı olusturu

int ft_wordcounter(const char *str, char c)
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
	// printf("kelime sayısı:%d\n",i);
	return (i);
}

int ft_charcounter(const char *str, char c)
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
	//str dizisi boş ise 0 gönder
	if (!str)
		return (0);
	//ret dizisine (kelime sayısı) + 1 kadar alan açılır
	ret = malloc(sizeof(char *) * ft_wordcounter(str, c) + 1);
	//ret dizisine alan açılmadı ise 0 gönder.
	if (!ret)
		return (0);
	//str dizisi boş olana kadar dön
	while (*str)
	{
		//str dizesinin 0. indisi c karakteri ile eşit ve str dizesi null değilse dön
		while (*str == c && *str)
			str++;
		//str dizisinin sonuna geldiğibde çık.
		if (*str == '\0')
			break ;
		//ret'in 0. indisinden ft_substr ile ekleme yapar.
		//ft_substr(x,y,z) = x elemanında y den başla z ye kadar yaz
		ret[retindex] = ft_substr(str, 0, ft_charcounter(str, c));
		retindex++;
		//kelimenein başına gelir
		str += ft_charcounter(str, c);
	}
	ret[retindex] = NULL;
	return (ret);
}

/*
int main()
{
	char a[] = "a1 a2 a3 a4 a5";
	char **split = ft_split(a, ' ');
	int i = 0;
	while (split[i] != NULL)
	{
		printf("%s\n",split[i]);
		i++;
	}
	return (0);
}
*/
