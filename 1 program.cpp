#include<stdio.h>
#include<ctype.h>

int main()
{
 char c;
 while((c=getchar())!=EOF)
 {
  if(isspace(c)) continue;

  if(isalpha(c))
   printf("Identifier\n");

  else if(isdigit(c))
   printf("Constant\n");

  else if(c=='+'||c=='-'||c=='*'||c=='/'||c=='=')
   printf("Operator\n");
 }
 return 0;
}

