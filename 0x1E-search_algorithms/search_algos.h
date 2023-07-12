#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>


int linear_search(int *, size_t, int);
int binary_search(int *, size_t, int);
int jump_search(int *, size_t, int);
int interpolation_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */
