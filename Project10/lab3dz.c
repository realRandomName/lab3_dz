#include <stdio.h>
#include <locale.h>



int main() 
{
    setlocale(LC_CTYPE, "RUS");

    int your_age_day, your_age_month, your_age_year;
    int current_day, current_month, current_year;
    int age, total_days, years, months, days;

    printf("������� ����� ������ ��������\n");
    scanf("%d", &your_age_day);
    printf("������� ����� ������ ��������\n");
    scanf("%d", &your_age_month);
    printf("������� ��� ������ ��������\n");
    scanf("%d", &your_age_year);

    printf("������� ����������� �����\n");
    scanf("%d", &current_day);
    printf("������� ������� �����\n");
    scanf("%d", &current_month);
    printf("������� ������� ���\n");
    scanf("%d", &current_year);


    int total_your_age = your_age_day + your_age_month * 30 + your_age_year * 365;
    int total_current = current_day + current_month * 30 + current_year * 365;

    total_days = total_current - total_your_age;

    years = total_days / 365;
    months = (total_days % 365) / 30;
    days = (total_days % 365) % 30;

    puts("�������� � �������� ��������� ���������� �������� �� ���� ��������");
    puts("___________________________________");
    printf("���� ��������: %02d.%02d.%d\n", your_age_day, your_age_month, your_age_year);
    printf("������� ����:  %02d.%02d.%d\n", current_day, current_month, current_year);
    printf("��� ������� = %d ���, %d �������, %d ����\n", years, months, days);

    return 0;
}