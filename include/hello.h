#ifndef _HELLO_H_
#define _HELLO_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct world_data{
	char * text;
	int dimension;
} world_data;

void print_hello_world();

void print_dimension(world_data* data);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
