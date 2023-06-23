/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bena <bena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 18:33:39 by bena              #+#    #+#             */
/*   Updated: 2023/06/23 18:57:34 by bena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "e_private_errors.h"

static char	*private_strerr(int code);

int	print_error(int private_errno)
{
	const char *const	str = private_strerr(private_errno);
	const char			*ptr;

//	NOTE: Add your malloced memory here. (Optional)
//
//#include <stdlib.h>
//
//	if (MALLOCED_POINTER != NULL)
//		free(MALLOCED_POINTER);
//	if (MALLOCED_POINTER2 != NULL)
//		free(MALLOCED_POINTER2);
	if (str == NULL)
		return (code);
	ptr = str;
	while (*ptr)
		ptr++;
	write(2, "Error: ", 7);
	write(2, str, ptr - str);
	write(2, "\n", 1);
	return (code);
}

static char	*private_strerr(int code)
{
	if (code == CUSTOM_ERROR_1)
		return ("Add The Error Message");
	else if (code == CUSTOM_ERROR_2)
		return ("Add The Error Message");
	return ((void *)0);
}
