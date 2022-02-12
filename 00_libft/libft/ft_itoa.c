/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 04:28:57 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/12 11:07:15 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//kaç basamak olduğunu hesaplar
static size_t	ft_get_digit(int n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		count++;
	while (n != 0)
	{
		n /= 10 ;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*nstr;
	size_t		dgt;
	long int	nb;

	nb = n;
	//basamak sayısı
	dgt = ft_get_digit(n);
	//gönderilen sayı eksi ise artı yap
	if (n < 0)
	{
		nb *= -1;
		dgt++;
	}
	//nst ye yer açar
	nstr = (char *)malloc(sizeof(char) * (dgt + 1));
	if (!nstr)
		return (NULL);

	//açılan dizinin son karakterini null yapar
	
	nstr[dgt] = '\0';
	
	//indisleri ondan başa char a çevirir nstr ye ekler.
	
	while (dgt--)
	{
		nstr[dgt] = nb % 10 + '0';
		nb /= 10 ;
	}
	
	//eğer n eksi ise başına - karakterini koyar.
	
	if (n < 0)
		nstr [0] = '-';
	return (nstr);
}

/*
int main(void)
{
	printf("%s|\n", ft_itoa(-2312));
	printf("----------\n");
	return (0);
}
*/