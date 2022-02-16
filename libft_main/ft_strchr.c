/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:18:21 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/15 04:11:49 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//s dizisinde c dizisini arar. bulduğu karakterden itibare ngeri dönderir

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*ptr_s;

	ptr_s = (char *)s;
	i = 0;
	while (*(ptr_s + i))
	{
		if (*(ptr_s + i) == (char)c)
			return (ptr_s + i);
		i++;
	}
	if (c == '\0')
		return (ptr_s + i);
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[] = "123456789";
    
	const char* s1;

	char x = '5';
	
	s1 = strchr(str, x);
	
    printf("dizi: %s\naranacak eleman: %c\nsonuç: %s\n", str, x, s1);
    
    if (!s1)
        printf("yok");

    return 0;
}
*/