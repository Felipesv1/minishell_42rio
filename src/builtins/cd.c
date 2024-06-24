/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felperei <felperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:07:19 by fmontes           #+#    #+#             */
/*   Updated: 2024/06/06 08:17:29 by felperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

void	cd(t_word *data)
{
	t_word	*current;

	current = data;
	if (ft_strncmp("cd", current->word, ft_strlen(current->word)) == 0
		&& current->next == NULL)
	{
		chdir(getenv("HOME"));
		return ;
	}
	else if (ft_strncmp("cd..", current->word, ft_strlen(current->word)) == 0
		&& current->next == NULL)
	{
		printf("cd: error");
		return ;
	}
	if (count_quotes(current->raw_cmd) % 2 == 0)
	{
		if (chdir(current->next->word) == 0)
			return ;
		else
			ft_printf("Diretório inexistente\n");
	}
}
