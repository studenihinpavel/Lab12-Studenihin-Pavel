#include <stdio.h>
#include <locale.h> 

int main() {
    setlocale(LC_ALL, "Russian");
    float array[10] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0 };
    float* ptr_a;
    printf("===4.1==\n");
    printf("èìÿ ìàññèâà: %p\n", (void*)array);
    printf("àäðåññ ïåðâîãî ýëåìåíòà: %p\n", (void*)&array[0]);
    printf("àäðåññ âòîðîãî ýëåìåíòà: %p\n", (void*)&array[1]);
    printf("àäðåññ âñåãî ìàññèâà: %p\n", (void*)&array);
    printf("===4.2==\n");
    ptr_a = array;
    printf("ptr_a = %p, *ptr_a = %.1f \n", (void*)ptr_a, *ptr_a);
    printf("ptr_a + 4 = %p, *(ptr_a + 4) = %.1f \n", (void*)(ptr_a + 4), *(ptr_a + 4));
    ptr_a++;
    printf("ptr_a++ = %p, *ptr_a++ = %.1f \n", (void*)ptr_a, *ptr_a);
    printf("ptr_a - 2 = %p, *ptr_a - 2 = %.1f \n", (void*)(ptr_a - 2), *(ptr_a - 2));
    printf("===4.3==\n");
    for (int i = 0; i <= 10; i+=2)
    {
        printf("array[%d] = %.1f, àäðåññ: %p\n", i, *(ptr_a + i), (void*)(ptr_a + i));
    }
    printf("===4.4==\n");
    ptr_a = &array[9];
    for (int i = 0; i < 10; i++)
    {
        printf("Ýëåìåíò: %.1f, àäðåññ: %p\n", *ptr_a, (void*)ptr_a);
        ptr_a--;
    }
        system("pause");
    return 0;
}
