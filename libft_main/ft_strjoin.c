/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:35:09 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/15 00:33:35 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//iki diziyi bellekte yer açarak açılan yere taşır.
/*
s1 = Hellor
s2 = World!
ft_strjoin(s1,s2)=HelloWoeld!
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr_str;
	int		i;
	int		j;

	if (!s1)
		return (0);
	if (!s2)
		return (0);
	ptr_str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr_str)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
		ptr_str[i++] = s2[j++];
	ptr_str[i] = '\0';
	return (ptr_str);
}

/*
#include <stdio.h>
int main()
{
	char s1[] = "Hello";
	char s2[] = "World!";

	printf("%s\n", ft_strjoin(s1, s2));

	return 0;
}
*/