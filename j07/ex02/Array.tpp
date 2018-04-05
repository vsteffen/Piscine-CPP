#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>

template< typename T >
class	Array {

public:
	Array<T>( void ) {
		this->_array = NULL;
		this->_size = 0;
		return ;
	}

	Array<T>( unsigned int const n) {
		this->_array = new T[n];
		this->_size = n;
		return ;
	}

	Array<T>( Array<T> const & src ) {
		*this = src;
	}

	~Array<T>( void ) {
		if (this->_array)
			delete this->_array;
		return ;
	}

	T *				getArray( void ) {
		return this->_array;
	}

	unsigned int 	getSize( void ) {
		return this->_size;
	}

	Array<T> & operator=( Array<T> const & rhs) {
		delete this->_array;
		this->_size = rhs._size;
		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < rhs._size; i++) {
			this->_array[i] = rhs._array[i];
		}
		return *this;
	}

	T &			operator[]( unsigned int index ) {
		if ( this->_array == NULL || index >=  this->_size )
			throw Array::WrongIndex();
		return this->_array[index];
	}

	class		WrongIndex : public std::exception {
		public:

			WrongIndex( void ) {}

			WrongIndex( WrongIndex const & src ) { *this = src; }

			~WrongIndex( void ) throw () {}

			WrongIndex & operator=(WrongIndex const & rhs) {
				(void)rhs;
				return *this;
			}

			virtual const char *what(void) const throw() {
				return ("The index specified is impossible to access!");
			}

	};

private:
	T *					_array;
	unsigned int		_size;

};

#endif
