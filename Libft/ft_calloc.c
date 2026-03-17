/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 07:57:18 by zloo              #+#    #+#             */
/*   Updated: 2025/11/11 13:57:36 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
// int	main(void)
// {
// 	int	*array;
// 	size_t	i;

// 	array = ft_calloc(6, sizeof(int));
// 	if (!array)
// 	{
// 		printf("Memory allocation failed\n");
// 		return (1);
// 	}
// 	i = 0;
// 	while (i < 6)
// 	{
// 		printf("%d ", array[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	free(array);
// 	return (0);
// }