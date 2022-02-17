/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:15:20 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/17 11:46:34 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (fd < 0)
		return ;
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

/*
//gönderilen diziyi deneme.txt ye yazar bir alt satıra geçer
int main()
{
	ssize_t b = open("deneme.txt", O_WRONLY);
	
	char *str = "Hello World!";
	
	ft_putendl_fd(str,b);
	
	return 0;
}
*/