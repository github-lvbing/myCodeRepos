#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define N 128
int main(int argc, char *argv[])
{
	int fd;
	char buf[N] = {0};
	size_t n;
	off_t offset;
	if((fd = open("test.txt", O_RDWR|O_CREAT|O_TRUNC, 0664)) < 0){
		perror("fail to open");
		return -1;
	}

	while(1){
		fgets(buf, N, stdin);
		buf[strlen(buf) - 1] = '\0';
		n = strlen(buf);

		write(fd, buf, n);

		read(fd, buf, N);
		printf("buf = %s\n", buf);
	}
	return 0;
}

