#include "hello.h"
#include <stdio.h>

void print_hello_world(){
	printf("Hello World!");
}

void print_dimension(world_data* data){
	printf("Hello %s in dimension %d!", data->text, data->dimension);
}

