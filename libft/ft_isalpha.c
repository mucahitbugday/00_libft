/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:57:22 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/12 11:11:00 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	klavyede girilen değer olup olmadıgını gosterir.
*/

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*
#include <stdio.h>
int main ()
{
	printf("ft_isalpha(%d):%d\n",3,3);
}
*/