/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:11:58 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/11 18:51:25 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
int main ()
{
	printf("ft_isdigit('b') = %i\n", ft_isdigit('b'));
	printf("ft_isdigit('A') = %i\n", ft_isdigit('A'));
	printf("ft_isdigit('@') = %i\n", ft_isdigit('@'));
	printf("ft_isdigit('1') = %i\n", ft_isdigit('1'));
	printf("ft_isdigit( 1 ) = %i\n\n", ft_isdigit(1));
}
*/