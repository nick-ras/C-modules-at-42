    #include "Fixed.hpp"
    

    Fixed::Fixed(){
        fixed_nb = 0;
        std::cout << "Def constructor called" << std::endl;
    };

	Fixed::Fixed(const Fixed &other){
        std::cout << "Copy constructor called" << std::endl;
        this->fixed_nb = other.fixed_nb;
    } //copy constructor - create new instance from scratch


	Fixed& Fixed::operator=(const Fixed& other){
        std::cout << "Assignation operator called" << std::endl;
        if (this != &other) {
            this->fixed_nb = other.fixed_nb;
        } //so it doesnt overwrite itself
       
        return *this;
    } // copy assignment operator - copy from one object to another

    Fixed::~Fixed( void ){
        std::cout << "Destructor called" << std::endl;
    }

	int  Fixed::getRawBits( void ) const{
        std::cout << "getRawBits member function called" << std::endl;  // debug
        return fixed_nb;
    };
	void  Fixed::setRawBits( int const raw ){
        std::cout << "setRawBits member function called" << std::endl;
        fixed_nb = raw;
    };
