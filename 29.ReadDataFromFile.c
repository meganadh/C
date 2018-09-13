#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("D:\\Content\\Hello.txt","r");
    if(fp==NULL)
    {
        printf("Unable to read the data from file");
    }
    else
    {
        ch=fgetc(fp);
        while(ch!=EOF)
        {
            printf("%c",ch);
            ch=fgetc(fp);
        }
        fclose(fp);
    }
    getch();
}
