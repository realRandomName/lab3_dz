# �������� ������� � ������������ ������ 3

## ������� ������

�������� � �������� ��������� ���������� �������� �� ���� ��������

## 1. �������� � ����-�����


### ��������
1. **������**
2. ������ �������� ������:
    - `your_age_day`,`your_age_month`,`your_age_year` - ����, �����, ��� ��������
    - `current_day`,`current_month`,`current_year` - ������� ����, �����, ���
    - `age`,`total_days`,`years`,`months`,`days` - ���������� ����������
3. ��������� ����� ���������� ���� � ���� ��������:
    - `total_your_age` = `your_age_day` + `your_age_month` * 30 + `your_age_year` * 365
4. ��������� ����� ���������� ���� � ������� ����::
    - `total_current` = `current_day` + `current_month` * 30 + `current_year` * 365
5. ��������� ������� � ����:
    - `total_days` = `total_current` - `total_your_age`
6. ��������� ����� ���������� ���:
    - `years` = `total_days` - 365
7. ��������� ����� ���������� �������:
    - `months` = (`total_days` % 365) / 30
8. ��������� ����� ���������� ����:
    - `days` = (`total_days` % 365) % 30
9. ������� ���������� �������� � ������������ ���� �������� � �����.
10. **�����**

### ����-�����
![����-����� ���������](lab_3_schema.png)
## 2. ���������� ���������
```
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

    puts("___________________________________");
    printf("���� ��������: %02d.%02d.%d\n", your_age_day, your_age_month, your_age_year);
    printf("������� ����:  %02d.%02d.%d\n", current_day, current_month, current_year);
    printf("��� ������� = %d ���, %d �������, %d ����\n", years, months, days);

    return 0;
}
```
## 3. ���������� ������ ���������
�������� � �������� ��������� ���������� �������� �� ���� ��������
___________________________________
���� ��������: 20.09.2004
������� ����:  24.09.2025
��� ������� = 21 ���, 0 �������, 4 ����

[����� ������� ��������� ������ ���������� ����� �� ������� � �������� ��� � ���� ������ ]
