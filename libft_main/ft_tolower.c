/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:17:56 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/14 20:44:18 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Büyük harfleri küçük harf yapar

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 'a' - 'A');
	return (c);
}

/*
#include <stdio.h>
int main(void)
{
	char ch1 = 'a';
	char ch2 = 'B';

	printf("%c\n", ft_tolower(ch1));
	printf("%c\n", ft_tolower(ch2));
	return 0;
}
*/