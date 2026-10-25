# include <stdio.h>
# include <math.h>
int main(){
    double P,R,T;
    scanf("%lf %lf %lf",&P,&R,&T);
    double SI = ((P*R*T)/100);
    double CI = P * (pow((1 + (R/100)),T)) - P;
    printf("Simple Interest = %.2f\n",SI);
    printf("Compound Interest = %.2f",CI);

}