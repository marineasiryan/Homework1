#include <iostream>
#include <cstring>
using namespace std;
char* str_set(char* str1, char* ch)
{
    for(int i = 0; i< strlen(str1); ++i){
        str1[i] = *ch;
    }
    return str1;
}
int main()
{
    char k[] = "";
    char ch[]= "*";
    cout << str_set(k,ch) << endl;
      return 0;
}




