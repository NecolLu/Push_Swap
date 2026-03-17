/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 10:00:44 by zloo              #+#    #+#             */
/*   Updated: 2025/10/27 10:57:52 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	j;
	size_t	i;
	char	*dupli;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	dupli = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (dupli == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		dupli[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		dupli[i + j] = s2[j];
		j++;
	}
	dupli[i + j] = '\0';
	return (dupli);
}

// int main(void)
// {
//     char *joined = ft_strjoin("Hello ", "World!");
//     printf("%s\n", joined);
//     free(joined);
//     return 0;
// }
