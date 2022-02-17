/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 16:08:07 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/17 02:50:12 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_striteri(char *s, void (*f)(unsigned int, char *))
// {
// 	int		i;

// 	if (!s || !f)
// 		return ;
// 	i = 0;
// 	while (s[i])
// 	{
// 		f(i,  &s[i]);
// 		i++;
// 	}
// }
void 	a(unsigned int x,char y[])
{
	y[x] = y[x] + x;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*

#include <stdio.h>
int main()
{
	char str[] = "merhaba";
	ft_striteri(str,&a);
	
	printf("%s",str);
	
}
*/