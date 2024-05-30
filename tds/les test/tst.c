#include <stdio.h>

double moy2(double ,double);
double moy3(double , double , double  );
void main(){
        float m1 , m2 , m3 ;
        printf("donner les deus variable m1 et m2 : \n ");
        printf("entrer m1 :\n");
        scanf("%f",&m1);
        printf("%f",m1);
        printf("entrer m2 :\n");
        scanf("%f",&m2);
        printf("le moyen des ces deux varaible est : %1f " , moy2(m1 , m2));
        printf("donner la toisieme variable m3 : \n ");
        scanf("%f",&m3);
        printf("le moyen des ces trois  varaible est : %1f " , moy3(m1 , m2 , m3));     
}

double moy2(double m1 ,double m2){return (m1 + m2) / 2 ;}
double moy3(double m1 ,double m2 , double m3){return (m1 + m2 + m3) / 2 ;}
