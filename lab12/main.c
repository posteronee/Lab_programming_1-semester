#include <stdio.h> // библиотека вывода
#include <sys/stat.h> // библиотека для mkdir


int main(int argc, char** argv) { // argc - количество аргуметов , argv - значения аргументов
    FILE *folder = fopen("Folders.txt", "w"); // Создание файла , открытие потока
    for (int i = 1; i < argc; i++) {
        mkdir(argv[i], 0777); // Создание директория , 0777 - разрешение для работы с файлами
        fprintf(folder, "%s\n", argv[i]); // Запись подпапок в Folders.txt
    }
    fclose(folder); // закрытие потока
    return 0;
}

// запуск программы через терминал
// 1 // gcc main.c -o (output) name_of_the_output
// 2 // ./name_of_the_output  folder_name
// 3 // cat Folders.txt

// 0*** - каждый символ дает права для owner , group , other owners
// 1 + 2 + 4 = 7 , где 1 - x - execution , 2 - w - write , 4 - r - read
// 0  в начале указывает на восьмиричность