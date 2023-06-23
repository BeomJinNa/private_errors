/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   private_errors.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bena <bena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 18:53:35 by bena              #+#    #+#             */
/*   Updated: 2023/06/23 20:20:01 by bena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRIVATE_ERRORS_H
# define PRIVATE_ERRORS_H

# include "e_private_errors.h"

int	print_error(int private_errno);
//IF FREE IS NEEDED, USE THIS
//int	print_error(int private_errno, void *memory);
//IF YOU USE THIS, USE print_error_malloced.c instead of print_error.c
#endif
