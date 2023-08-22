#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd =0;
    char Fname[20];

    printf("Please enter file name that you want to open\n");
    scanf("%s",Fname);

    fd = creat(Fname,O_RDWR);
    if(fd == -1)
    {
      printf("Unable to create the file\n");
      return -1;
    }
    else
    {
      printf("File is successfully open with FD %d\n",fd);
    }

    write(fd,"Marvellous",10);

    close(fd);

    return 0;
}