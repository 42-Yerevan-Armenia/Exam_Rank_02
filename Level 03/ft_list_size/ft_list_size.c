#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	if (begin_list == 0)
		return (0);
	return (1 + ft_list_size(begin_list->next));//1 is our first list, then + the next from start
