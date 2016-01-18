/*header 42*/

#include "../libft.h"

void	ft_print_content(t_list *e)
{
	if (!e)
		return ;
	ft_putstr((char*)e->content);
}

int	ft_lstnew_tests(void)
{
	t_list	*tab;
	t_list	*tab1;
	t_list	*tab2;
	t_list	*tab3;
	void	(*del)(void *, size_t);
	void	(*ft_printeach)(t_list*);

	del = &(ft_bzero);
	ft_printeach = &(ft_print_content);
	tab = ft_lstnew("Some text", ft_strlen("Some text") + 1);
	tab1 = ft_lstnew(" not too", ft_strlen(" not too") + 1);
	tab2 = ft_lstnew(" much", ft_strlen(" much") + 1);
	tab3 = ft_lstnew(" complicated", ft_strlen(" complicated") + 1);
	/*
	tab->next = tab1;
	tab1->next = tab2;
	tab2->next = tab3;
	*/
	/*
	ft_lstadd(&tab, tab1);
	ft_lstadd(&tab, tab2);
	ft_lstadd(&tab, tab3);
	*/
	/*
	ft_putstr((char*)tab->content);
	ft_putstr((char*)tab->next->content);
	ft_putstr((char*)tab->next->next->content);
	ft_putstr((char*)tab->next->next->next->content);
	*/
	/*
	ft_lstiter(tab, ft_printeach);
	*/
	/*
	ft_lstdel(&tab, del);
	*/
	/*
	ft_putstr((char*)tab->content);
	ft_putstr((char*)tab->next->content);
	ft_putstr((char*)tab->next->next->content);
	ft_putstr((char*)tab->next->next->next->content);
	*/
	if (!tab)
		return (0);
	return (1);
}
