/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 08:04:38 by zloo              #+#    #+#             */
/*   Updated: 2025/11/11 08:33:01 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	i;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	dest_len = 0;
	while (dst[dest_len] != '\0' && dest_len < size)
		dest_len++;
	if (size <= dest_len)
		return (src_len + size);
	i = 0;
	while (src[i] != '\0' && (dest_len + i) < size - 1)
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (dest_len + src_len);
}
// int main(void)
// {
//     char dst1[20] = "Hello";
// 	char dst2[20] = "Hello";
// 	char dst3[20] = "Hello";
//     size_t result;

//     // Test 1: Normal case
//     result = ft_strlcat(dst1, " World", 20);
//     printf("Test 1: \"%s\" (return: %zu)\n", dst1, result);
//     printf("Expected: \"Hello World\" (return: 11)\n\n");

//     // Test 2: Buffer too small
//     result = ft_strlcat(dst2, " World", 8);
//     printf("Test 2: \"%s\" (return: %zu)\n", dst2, result);
//     printf("Expected: \"Hello W\" (return: 11)\n\n");

//     // Test 3: size = 0
//     result = ft_strlcat(dst3, " World", 0);
//     printf("Test 3: \"%s\" (return: %zu)\n", dst3, result);
//     printf("Expected: \"Hello\" (return: 6)\n\n");

//     return 0;
// }