/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bena <bena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 18:33:39 by bena              #+#    #+#             */
/*   Updated: 2023/06/29 20:56:22 by bena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "e_private_errors.h"

static char	*private_strerr(int code);

int	print_error(int private_errno)
{
	const char *const	str = private_strerr(private_errno);
	const char			*ptr;

	if (str == NULL)
		return (1);
	ptr = str;
	while (*ptr)
		ptr++;
	write(2, "Error: ", 7);
	write(2, str, ptr - str);
	write(2, "\n", 1);
	return (1);
}

static char	*private_strerr(int code)
{
	if (code == CUSTOM_ERROR_1)
		return ("Add The Error Message");
	else if (code == CUSTOM_ERROR_2)
		return ("Add The Error Message");
	return ((void *)0);
}
