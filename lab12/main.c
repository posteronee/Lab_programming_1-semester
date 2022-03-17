#include <stdio.h> // библиотека вывода
#include <sys/stat.h> // библиотека для mkdir


int main(int argc, char** argv) { // argc - количество аргуметов , argv - значения аргументов
    FILE *folder = fopen("Folders.txt", "w"); // Создание файла
    for (int i = 1; i < argc; i++) {
        mkdir(argv[i], 0700); // Создание директория , 0700 - разрешение для работы с файлами
        fprintf(folder, "%s\n", argv[i]); // Запись подпапок в Folders.txt
    }
    fclose(folder);
    return 0;
}

// запуск программы через терминал
// 1 // gcc main.c -o (output) name_of_the_output
// 2 // ./name_of_the_output  folder_name
// 3 // cat Info.txt