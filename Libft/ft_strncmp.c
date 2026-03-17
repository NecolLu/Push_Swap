/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:17:47 by zloo              #+#    #+#             */
/*   Updated: 2025/11/11 08:34:09 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("Test 1: %d\n", 
		// ft_strncmp("Hello", "Hello", 5));   // 0 (same)
// 	printf("Test 2: %d\n", 
		// ft_strncmp("Hello", "Hellp", 5));   // negative (-1)
// 	printf("Test 3: %d\n", 
		// ft_strncmp("Hellp", "Hello", 5));   // positive (1)
// 	printf("Test 4: %d\n", 
		// ft_strncmp("Hello", "Hi", 2));      // -4 (compare only 2 chars)
// 	printf("Test 5: %d\n", 
		// ft_strncmp("abc", "abcdef", 10));   // negative (-100)
// 	return (0);
// }