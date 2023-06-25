#ifndef MONTY_H
#define MONTY_H
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
typedef struct stack_s
{

	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
typedef struct bus
{

	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
typedef struct instruction_s
{

	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
void f_push(stack_t **head, unsigned int number);
void free_stack(stack_t *head);
void f_pall(stack_t **head, unsigned int number);
void f_pint(stack_t **head, unsigned int number);
void f_pop(stack_t **head, unsigned int counter);
void f_swap(stack_t **head, unsigned int counter);
void f_add(stack_t **head, unsigned int counter);
void f_nop(stack_t **head, unsigned int counter);
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
#endif
