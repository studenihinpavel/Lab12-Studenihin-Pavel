#include <stdio.h>
#include <locale.h> // ѕодключаем дл€ русского €зыка

int main() {
    setlocale(LC_ALL, "Russian"); // ¬ключаем русский €зык в консоли

    // 1) char
    char a1;
    printf("1) char: %d байт\n", (int)((char*)(&a1 + 1) - (char*)&a1));

    // 2) short int
    short int a2;
    printf("2) short int: %d байт\n", (int)((char*)(&a2 + 1) - (char*)&a2));

    // 3) unsigned short int
    unsigned short int a3;
    printf("3) unsigned short int: %d байт\n", (int)((char*)(&a3 + 1) - (char*)&a3));

    // 4) int
    int a4;
    printf("4) int: %d байт\n", (int)((char*)(&a4 + 1) - (char*)&a4));

    // 5) unsigned char
    unsigned char a5;
    printf("5) unsigned char: %d байт\n", (int)((char*)(&a5 + 1) - (char*)&a5));

    // 6) wchar_t (замен€ем на unsigned short, так как в VS они одинаковые)
    unsigned short a6;
    printf("6) wchar_t: %d байт\n", (int)((char*)(&a6 + 1) - (char*)&a6));

    // 7) long long int
    long long int a7;
    printf("7) long long int: %d байт\n", (int)((char*)(&a7 + 1) - (char*)&a7));

    // 8) size_t (замен€ем на unsigned long long)
    unsigned long long a8;
    printf("8) size_t: %d байт\n", (int)((char*)(&a8 + 1) - (char*)&a8));

    // 9) float
    float a9;
    printf("9) float: %d байт\n", (int)((char*)(&a9 + 1) - (char*)&a9));

    // 10) double
    double a10;
    printf("10) double: %d байт\n", (int)((char*)(&a10 + 1) - (char*)&a10));

    // 11) signed int
    signed int a11;
    printf("11) signed int: %d байт\n", (int)((char*)(&a11 + 1) - (char*)&a11));

    return 0;
}