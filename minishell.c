/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalkhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:48:13 by zalkhali          #+#    #+#             */
/*   Updated: 2025/03/05 12:51:13 by zalkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	main(int ac, char **av)
{
	(void)ac;
	int	status;

	//child process
	if(fork() == 0)
		execvp(av[1], av + 1);
	wait(&status);

	return(EXIT_SUCCESS);
}
