#ifndef _function_pointers_h_
#define _function_pointer_h_

void print_name(char *name, void (*f)(char *));

void array_iteration(int *array, size_t, void (*action)(int));

int int_index(int *array, int size, int (*cmp)(int));

#endif /* _function_pointers_h_ */
