/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:44:52 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/12 16:03:33 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strmapi e gonderilen char dizisini ikinic fonksiyona göre geri dönerir.
//(*f) fonksiyon olduğunu belirtir.
// fonksiyonun parametreleri (unsigned int, char olmalı)

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*p;
	int		c;
	int		i;

	i = 0;
	if (!s)
		return (0);
	c = ft_strlen(s);
	p = (char *) malloc((c + 1) * sizeof(char));
	if (!p)
		return (0);
	while (i < c)
	{
		p[i] = f(i, (char )(s[i]));
		i++;
	}
	p[i] = '\0';
	return (p);
}

// char	 r(unsigned int i, char c)
// {
//     i++;
// 	if (c >= 'A' && c <= 'Z')
// 		return (c + 'a' - 'A');
// 	return (c);
// }

// int main(void)
// {
// 	char str[] = "MERhaba";
// 	printf("%s", ft_strmapi(str, r));
//     return (0);
// }
