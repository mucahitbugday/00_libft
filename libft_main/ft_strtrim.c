/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:20:09 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/17 12:16:09 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	baştan ve sondan ikinci gönderilen dizideki karakterleri arar.
//	başta  buldursa son karaltere kadar siler sonda bulursa 
// 	bulduğu ilk karakterden itibaren siler

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	j = ft_strlen(s1);
	while (j > 0 && ft_strchr(set, s1[j - 1]))
		j--;
	return (ft_substr(s1, 0, j));
}

/*
#include <stdio.h>
int main()
{
	printf("%s\n", ft_strtrim("abtabacq", "abc"));
	printf("%s\n", ft_strtrim("xavocadoyz", "xyz"));
	return 0;
}
*/