#include "libft.h"

int	main(void)
{
	int	content = 12;

	t_list *new = ft_lstnew(&content);

	if (*(int *)new->content == content)
		printf("test: %d\n", *(int *)(new->content));
	free(new);
	return (0);
}
