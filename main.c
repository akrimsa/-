                                                        /*2 лаба 1 задание*//*
                                                
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float p, v, s;
    p = 3.14;
    float a;
    float b;
    int flag_user_correct_input = 0;
    printf("Введите диаметр: ");
    scanf("%f", &a);
    do {
        if (a <= 0) {
            printf("Вы ввели некоректное число");
            break;
        }
        printf("Введите высоту: ");
        scanf("%f", &b);
        if (b <= 0) {
            printf("Вы ввели некоректное число \n");
            break;
        }
        if (a > 0 && b > 0) {    
            v = a*b;
            s = 2*p*b + 2*a;
            printf("Объем цилиндра равен %f \n Площадь поверхности цилиндра равна %f\n", v, s);
            flag_user_correct_input = 1;
        }
        
    }while ( flag_user_correct_input == 0);    
    return 0;
}

                                                            *//*2лаба 2 задание*//*
                                                            
#include <stdio.h>
#include <math.h>
int main() {
    int operation_number;
    double result, first_number, second_number;
    printf("Введите два числ и номер операции.\n");
    printf("Введите первое число:");
    scanf("%lf", &first_number);
    printf("Введите второе число:");
    scanf("%lf", &second_number);
    printf("Введите номер операции:");
    scanf("%d", &operation_number);
    if (operation_number == 1.0) {
        result = first_number + second_number;
        printf("Результат равен %lf\n", result);
    }

    if (operation_number == 2.0) {
        result = first_number - second_number;
        printf("Результат равен %lf\n", result);
    }

    if (operation_number == 3.0) {
        result = first_number * second_number;
        printf("Результат равен %lf\n", result);
    }

    if (operation_number == 4.0) {
        result = first_number / second_number;
        printf("Результат равен %.4lf\n", result);
    }
}

                                                            *//*2лаба 3 задание*//*
#include <stdio.h>
#include <math.h>
int main() {
    int students_points;
    printf("Введите баллы студента\n");
    scanf("%d", students_points);
    if (students_points < 60) {
        printf("Незачет.\n");

    }
    if (students_points >= 60 && students_points < 75) {
        printf("Оценка 3, зачет.\n");
    }
    if (students_points >= 75 && students_points < 90) {
        printf("Оценка 4, зачет.\n");
    }
    if (students_points >= 90 && students_points < 101) {
        printf("Оценка 5, зачет.\n");
    }
    printf("Некорректный ввод.");


}

                                                            *//*2лаба 4 задание*//*
#include <stdio.h>
#include <math.h>
int main() {
    float diametr_of_the_bolt_head, hole_diameter, diametr__of_the_bolt_leg;
    do {
        printf("Введите диаметр отверстия\n ");
        scanf("%f", &hole_diameter);
        printf("Введите диаметр шляпки болта\n ");
        scanf("%f", &diametr_of_the_bolt_head);    
        printf("Введите диаметр ножки болта\n ");
        scanf("%f", &diametr__of_the_bolt_leg);
    
        if (hole_diameter > diametr__of_the_bolt_leg && hole_diameter >= diametr_of_the_bolt_head) {
            printf("Ваш болт вылетел из отверстия, шляпка меньше отверстия.\n");
            break;
        }
        
        if (hole_diameter <= diametr__of_the_bolt_leg ){
            printf("Ваш болт невлезает, ножка больше отверстия.\n");
            break;
        }
        if (hole_diameter < diametr__of_the_bolt_leg && hole_diameter < diametr_of_the_bolt_head) {
            printf("Ваш болт сидит четко.\n");
            break;
        }
    
        printf("Некорректный ввод.\n");
    }while (&trunc);

}   




                                                            *//*1лаба 1 задание*//*

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
                                                                    




//#include <stdio.h>
//#include <math.h> // For sin() and M_PI

//int main(void) {
//    double angle_degrees = 45.0;
//    double angle_radians = angle_degrees * (M_PI / 180.0);
//    double sine_value = sin(angle_radians);
//
//    printf("Sine of %.2f degrees (%.2f radians) is: %.4f\n", angle_degrees, angle_radians, sine_value);
//
//    return 0;
//}


/*

#include <stdio.h>

int main(int argc, char* argv[]) {
    int i =-10;
    do {
        printf("20");
    }
    while(i <= 1000); {
        printf("%d\n", i);
        i++;
    }




    return 0;
}


*/

                                            /*3 лаба 1 задание*//*
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int user_password = 228666333; int ghost_password, max_tries, current_try;
    max_tries = 3;
    current_try = max_tries;    
    do {
        printf("Осталось попыток %d\n", current_try);
        if (current_try == 0) {
            printf("Все попытки исчерпаны\n");
            break;
        }
        printf("Введите пароль:");
        scanf("%d", &ghost_password);
        
        if (user_password == ghost_password) {
            printf("Пароль введен правильно, все четко\n");
            break;
        }
        system("clear");
        printf("Пароль введен неверно\n");
        current_try--;
    }while (current_try >= 0);
    return 0;
}




                                                *//*3 лаба 2 задание*//*

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
    float n = -1000000;
    double x1, x2;
    float pi = 3.14;
    //float function = sin(x); *function = cos(x); x = arccos(0) + 2*pi*n;
    while (1000000 >= n && n >= -1000000) {
        x1 = pi/2 + 2*pi*n;
        x2 = -pi/2+ 2*pi*n;
        printf("%.2lf \n %.2lf ", x1,x2);
        n++;
    }
    return 0;

}


                          

                                            *//*4 лаба 1 задание*//*
#include <stdio.h>
int main () {
    int mass[5];
    int i_Max, i_Min, ag, s, max_number_elements, i;
    max_number_elements = 4;
    for (int i; i < max_number_elements;i++) {
        scanf("%d  ", &s);
        mass[i] = s;
        printf("\n\n%d\n\n", mass[i]);
    }

    
    while (i < 5 ) {
        if (i == max_number_elements) {
            break;
        }
        if (mass[i] < mass[i + 1]) { 
            mass[i] =mass[i] + mass[i + 1];
            mass[i + 1]= mass[i] - mass[i + 1];
            mass[i] = mass[i] - mass[i + 1];
            if (i != 0) {
                i= -2;
            }
            
        }
        i++; 
    }
    i_Max = mass[0];
    i_Min = mass[4];
    ag = mass[2]; 
    printf("max = %d\n min %d\n ag = %d",i_Max, i_Min, ag);
    i =0;
    while (i < 6) {
        int k =mass[i];
        printf("%d  ", k);
        i++;
    }


}









                                                *//*4 лаба 2 задание */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(void) {
    int s, lengh_mass, i_Memoryi, i_Memoryi1;
    lengh_mass = 5;
    int max_number_elements = lengh_mass - 1;

    int mass[lengh_mass];
    for ( int i = 0; i < 5;) {
        scanf("%d  ", &s);
        mass[i] = s;
        i++;
        if (i == 4) {
            break;
        }
    } 
    int i_flag = 0;
    int i;
    i_flag = 0;
    while (i < 7 ) {
        if (i == max_number_elements) {
            break;
        }
        if (mass[i] < mass[i + 1]) { 
            i_Memoryi = mass[i];
            i_Memoryi1 = mass[i + 1];
            mass[i + 1] = i_Memoryi;
            mass[i] = i_Memoryi1;
            i = - 1;
        }
        i++; 
    }
    
    for (i = 0; i < 5;i++) {
        mass[i] = s;
        printf("%d  ", s);
        
    }
    int f, k, g, l, q;
    mass[0] = g;
    mass[1] = l;
    mass[2] = f;
    mass[3] = k;
    mass[4] = q;
    printf("%d  %d  %d %d   %d   ", g, l, f, k, q);
}





                                               /* 5 лаба 1 задание *//*
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>



int symwol_check (char ch_Check) {
        return (int) ch_Check - 48;
}   


int main() {
    int lengh_mass_strok = 4;
    int lengh_mass_stolb = 4;
    int max_number_elements_strok = lengh_mass_strok - 1;
    int max_number_elements_stolb = lengh_mass_stolb - 1;
    int number_elements_stolb, number_elements_strok;
    char mass[4][4];

    while (1 == 1) {
        printf("Введите число для %d строки %d столбца.", number_elements_strok, number_elements_stolb);
        scanf("%c", &ch_Check);
        int flag = 1;

        int symwol_check (char ch_Check) {
            return (int) ch_Check - 48;
        }   
        if (0 <_Check || ch_Check > 9) {
            flag = 0;
        }
        else {
            mass[number_]
        }

        if (flag == 0) {
            printf("Неверный ввод,введите число");
        }
        else {
            number_elements_stolb++;
            number_elements_strok++;
        }
        if (number_elements_stolb == max_number_elements_stolb && number_elements_strok == max_number_elements_strok) {
            break;
        }
    }
    printf("Главная диагональ - 
}


                                       *//* 5 лаба 2 задание *//*

#include <stdio.h>

int main (void) {
    char ch_DeskMass, ch_Check;
    int lengh_mass_stolb, lengh_mass_strok, max_number_elements_stolb, max_number_elements_strok, number_elements_stolb, number_elements_strok, i_PlaceFigureStrok, i_PlaceFigureStolb, i_TipFigure;
    lengh_mass_stolb = 8;
    lengh_mass_strok = 8;
    max_number_elements_stolb = lengh_mass_stolb - 1;
    max_number_elements_strok = lengh_mass_strok - 1;
    int n, k;
    
    do {
        check_flag = 0;
        printf("Введите номер строки на которой стоит фигура./n");
        scanf("%c", ch_Check);
        (int) ch_Check - 48;
        if (0 < ch_Check < 9) {
            check_flag = 1;
            i_PlaceFigureStrok = ch_Check - 1;
            printf("Введите номер столбца на которой стоит фигура./n");
            scanf("%c", ch_Check);
            (int) ch_Check - 48;

            if (0 < ch_Check < 9) {
                i_PlaceFigureStolb = ch_Check -1;
                ch_DeskMass[i_PlaceFigureStolb][i_PlaceFigureStrok] = @;
                check_flag = 1;

                printf("Введите тип фигуры./n1-пешка./n2-ладья./n3-конь./n4-слон./n5-ферзь./n6-король./n")
                scanf("%c", ch_Check);
                (int) ch_Check -48;
                if (0< ch_Check < 7) {
                    i_TipFigure = ch_Check;
                }
                else {
                    check_flag = 0;
                }
            }
            else {
                check_flag = 0;
            }
        }
        else {
            check_flag = 0;
        }
    
    }while (check_flag == 0)
    if (i_TipFigure == 1) {
        if (i_PlaceFigureStrok !=1) {
            mass[i_PlaceFigureStrok + 1][i_PlaceFigureStolb] = X;
        }
    }

    if (i_TipFigure == 2) {
        for (int n = 1;i_PlaceFigureStolb + n<= max_number_elements_stolb;n++) {
            mass[i_PlaceFigureStrok][i_PlaceFigureStolb + n] = X;
            if (i_PlaceFigureStolb + n ==max_number_elements_stolb ) {
                for (int k = 1;i_PlaceFigureStolb - k >= 1;k--) {
                    mass[i_PlaceFigureStrok][i_PlaceFigureStolb - k] = X;
                } 
            }
        }
        for (int n = 1;i_PlaceFigureStrok + n<= max_number_elements_strok;n++) {
            mass[i_PlaceFigureStrok + n][i_PlaceFigureStolb] = X;
            if (i_PlaceFigureStrok + n ==max_number_elements_strok ) {
                for (int k = 1;i_PlaceFigureStrok - k >= 1;k--) {
                    mass[i_PlaceFigureStrok - k][i_PlaceFigureStolb] = X;
                } 
            }
        }
    }
    if (i_TipFigure == 3) {
        if (i_PlaceFigureStolb + 2 <= max_number_elements_stolb && i_PlaceFigureStrok + 1 <= max_number_elements_strok) {
            mass[i_PlaceFigureStrok + 1][i_PlaceFigureStolb + 2] = X;
        }
        if (i_PlaceFigureStolb + 2 <= max_number_elements_stolb && i_PlaceFigureStrok - 1 > 0) {
            mass[i_PlaceFigureStrok - 1][i_PlaceFigureStolb + 2] = X;
        }
        if (i_PlaceFigureStolb - 2 > 0 && i_PlaceFigureStrok - 1 > 0) {
            mass[i_PlaceFigureStrok - 1][i_PlaceFigureStolb - 2] = X;
        }
        if (i_PlaceFigureStolb - 2 > 0 && i_PlaceFigureStrok + 1 <= max_number_elements_strok) {
            mass[i_PlaceFigureStrok + 1][i_PlaceFigureStolb - 2] = X;
        }

        if (i_PlaceFigureStrok + 2 <= max_number_elements_strok && i_PlaceFigureStolb + 1 <= max_number_elements_stolb) {
            mass[i_PlaceFigureStrok + 1][i_PlaceFigureStolb + 2] = X;
        }
        if (i_PlaceFigureStrok + 2 <= max_number_elements_strok && i_PlaceFigureStolb - 1 > 0) {
            mass[i_PlaceFigureStrok - 1][i_PlaceFigureStolb + 2] = X;
        }
        if (i_PlaceFigureStrok - 2 > 0 && i_PlaceFigureStolb - 1 > 0) {
            mass[i_PlaceFigureStrok - 1][i_PlaceFigureStolb - 2] = X;
        }
        if (i_PlaceFigureStrok - 2 > 0 && i_PlaceFigureStolb + 1 <= max_number_elements_stolb) {
            mass[i_PlaceFigureStrok + 1][i_PlaceFigureStolb - 2] = X;
        }
    
    }



    if (i_TipFigure == 4) {
        for (int n = 1; i_PlaceFigureStolb + n < max_number_elements_stolb && i_PlaceFigureStrok n <= max_number_elements_strok;n++) {
            mass[i_PlaceFigureStrok + n][i_PlaceFigureStolb + n] = X;
        }
        
        for (; i_PlaceFigureStolb -k > 0 && i_PlaceFigureStrok + n <= max_number_elements_strok;) {
            mass[i_PlaceFigureStrok + n][i_PlaceFigureStolb - k] = X;
            k++;
            n++;
        }
        n = 1;
        k = 1;
        for (i_PlaceFigureStolb - k > 0 && i_PlaceFigureStrok - n > 0) {
            mass[i_PlaceFigureStrok - n][i_PlaceFigureStolb - k] = X;
            k++;
            n++;
        }
        for (; i_PlaceFigureStolb + k <= max_number_elements_stolb && i_PlaceFigureStrok - n > 0;) {
            mass[i_PlaceFigureStrok + n][i_PlaceFigureStolb - k] = X;
            k++;
            n++;
        }
    }    
    if (i_TipFigure == 5) {
        for (int n = 1;i_PlaceFigureStolb + n<= max_number_elements_stolb;n++) {
            mass[i_PlaceFigureStrok][i_PlaceFigureStolb + n] = X;
            if (i_PlaceFigureStolb + n ==max_number_elements_stolb ) {
                for (int k = 1;i_PlaceFigureStolb - k >= 1;k--) {
                    mass[i_PlaceFigureStrok][i_PlaceFigureStolb - k] = X;
                } 
            }
        }
        for (int n = 1;i_PlaceFigureStrok + n<= max_number_elements_strok;n++) {
            mass[i_PlaceFigureStrok + n][i_PlaceFigureStolb] = X;
            if (i_PlaceFigureStrok + n ==max_number_elements_strok ) {
                for (int k = 1;i_PlaceFigureStrok - k >= 1;k--) {
                    mass[i_PlaceFigureStrok - k][i_PlaceFigureStolb] = X;
                } 
            }
        }
        for (int n = 1; i_PlaceFigureStolb + n < max_number_elements_stolb && i_PlaceFigureStrok n <= max_number_elements_strok;n++) {
            mass[i_PlaceFigureStrok + n][i_PlaceFigureStolb + n] = X;
        }
        
        for (; i_PlaceFigureStolb -k > 0 && i_PlaceFigureStrok + n <= max_number_elements_strok;) {
            mass[i_PlaceFigureStrok + n][i_PlaceFigureStolb - k] = X;
            k++;
            n++;
        }
        n = 1;
        k = 1;
        for (i_PlaceFigureStolb - k > 0 && i_PlaceFigureStrok - n > 0) {
            mass[i_PlaceFigureStrok - n][i_PlaceFigureStolb - k] = X;
            k++;
            n++;
        }
        for (; i_PlaceFigureStolb + k <= max_number_elements_stolb && i_PlaceFigureStrok - n > 0;) {
            mass[i_PlaceFigureStrok + n][i_PlaceFigureStolb - k] = X;
            k++;
            n++;
        }


    }
    if (i_TipFigure == 6) {
        if (i_PlaceFigureStrok + 1 <= max_number_elements_strok && i_PlaceFigureStolb +1 <= max_number_elements_stolb) {
            mass[i_PlaceFigureStrok + 1][i_PlaceFigureStolb + 1] = X;
        }
        if ()

    }
    

}

*/

