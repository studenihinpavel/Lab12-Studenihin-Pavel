#include <stdio.h>
#include <locale.h> 
void main(void) {
    setlocale(LC_ALL, "Russian");
    int x = 0x12345678; 
    unsigned char* a = (unsigned char*)&x; 
    printf("Порядок байтов в памяти:\n");
    printf("Байт 0 (младший адрес): %.2X\n", *(a + 0));
    printf("Байт 1:                 %.2X\n", *(a + 1));
    printf("Байт 2:                 %.2X\n", *(a + 2));
    printf("Байт 3 (старший адрес): %.2X\n", *(a + 3));
    printf("====3====\n");
    float f = 3.14f;
    double d = 123.45;
    unsigned char* p_int = (unsigned char*)&x;
    unsigned char* p_float = (unsigned char*)&f;
    unsigned char* p_double = (unsigned char*)&d;
    printf("int (4 байта):    ");
    for (int i = 0; i < 4; i++) 
    {
        printf("%.2x ", *(p_int + i));
    }
    printf("\n");
    printf("float (4 байта):  ");
    for (int i = 0; i < 4; i++) 
    {
        printf("%.2x ", *(p_float + i));
    }
    printf("\n");
    printf("double (8 байт):  ");
    for (int i = 0; i < 8; i++) {
        printf("%.2x ", *(p_double + i));
    }
    printf("\n");
    printf("====4====");
    int num_int = 12345;
    float num_float = 12345.0f;
    double num_double = 12345.0;
    unsigned char* p_i = (unsigned char*)&num_int;
    unsigned char* p_f = (unsigned char*)&num_float;
    unsigned char* p_d = (unsigned char*)&num_double;
    printf("int (12345):    ");
    for (int i = 0; i < 4; i++) printf("%02X ", *(p_i + i));
    printf("\n");
    printf("float (12345):  ");
    for (int i = 0; i < 4; i++) printf("%02X ", *(p_f + i));
    printf("\n");
    printf("double (12345): ");
    for (int i = 0; i < 8; i++) printf("%02X ", *(p_d + i));
    printf("\n");
    system("pause");
}