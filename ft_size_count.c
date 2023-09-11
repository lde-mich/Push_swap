/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_count.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 09:48:33 by lde-mich          #+#    #+#             */
/*   Updated: 2023/03/20 12:23:32 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_size_count1(t_stack *stack, char	**temp1)
{
	int	i;

	i = -1;
	while (temp1[++i])
	{
		if (ft_atoi(temp1[i]) == 0 && temp1[i][0] != '0')
			exit(write(1, "Error\nInvaliD input", 19));
		stack->stack_a[i] = ft_atoi(temp1[i]);
		free(temp1[i]);
	}
}

void	ft_size_count(int argc, char **argv, t_stack *stack)
{
	int		i;
	char	*temp;
	char	**temp1;

	i = 0;
	temp = (char *) malloc (sizeof(char));
	temp[0] = 0;
	while (++i < argc)
	{
		temp = ft_strjoin(temp, argv[i]);
		temp = ft_strjoin(temp, " ");
	}
	temp1 = ft_split(temp, 32);
	i = 0;
	while (temp1[i])
		i++;
	free(temp);
	stack->size_a = i;
	stack->size_l = stack->size_a;
	stack->stack_a = (int *) malloc (stack->size_a * sizeof(int));
	ft_size_count1(stack, temp1);
	free(temp1);
}
