#include<stdio.h>
#include<sys/types.h>
#include<sys/uio.h>
#include<unistd.h>
#include<fcntl.h>
int main(){
    int fd=open("file.txt",O_RDWR|O_CREAT,S_IRWXU);
    if(fd==-1){
	printf("file does not exist");
    }
    char buf[100];
    ssize_t bytesread;
    bytesread=read(fd,buf,100);
    close(fd);
    int fd1=open("file1.txt",O_WRONLY|O_CREAT,S_IRWXU);
    if(fd==-1){
	printf("file does not exist");
    }
    write(fd1,buf,bytesread);
    close(fd1);
    printf("byteread=%d\n",(int)bytesread);
    return 0;
}
