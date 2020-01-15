/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktimika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:40:10 by ktimika           #+#    #+#             */
/*   Updated: 2019/09/04 15:55:01 by ktimika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, const char *src)
{
	char *tmp;

	tmp = dst;
	while ((*dst = *src) != '\0')
	{
		dst++;
		src++;
	}
	return (tmp);
}
