#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "RUS");
    float n = 3.0;
    float L = 335.0;
    float result = n / L;
    int k = 1;
    int m = 5;
    printf("%*s%*s\n", 20, "Дано: ", 20, "3.0");
    printf("%*s\n", 40, "335.0");
    printf("%-*s%*.*f\n", 20, "Результат: ", k + m, m, result >= 0 ? result : -result);
    printf("%*s", 20, result < 0 ? "-" : "+");
    return 0;
}