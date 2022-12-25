#include<stdio.h>
#include<string.h>
int main()
{
  char s[100];
  int i;
  printf("Enter a string\n");
  scanf("%s",&s[i]);

  for(i=0;s[i]!='\0';i++)
  {
      if(s[i]>='a'&& s[i]<='z')
        s[i]=s[i]-32;
  printf("%s",s[i]);
  }

  return(0);
}
