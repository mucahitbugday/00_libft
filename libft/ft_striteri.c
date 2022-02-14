/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 16:08:07 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/12 17:00:51 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
	s[i] = '\0';
}

/*
#include <unistd.h>
void ft_printchar(unsigned int n, char *str)
{
	int num = '0' + n;
	write(1, &(num), 1);
	write(1, str, 1);
    write(1, " ", 1);
}

int main(void)
{
	char str[10] = "abcdefg";
	ft_striteri(str, ft_printchar);
	return (0);
}
*/