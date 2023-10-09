#include<stdio.h>
#include<windows.h>
int main()
{
    int h,m,s;
    int d=1000;
    printf("Enter the time H:M:S");
    scanf("%d %d %d",&h,&m,&s);
    while(1)
    {
        s--;
        if(s<0)
        {
            m--;
            s=59;
        }
        if(m<0)
        {
            h--;
            m=59;
        }
        if(h<0)
        {
            h=0;
        }
        printf("\n Clock:");
        printf("\n %d %d %d",h,m,s);
        Sleep(d);
        system("cls");
        if(h==0 && m==0 &&s==0)
        {
            printf("Your time has ended");
            break;
        }
    
    }
return 0;
}
