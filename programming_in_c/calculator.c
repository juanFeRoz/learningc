#include <stdio.h>

int main(void) {
    printf("Begin calculations \n");
    float n;
    char o;
    float m;

    do {
        scanf("%f %c", &n, &o);
    }while (o != 'S');
    
    while (o != 'E') {
        scanf("%f %c", &m, &o);

        switch (o) {
            case '+': 
                n += m;
                printf("= %f \n", n);
                break;
            case '-':
                n -= m;
                printf("= %f \n", n);
                break;
            case '*':
                n *= m;
                printf("= %f \n", n);
                break;
            case '/':
                if (m == 0) 
                    printf("Cant divide by zero! \n");
                else {
                    n /= m;
                    printf("= %f \n", n);
                }
                break;
            case 'S':
                n = m;
                printf("= %f \n", n);
                break;
            case 'E':
                printf("End of the program! \n");
                break;
            default:
                printf("Invalid input! \n");
        } 
    }



}
