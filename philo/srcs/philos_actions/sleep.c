/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sleep.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hateisse <hateisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 04:18:42 by hateisse          #+#    #+#             */
/*   Updated: 2023/05/27 22:10:06 by hateisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

bool	philo_sleep(t_philos *philos)
{
	philos->action = SLEEPING;
	if (!print_current_action(philos))
		return (false);
	more_accurate_usleep(philos->philo_params.time_to_sleep);
	return (true);
}
