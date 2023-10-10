#ifndef __ITER_HPP__
# define __ITER_HPP__

template< typename T >
void	iter( T * add, size_t len, void (func)(const T &))
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		func(*(add + i));
		i++;
	}
}

#endif
