#ifndef __ARRAY_H__
# define __ARRAY_H__

template < typename T >
class	Array
{
public:
	Array<T>( void ) : _size ( 0 )			//Default constructor
	{
		_array = new T[0];
		return ;
	}
	
	~Array<T>( void )				//Destructor
	{
		delete[] this->_array;
	}

	Array<T>( unsigned int size ) : _size( size )	//Constructor
	{
		_array = new T[size];
		return ;
	}

	Array<T>( Array<T> const & src ) : _size( src.size() )	//Copy constructor
	{
		size_t	i;

		_array = new T[_size];
		i = 0;
		while (i < _size)
		{
			_array[i] = src._array[i];
			i++;
		}
		return ;
	}

	Array<T> &	operator=( Array<T> const & rhs )	//Assignation operator
	{
		size_t	i;

		if (this == &rhs)
			return *this;
		
		delete[] _array;
		_size = rhs.size();
		_array = new T[_size];
		i = 0;
		while (i < _size)
		{
			_array[i] = rhs._array[i];
			i++;
		}
		return (*this);
	}

	T &		operator[]( int const & index ) const	
	{
		if (index < 0 || static_cast<unsigned int>(index) >= this->size())
			throw std::exception();
		return (_array[index]);
	}
	
	size_t		size( void ) const
	{
		return (this->_size);
	}

private:
	T *	_array;
	size_t	_size;
	
};

#endif
