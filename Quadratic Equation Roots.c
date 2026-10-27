# include <stdio.h>
# include <math.h>
int main(){
    int a,b,c;
    float x1,x2,d;
    scanf("%d %d %d",&a,&b,&c);

    d = ((b*b) - (4*a*c));

    x1 = (-b + sqrt(d))/(2*a);
    x2 = (-b - sqrt(d))/(2*a);

    float realp = -b/(2*a);
    float imgp = (sqrt(-d))/(2*a);

    if(d == 0){
        printf("Roots are real and equal\nRoot = %.2f",x1);
    }
    else if(d > 0){
        printf("Roots are real and distinct\nRoot 1 = %.2f\nRoot 2 = %.2f",x1,x2);
    }
    else{
        printf("Roots are imaginary\nRoot 1 = %.2f + %.2fi\nRoot 2 = %.2f - %.2fi",realp,imgp,realp,imgp);
    }



}