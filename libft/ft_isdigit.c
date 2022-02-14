/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:10:25 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/11 18:50:12 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/*
	klavyede girilen değer olup olmadıgını gosterir.
*/

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
