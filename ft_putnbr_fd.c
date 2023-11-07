/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarcia <fgarcia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:42:18 by fgarcia           #+#    #+#             */
/*   Updated: 2023/11/07 17:53:33 by fgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	if (n = -2147483648)
		ft_putstr_fd("-2147483648")
	while(n < 0)
	{
		ft_putchar_fd("-", fd);
		ft_putnbr_fd(-n, fd);
	}
	while(n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10, fd);
	}
	ft_putchar_fd(n + '0', fd);
}