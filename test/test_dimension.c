#include "hello.h"

int main(){
	world_data wd;
	wd.text = "Q'ronos";
	wd.dimension = 1002;
	print_dimension(&wd);
	
	return 0;
}
