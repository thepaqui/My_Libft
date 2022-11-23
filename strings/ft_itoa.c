/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:24:31 by thepaqui          #+#    #+#             */
/*   Updated: 2022/11/13 15:17:26 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_strrev(char *str)
{
	size_t	i;
	size_t	len;
	char	temp;

	i = 0;
	len = ft_strlen(str);
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
		i++;
	}
}

static void	ft_finish_itoa_str(char *str, int sign)
{
	if (sign == -1)
		*str++ = '-';
	*str = '\0';
}

static size_t	ft_find_malloc_size(int n)
{
	size_t	size;

	if (!n)
		return (2);
	size = 1;
	if (n < 0)
		size++;
	while (n)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*temp;
	char	*res;
	int		sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	temp = malloc(ft_find_malloc_size(n) * sizeof(*res));
	if (!temp)
		return (NULL);
	res = temp;
	sign = 1;
	if (n < 0)
		sign = -1;
	n *= sign;
	while (n)
	{
		*temp++ = (n % 10) + 48;
		n = n / 10;
	}
	ft_finish_itoa_str(temp, sign);
	ft_strrev(res);
	return (res);
}
