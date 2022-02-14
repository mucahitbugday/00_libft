/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:51:08 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/14 15:09:32 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//veri yapıları 
#include "libft.h"
t_list	*ft_lstnew(void *content)
{
	//yeni bi liste dosyası oluşturulur
	t_list	*new_elem;

	//liste kadar yer açılır
	if (!(new_elem = malloc(sizeof(t_list))))
		return (NULL);
	//listenin ilk elemanına kendisi verilir.
	new_elem->content = content;
	//listenin bi sonraki elemanına NULL verilir
	new_elem->next = NULL;
	//liste geri döndürülür
	return (new_elem);
}

int		main(void)
{
	char	str[] = {"a"};

	t_list	*elem;

	elem = ft_lstnew((void *)str);
	printf("-----------\n%s\n-----------", elem->content);
}
