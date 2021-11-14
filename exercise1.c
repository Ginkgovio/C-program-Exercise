#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

int main(void)
{
char arr1[]={"welcome to haven!"};
char arr2[]={"#################"};
int left,right;
left=0;
right=strlen(arr1)-1;

while(left<=right)
{
arr2[0]=arr1[left];
arr2[right]=arr1[right];
printf("%s\n",arr2);
Sleep(1000);
system("cls");
left++;
right--;
}
printf("%s\n",arr2);
  return 0;
}