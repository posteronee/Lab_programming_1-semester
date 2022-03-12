#include <stdio.h>
#include <locale.h>
#include <math.h>

const int minutespermonth = 499;

float formula(float deposit,float percent,int amount_of_months){
    return deposit * pow((1+percent),amount_of_months);
}

int main() {
    setlocale(LC_ALL, "Rus");

    //2
    int call_length, komissiya_value, over_minute_value;
    printf("Время звонков = ");
    scanf("%d", &call_length);
    printf("Стоимость минуты = ");
    scanf("%d", &komissiya_value);
    printf("Сверх минуты = ");
    scanf("%d", &over_minute_value);
    printf("Количество звонков = ");
    if (call_length <= minutespermonth){
        printf("%d\n" ,call_length * komissiya_value);
    } else{
        printf("%d\n", minutespermonth * komissiya_value + (call_length - minutespermonth) * over_minute_value);
    }


    //5
        float deposit,percent;
        int amount_of_months;
        printf("Введите депозит, процентную ставку, количество месяцев:");
        scanf("%f,%f,%d",&deposit,&percent,&amount_of_months);
        printf("Месяцы\t Сумма\n");
        for(int i=1;i<=amount_of_months;i++){
            printf("%d\t%g\n",i,formula(deposit,percent,i));
        }
        return 0;
}
