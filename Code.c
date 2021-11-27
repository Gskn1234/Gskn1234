#include<studio.h>
#include<string.h>
int main()
{
  Char s[100];
  Printf("enter a string to reverse:");
  Gets(s);
  Strrev(s);
  Printf("\nreverse of the string:%s/n",s);
  return 0;
}
