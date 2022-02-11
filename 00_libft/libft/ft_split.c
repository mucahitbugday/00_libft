/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 00:45:38 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/12 00:45:42 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcounter(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s == '\0')
			return (i);
		while (*s != c && *s)
			s++;
		i++;
	}
	return (i);
}

static int	ft_charcounter(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s && (*s != c))
	{
		i++;
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		retindex;

    retindex = 0;

	if (!s)
		return (0);

	ret = malloc(sizeof(char *) * ft_wordcounter(s, c) + 1);

	if (!ret)
		return (0);


	while (*s)
	{
		while (*s == c && *s)
			s++;
            
		if (*s == '\0')
			break ;
		ret[retindex] = ft_substr(s, 0, ft_charcounter(s, c));
		retindex++;
		s = s + ft_charcounter(s, c);
	}


	ret[retindex] = NULL;
	return (ret);
}

int main()
{
    char a[] = "p1 p2 p3 p4 p5";
    char **b =ft_split(a, ' ');
    int i = 0;
    while (b[i] != (void *)0)
    {
        printf("%s\n",b[i]);
        i++;
    }

   return 0;
}