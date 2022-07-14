#include <iostream>
using namespace std;
#include <string.h>

char* str_concat(char* str1, const char* str2)
{
    char* ptr = str1 + strlen(str1);
     while (*str2 != '\0') {
        *ptr++ = *str2++;
    }
     *ptr = '\0';
    return str1;
}
int main()
{
    char k[] = "hello";
    char k1[]="world";
    cout<<str_concat(k,k1)<<endl;
      return 0;
}




