#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - prints input using standard i/o library
 * @c: the character to print
 * Return: Always 0 (Success)
 *
 * print_alphabet - print all lowercase alphabets
 *
 * print_alphabet_x10 - print all alphabets in lowercase ten times
 *
 * _islower - print 1 if input is lowercase, 0 if not lowercase
 *
 * _isalpha - print 1 if input is alphabet, 0 if not 
 *
 * File: main.h
 * Author: Remilekun Olayinka
 * A header file containting function prototypes
 */
int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int input);
int _isalpha(int c);
#endif
