/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmuravch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 16:40:41 by hmuravch          #+#    #+#             */
/*   Updated: 2018/04/18 16:41:13 by hmuravch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;
	int odd;

	i = 0;
	odd = 1;
	while (nb > 0)
	{
		nb -= odd;
		odd += 2;
		i++;
	}
	if (nb == 0)
		return (i);
	else
		return (0);
}