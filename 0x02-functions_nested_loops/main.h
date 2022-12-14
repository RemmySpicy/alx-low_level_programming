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
 * print_sign - Print 1 if input is greater than 0, 0 wehen it's 0, and -1 when it's lesser than 0
 *
 * _abs(int n) -
 *
 * print_last_digit -
 *
 * jack_bauer -
 *
 * times_table -
 *
 * add -
 *
 * print_to_98 -
 *
 * print_times_table -
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
int print_sign(int c);
int _abs(int n);
int print_last_digit(int n);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void print_times_table(int n);
#endif
