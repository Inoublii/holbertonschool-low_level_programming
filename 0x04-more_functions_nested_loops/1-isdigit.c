#include "holberton.h"
/**
  *isdigit : check if c is digits
  *@c: check if digit
  * return 0 or 1
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= 9)
		return (0);
	else 
		return (1);
}
