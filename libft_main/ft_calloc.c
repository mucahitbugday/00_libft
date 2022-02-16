/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:22:42 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/15 00:19:25 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//count değeri kadar bellekte yer ayrılır. 

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/*
#include <stdio.h>
int main(void)
{
  int *ip, id;

  ip = (int *) ft_calloc(5, sizeof(int));

  for (id=0; id<5; id++) {
       *(ip+id) = (id+1) * 10;
       printf("%p adresindeki değer: %d\n", (ip+id), *(ip+id));
  }

  free(ip);

  return 0;
}
*/