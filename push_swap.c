/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:48:55 by lde-mich          #+#    #+#             */
/*   Updated: 2023/03/20 14:26:58 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(t_stack *stack)
{
	free(stack->num);
	free(stack->stack_a);
	free(stack->stack_b);
}

void	ft_check_arg(int argc, char **argv)
{
	int	i;

	if (argc <= 1)
		exit(write(1, "Error\nInvalid input\n", 20));
	i = 0;
	while (argv[++i])
	{
		if (ft_atoi(argv[i]) < -2147483648
			|| ft_atoi(argv[i]) > 2147483647)
			exit(write(1, "Error\nInvaliD input\n", 20));
	}
}

int	main(int argc, char **argv)
{
	t_stack	stack;

	ft_check_arg(argc, argv);
	ft_size_count(argc, argv, &stack);
	stack.size_b = 0;
	stack.stack_b = (int *) malloc (stack.size_a * sizeof(int));
	ft_empty_b(&stack);
	ft_num_stack(&stack);
	ft_arr_sort(&stack);
	ft_check_double(&stack);
	ft_check_sort(&stack);
	ft_empty_stack_a(&stack);
	if (stack.size_a == 3)
		ft_t(&stack);
	else if (stack.size_a == 5)
		ft_c(&stack);
	else
	{
		ft_put_all(&stack);
		ft_min_max(stack.stack_a, stack.size_a, &stack.min, &stack.max);
		ft_sort_swap(&stack);
	}
	ft_free(&stack);
}
