#include "String.h"	

void String::append(const String &other)
{
  char * copy_str = new char [size + 1];
  size_t copy_size;

  strcpy (copy_str, str);
  copy_size = size;

  delete [] str;

  str = new char [copy_size + other.size + 1];

  strcpy(str, copy_str);

  delete [] copy_str;

  size += other.size;

  for (size_t i = copy_size; i < size; i++) {
    str[i] = other.str[i - copy_size];
  }
  str[size] = '\0';
}


