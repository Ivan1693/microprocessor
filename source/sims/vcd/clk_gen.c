#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int init = atoi(argv[1]),
		up = atoi(argv[2]),
		delay = atoi(argv[3]),
		times = atoi(argv[4]),i;

	for(i=init;i<times;i++){
		printf("'1' after %d %s,\n",init, argv[5]);
		init+=up;
		printf("'0' after %d %s,\n",init, argv[5]);
		init+=delay;
	}

	return 0;
}
