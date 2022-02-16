/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:29:07 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/15 00:28:15 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//s dizisinin start tan başlayıp len kadar geri gönderir

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr_str;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	ptr_str = (char *)malloc(len + 1);
	if (!ptr_str)
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		ptr_str[j++] = s[i++];
	ptr_str[j] = '\0';
	return (ptr_str);
}

/*
#include <stdio.h>
int main()
{
	char* str;

	str = ft_substr("Hello World!", 7, 2);
	printf("%s\n", str);

	return 0;
}
*/