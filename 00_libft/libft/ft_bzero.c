/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:14:18 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/11 19:03:44 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	s dizsinin karakterleri yerine NULL 0 koyar
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
