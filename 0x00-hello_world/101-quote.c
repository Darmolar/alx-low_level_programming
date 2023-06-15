#include <stdio.h>
#include <unistd.h>
/**
 * This program print a string without using printf and puts
 *
 * Alway Return 1
 */
int main(void)
{
const char* message_text ="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2,message_text,59);
return (1);
}
