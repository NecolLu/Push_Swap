/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:09:14 by zloo              #+#    #+#             */
/*   Updated: 2025/11/11 08:24:23 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	i = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size == 0)
		return (src_len);
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

// int	main(void)
// {
// 	char src[] = "Hello world";
// 	char dst1[20];
// 	char dst2[6];
// 	size_t result;

// 	// Test 1: Normal copy
// 	result = ft_strlcpy(dst1, src, sizeof(dst1));
// 	printf("Test 1: \"%s\" (return: %zu)\n", dst1, result);
// 	printf("Expected: \"Hello world\" (return: 11)\n\n");

// 	// Test 2: Buffer too small
// 	result = ft_strlcpy(dst2, src, sizeof(dst2));
// 	printf("Test 2: \"%s\" (return: %zu)\n", dst2, result);
// 	printf("Expected: \"Hello\" (return: 11)\n\n");

// 	// Test 3: size = 0
// 	result = ft_strlcpy(dst1, src, 0);
// 	printf("Test 3: (return: %zu)\n", result);
// 	printf("Expected: (return: 11)\n");

// 	return 0;
// }