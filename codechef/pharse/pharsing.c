#include<stdio.h>


main(int argc,char *argv[])
{
FILE *fd;
char c;
if(argc==2){
fd=fopen("index.htm","r");
while( c=getc(fd)!= EOF){
printf("%c",c);
}
}else
printf("Input the file\n");
}

//if (sscanf(argv[1], "%d", &port) <= 0)
