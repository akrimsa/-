                                                            /*1лаба 1 задание*//*

#include <stdio.h>
#include <math.h>

int main() {
    float radius, cercumference, the_area_of_the_circle, sphere_volume, pi;
    pi = 3.14;
    printf("Введите радиус\n");
    scanf("%f", &radius);
    do {
        if (radius <= 0) {
            printf("Вы ввели некоректное число");
            break;
        }
    } while ( 1 == 2);
    if (radius > 0) {
        the_area_of_the_circle = radius*radius*pi;
        sphere_volume = 4*pi/3*pow(radius, 3);
        cercumference = 2*pi*radius;
        printf(" Длинна окружности равна %f.\n Площадь круга равна %f.\n Объем сферы равен %f.", cercumference, the_area_of_the_circle, sphere_volume);
    }
}

                                                          *//*1лаба 2 задание*//*

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int m, n;
    m = 4;
    float a, b, c, the_area_of_the_rectangle, the_perimetr_of_the_rectangle;

    do {
        for (;m > 0; m--) {
            
            printf("Введите длинну стороны.\nУ вас есть %d попытки.\n", m);
            scanf("%f", &a);
            if ( a <= 0) {
                n = m - 1;
                printf("Вы ввели некоректное чесло.\n");
            }
            else {
                break;
            }    
        }

        if (m == 0) {
            printf("Вы потратили все попытки.\n");
            break;
        }

        for (;m > 0; m--) {
            system("clear");
            printf("Введите длинну стороны.\nУ вас есть %d попытки.\nПервое число = %f\n", m, a);
            scanf("%f", &b);
            if ( b <= 0) {
                n = m - 1;
                printf("Вы ввели некоректное чесло.\n");
            }
            else {
                break;
            }    
        }

        if (m == 0) {
            printf("Вы потратили все попытки.\n");
            break;
        }

        for (;m > 0; m--) {
            system("clear");
            printf("Введите длинну стороны.\nУ вас есть %d попытки.\nПервое число = %f\nВторое число = %f\n", m, a, b);
            scanf("%f", &c);
            if ( c <= 0) {
                n = m - 1;
                printf("Вы ввели некоректное чесло.\n");
            }
            else {
                break;
            }
        }

        if (m == 0) {
            printf("Вы потратили все попытки.\n");
            break;
        }
        if ( a + b > c && a + c > b && b + c > a) {
            m = 0;
            the_perimetr_of_the_rectangle = a + b + c;
            the_area_of_the_rectangle = sqrt(the_perimetr_of_the_rectangle/2*(the_perimetr_of_the_rectangle/2-a)*(the_perimetr_of_the_rectangle/2-b)*(the_perimetr_of_the_rectangle/2-c));
            printf("Площадь заданного треуголника равна %f.\nПериметр зааданного треугольника равен %f.\n",the_area_of_the_rectangle, the_perimetr_of_the_rectangle);
        }
        else {
            m--;
            printf("Треуголника с такими сторонами несуществует.\n");
            if (m == 0) {
                printf("Выпотретили все попытки.\n");
            }
            else {
                printf("Введите заново все стороны.\n");
            }
        }
    } while (m < 4 && m > 0);
}

                                        *//*1лаба 3 задание*//*

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char x[100]; 
    float x0, y, e;
    int x1;
    e = 2.71828;
    int k = 1;
    while (k == 1) {
        printf("Введите X.\n");
        scanf("%100s", x);
        char s[] = "+-0123456789";
        int flag = 1;
        int len = strlen(x);

        for (int i = 0; i < len;i++) {
            if (x[i] == "+" || x[i] == "-" && i != 0) {
                flag = 0;
                break;
            }
            else {
                int found = 0;
                for (int j = 0; s[j] != "\0"; j++) {
                    if (x[i] == s[j]) {
                        found = 1;
                        break;
                    }
                }
                if (found != 0) {
                    flag = 0;
                    break;
                }
            }
        
        }
        sscanf(&x, "%d", &x1);
        


        if (x1 == 0 && flag == 1) {
            printf("Для введеного вами знаения X,невозможно посчитать хначение Y.\n");
        }
        if (x1 != 0 && flag == 1) {
            y = pow(e, sin(x1))*cos(pow(x1, 3.2))/((1+log10(sqrt(pow(x1, 2)+ 1)))*tan(pow(x1, 2)));
            printf("Y = %.4f\n", y);
            break;
        printf("Некоректный ввод.\n");
        }  
    }
    return 0;
}

*/
