#include <iostream>
#include <cstring>
using namespace std;

char* str_set(char* str1, int k){

    for(int i = 0; i< k; ++i){
        int part = str1[strlen(str1) -1] ;
        for (int j = strlen(str1) -1 ; j >0; --j){
            str1[j] = str1[j - 1];
        }
            str1[0]=part;
    }
    return str1;
}
int main()
{
    char st[] = "hello";
    int k = 2;
    cout << str_set(st,k) << endl;
      return 0;
}
