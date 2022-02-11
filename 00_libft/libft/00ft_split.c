/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00ft_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 21:29:00 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/12 01:32:52 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

int kac_kelime(const char *str, char c)
{
    int i;
    int c_mi;

    i = 0;
    c_mi = 0;
    while (*str)
    {
        if (*str != c && c_mi == 0)
        {
            c_mi = 1;
            i++;
        }
        else if(*str == c)
            c_mi = 0;
        str++;
    }
    return (i);
}

char **ft_split(char const *str, char c)
{
    int kac_klm;
    char **split;
    int i;

    if (!str)
        return (0);
    
    kac_klm = kac_kelime(str, c);

    split = malloc((kac_klm + 1) * sizeof(char *));

    if (!split)
        return (0);
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


/************************/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


//kaç kelime var sayar
static int	count_klm(const char *str, char c)
{
	int	klm_say;
	int	c_mi;

	klm_say= 0;
	c_mi = 0;
	while (*str)
	{
		if (*str != c && c_mi == 0)
		{
			c_mi = 1;
			klm_say++;
		}
		else if (*str == c)
			c_mi = 0;
		str++;
	}
	printf("kelime sayısı:%d\n",klm_say);
	return (klm_say);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

//kelimelere ayırır
char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;
    
	if (!s)
		return (0);
	
	//kelime kadar yer ayrıldı
	split = malloc((count_klm(s, c) + 1) * sizeof(char *));
	if (!split)
		return (0);
	
	i = -1;
	j = 0;
	
	index = -1;
	while (++i <= strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
	}
	split[j] = 0;
	return (split);
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