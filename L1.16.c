#include<stdio.h>
int main()
{
    int iA=0, iB=0;
    
    printf("Enter two numbers:");
    scanf("%d%d",&iA,&iB);

    printf("%d + %d = %d\n",iA,iB,iA + iB);
    printf("%d / %d = %d\n",iA,iB,iA / iB);
    printf("%d %% %d = %d\n",iA,iB,iA % iB);

   
    return 0;
}