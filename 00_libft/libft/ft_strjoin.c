/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:35:09 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/10 16:17:46 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**s1 dizsi ve s2 dizisini birleştirir.
**s1 ve s2 dizisini kontrol eder boş ise 0 gönderir
**ptr_str dizisine malloc ile s1 ve s2 dizisinin uzunluğu +1 fazlası kadar alan açar.
**ptr_str dizisine s1 ve s2 kopyalanır sonun '\0' koyar return(ptr_str)
*/

#include "libft.h"

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
int main (void)
{
    char const s1[] = "01234";
    char const s2[] = "56789";
    printf("s1='01234'\ns2='56789'\ns1+s2=%s\n",ft_strjoin(s1,s2));

    return(0);
}
*/
