/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:14:18 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/17 01:46:30 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//*ptradresinden size baytları 0 doldurun 

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
#include <stdio.h>
int main(void)
{
	char *b = "bzero";
	ft_bzero(b, 4);
	return (0);
}
*/