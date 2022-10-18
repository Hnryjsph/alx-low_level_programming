#include "main.h"
/**
 *  main prints _putchar
 *  Return: Always 0 (Success)
 */

int main(void){
	char *h = "_putchar";

	while(*h)
	{
		_putchar(*h);
		h++;
	}
	return (0);


}
