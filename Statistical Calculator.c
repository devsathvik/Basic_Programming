# include <stdio.h>
# include <math.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[1000];
    float sum = 0;
    for(int i = 0; i < n ; i++){
        scanf("%d",&arr[i]);

        sum += arr[i];
    }

    float mean=0,var=0,SD=0,varsum = 0;

    mean = sum/n;
    for(int i = 0; i < n; i++ ){
        varsum += pow((arr[i] - mean) , 2);
    }

    var = (varsum) / n;
    SD = sqrt(var);

    printf("Mean = %0.2f\n",mean);
    printf("Variance = %0.2f\n",var);
    printf("Standard Deviation = %0.2f\n",SD);
}