/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:14:10 by zloo              #+#    #+#             */
/*   Updated: 2025/11/11 14:01:49 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	int	ft_count_words(const char *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static void	ft_free_all(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static	int	ft_fillstr(char **result, const char *s, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		result[j] = ft_substr(s, start, i - start);
		if (!result[j])
		{
			ft_free_all(result);
			return (-1);
		}
		j++;
	}
	result[j] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!result)
		return (NULL);
	if (ft_fillstr(result, s, c) == -1)
		return (NULL);
	return (result);
}
// int	main(void)
// {
// 	printf("===== TESTING FT_SPLIT =====\n");
//     char *ptr = "str  ptr ok";
//     char c = ' ';
//     printf("The address of the pointer: %p\n", ft_split(ptr, c));

// 	char **res = ft_split("str  ptr ok", c);
// 	int i = 0;

// 	while (res[i])
// 	{
// 		printf("%s\n", res[i]);
// 		free(res[i]);
// 		i++;
// 	}
// 	free(res);
// 	return (0);
// }
