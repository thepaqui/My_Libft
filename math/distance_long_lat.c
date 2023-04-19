/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distance_long_lat.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:22:30 by thepaqui          #+#    #+#             */
/*   Updated: 2023/04/19 16:35:20 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Calculates distance between a and b given their longitutes and latitudes
//Longitudes and latitudes should be in radians
double	distance_long_lat(double long_a, double lat_a, double long_b, double lat_b, double radius)
{
	double	dist;
	double	x;
	double	y;

	x = (long_b - long_a) * cos((lat_a + lat_b) / 2);
	y = (lat_b - lat_a);
	dist = sqrt((x * x) + (y * y)) * radius;
	return (dist);
}
