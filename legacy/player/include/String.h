#include <cstddef> 
#include <cstring>
#include <iostream>


class String {
private:
	size_t size;
	char *str;

public:
	String(const char *str = "")
	{
		size = strlen(str);
		this->str = new char [size + 1];
		strncpy(this->str, str, size + 1);
		std::cout << "Constructor of object " << this << std::endl;
	}

	String(const String &obj) : size(obj.size), str(new char [obj.size + 1]) 	
	{
		std::cout << "Copy constructor of object " << this << std::endl; 
	}

	String(String &&obj) : size(std::__exchange(obj.size, 0)), str(std::__exchange(obj.str, nullptr))	
	{
		std::cout << "Move constructor of object " << this << std::endl;		
	}

	String& operator= (String &&obj)
	{
		size = std::__exchange(obj.size, 0);
		str = std::__exchange(obj.str, nullptr);
		std::cout << "Overload of operator =\n";
		return *this;
	}

	~String()
	{
		delete [] str;
		std::cout << "Destructor of object " << this << std::endl;
 	} 	

    void append(const String &other);

    size_t length() const
    {
    	return size;
    }              
    char &get(size_t pos) const
    {
    	return (pos < size)? pos[str]: str[size];	
    }
        
};


// "=", "+", "+=", "<<", ">>", "==", "!="
