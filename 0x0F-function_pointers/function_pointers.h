#ifndef MYHEADER_H
#define MYHEADER_H

/**
 * File- main
 *
 * Desc- Function declaration
 */

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /* MYHEADER_H */
