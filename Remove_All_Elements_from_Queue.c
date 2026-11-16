#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====


    int queue[100];
    int front = 0, rear = -1;

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        queue[++rear] = x;
    }

    //===== Write Your Logic Here =====
    while(front <= rear){
        front++;
    }

    printf("Queue Empty");

}