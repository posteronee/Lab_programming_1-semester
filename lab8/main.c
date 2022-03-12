#include <stdio.h>
#include <string.h>
#include <locale.h>
int main()
{
    //1
    setlocale(LC_ALL, "Rus");
    char str1[50] = "Склеивание ";
    char str2[50] = "строки";
    strcat(str1, str2);
    printf("%s\n", str1);


    //2
    char str3[] = "rightstring"; //если строки равны выводит 0, если не равны выводит число >0 или <0,
    char str4[] = "wrongstring"; // в зависимости от разницы по таблице ASCII
    int check = strcmp(str3 , str4);
    printf("%d\n", check);


    //3
    char source[20] = "123456"; //источник данных
    char destination[20]  ; //приемник данных
    strcpy (destination , source);
    printf("вывод приемника\n");
    printf ("%s\n", destination);


    //4
    const char str5[20] = "stringforcheck";
    const char str6[20] = "no";
    char *res;
    res = strstr(str5, str6);
    if (res) {
        printf("Результат проверки: %s\n", res);// вывод второй строки, проверка прошла успешно
    }
    else printf("Не содержится такая строка");


    //5
    char str7[] = "012345abcdef";
    char str8[] = "abс";
    int result = strcspn(str7 , str8); //пока в первой строке на найдутся символы ab она будет проверять дальше
    printf("\n");
    printf("%d\n", result);

    return 0;
}

