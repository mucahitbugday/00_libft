/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:11:27 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/11 18:49:36 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) != 0 || ft_isalpha(c) != 0)
		return (1);
	return (0);
}

/*
#include <stdio.h>
int main()
{
	printf("ft_isalnum('b') = %i\n", ft_isalnum('b'));
	printf("ft_isalnum('A') = %i\n", ft_isalnum('A'));
	printf("ft_isalnum('@') = %i\n", ft_isalnum('@'));
	printf("ft_isalnum('5') = %i\n", ft_isalnum('5'));
	printf("ft_isalnum(126) = %i\n", ft_isalnum(126));
	printf("ft_isalnum(127) = %i\n", ft_isalnum(127));
	printf("ft_isalnum(128) = %i\n\n", ft_isalnum(128));

	return (0);
}
*/