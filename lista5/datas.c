#include <stdio.h>
#include <string.h>

typedef
    struct Data {
        int dia, mes, ano;
    }
Data;

int main(void) {
    char meses[13][4] = {
    "", "JAN", "FEV", "MAR", "ABR", "MAI", "JUN",
    "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"
    };

    Data data;

    scanf("%d/%d/%d", &data.dia, &data.mes, &data.ano);

    printf("%02d.%02d.%04d\n", data.dia, data.mes, data.ano);
    printf("%02d-%02d-%04d\n", data.mes, data.dia, data.ano);
    printf("%02d/%02d/%02d\n", data.dia, data.mes, data.ano%100);
    printf("%02d%s%04d\n", data.dia, meses[data.mes], data.ano);


    return 0;
}