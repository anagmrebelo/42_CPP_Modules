#ifndef __MUTANTSTACK_H__
# define __MUTANTSTACK_H__

# include <iostream>
# include <stack>

template < typename T >
class MutantStack : public std::stack<T>
{
public:
    MutantStack( void ){ return ; }
    MutantStack( MutantStack const & src )
    {
        *this = src;
        return ;
    }
    ~MutantStack( void ) { return ; }
    MutantStack & operator=( MutantStack const & rhs )
    {
        std::stack<T>::operator=(rhs);
        return (*this);
    }
   
   typedef typename MutantStack<T>::stack::container_type::iterator iterator;   //Name_of_class::type_of_container::transforms_into_base_container::iterator
   //without ::container_type does not fucntion as stack does not admit iterators; container_type denotes the underlying container type
   iterator begin( void ) {return this->c.begin();}
   iterator end( void ) {return this->c.end();}
};

#endif
