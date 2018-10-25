#include<stdio.h>
#include<string.h>
void main()
{
	char str[30],i;
	gets(str);
	for(i=0;i!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'&&str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
               {
            	i=i+2;
               }
	else
    	{
    	printf("%c",str[i]);
         }
    }
}
