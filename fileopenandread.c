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
    char Data[100];
    int fd = 0, iRet = 0;     //File descriptor

    printf("Enter file name to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR | O_APPEND);
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    printf("File is successfully opened with FD %d\n",fd);
    
    iRet = read(fd,Data,10);
    printf("%d bytes gets successfully read from the file\n",iRet);

    //printf("Data from file is : %s\n",Data);
    printf("Data from file is \n");
    write(1,Data,iRet);

    return 0;

}