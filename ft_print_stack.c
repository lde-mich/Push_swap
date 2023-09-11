/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:24:49 by lde-mich          #+#    #+#             */
/*   Updated: 2023/03/13 15:25:40 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stack(t_stack *stack)
{
	int	i;

	i = 0;
	printf("A  --  B\n\n");
	while (i < stack->size_l)
	{
		printf("%d  --  %d\n", stack->stack_a[i], stack->stack_b[i]);
		i++;
	}
}
