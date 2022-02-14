/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:11:27 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/14 17:56:18 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Klavyeden girilen rakam değerler mi

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
