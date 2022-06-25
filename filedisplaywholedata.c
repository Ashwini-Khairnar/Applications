#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

//O_RDONLY
//O_WRONLY
//O_RDWR
int main()
{
    char Fname[20];
    char Data[10];
    int fd = 0, iRet = 0;     //File descriptor

    printf("Enter file name to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    printf("File is successfully opened with FD %d\n",fd);
    
  //  read(fd,Data,sizeof(Data));
  //  read(fd,Data,sizeof(Data));
  //  read(fd,Data,sizeof(Data));

  while((iRet = read(fd,Data,sizeof(Data))) != 0)
  {
    write(1,Data,iRet);
  }

  close(fd);

    return 0;

}