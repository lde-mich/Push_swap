/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 08:56:17 by lde-mich          #+#    #+#             */
/*   Updated: 2023/03/16 12:59:42 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_num_stack(t_stack *stack)
{
	int	i;

	i = 0;
	stack->num = (int *) malloc(stack->size_a * sizeof(int));
	while (i < stack->size_a)
	{
		stack->num[i] = stack->stack_a[i];
		i++;
	}
}

void	ft_arr_sort(t_stack *stack)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	while (j < stack->size_a - 1)
	{
		i = 0;
		while (i < stack->size_a - 1)
		{
			if (stack->num[i] > stack->num[i + 1])
			{
				temp = stack->num[i];
				stack->num[i] = stack->num[i + 1];
				stack->num[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
}

void	ft_empty_stack_a(t_stack *stack)
{
	int	i;
	int	j;

	j = 0;
	while (j < stack->size_a)
	{
		i = 0;
		while (i < stack->size_a)
		{
			if (stack->stack_a[j] == stack->num[i])
			{
				stack->stack_a[j] = i + 1;
				break ;
			}
			i++;
		}
		j++;
	}
}
