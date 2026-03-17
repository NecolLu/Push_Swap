/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:05:54 by zloo              #+#    #+#             */
/*   Updated: 2025/11/11 14:00:47 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
// int	main(void)
// {
// 	ft_putendl_fd("Hello, world!", 1);   // prints to standard output
// 	ft_putendl_fd("Error message", 2);   // prints to standard error
// 	return (0);
// }
