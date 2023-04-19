/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radian_to_degree.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:14:23 by thepaqui          #+#    #+#             */
/*   Updated: 2023/04/19 16:14:39 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	radian_to_degree(double radian)
{
	double	degree;

	degree = radian * (180 / M_PI);
	return (degree);
}
