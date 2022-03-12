#include <stdio.h>
#include <locale.h>

enum Colours{
    Watercolor = 5,
    OilPaint ,
    WaterBasedPaint

};

struct Section{
    int x;
    int y;
};

union MP3PLAYER{
    int value;
    struct {
        unsigned play: 1;
        unsigned pause: 1;
        unsigned record: 1;
    };
};

int main()
{

        setlocale(LC_ALL, "RUS");

        enum Colours a = OilPaint;
        printf("%d\n", a);

        printf("\n\n");

        struct Section res;

        printf("Введите начало отрезка: ");
        scanf("%d", &res.x);

        printf("Введите конец отрезка: ");
        scanf("%d", &res.y);

        printf("Длина отрезка = %d\n\n", (res.y - res.x));

        printf("\n\n");

        union MP3PLAYER sys;
        printf("Введите число в 16-й СС: ");
        scanf("%x", &sys.value);
        printf("play: %s\npause: %s\nrecord: %s\n",
               sys.play ? "ВКЛ" : "ВЫКЛ",
               sys.pause ? "ВКЛ" : "ВЫКЛ",
               sys.record ? "ВКЛ" : "ВЫКЛ");



        return 0;
}
