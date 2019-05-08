#include <stdio.h>
#include <string.h>

void reverseString(char* src, const size_t len);
void printString(const char* str);

int main(){

    char str[] = "This is a test string!";

    printString(str);

    reverseString(str, strlen(str));

    printString(str);

    return 0;
}

void reverseString(char* src, const size_t len){

    char temp;

    if(!src){
        return;
    }

    for(int i = 0, j = len - 1; i < j; i++, j--){
        temp = src[i];
        src[i] = src[j];
        src[j] = temp;
    }


}

void printString(const char* src){

    printf("%s\n", src);

}

