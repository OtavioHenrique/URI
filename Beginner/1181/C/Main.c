#include <stdio.h>
#include <stdlib.h>

float sumLine(int l){
    int i, j;
    float sum=0, m[12][12];
    for (i=0;i<12;i++){
        for (j=0;j<12;j++){
            scanf ("%f", &m[i][j]);
        }
    }
    for (j=0;j<12;j++){
        sum = sum + m[l][j];
    }
    return sum;
}

float averageLine(int l){
    int i, j;
    float average=0, m[12][12];
    for (i=0;i<12;i++){
        for (j=0;j<12;j++){
            scanf ("%f", &m[i][j]);
        }
    }
    for (j=0;j<12;j++){
        average = average + m[l][j];
    }
    return average/12;
}

int main(int argc, char* argv[]){

    int l, i, j;
    float sum, average;
    char T;
    float m[12][12];
    
    scanf ("%d", &l);
    scanf (" %c", &T);

    if (T=='S'){
        sum=sumLine(l);
        printf ("%.1f\n", sum);
    }
    
    if (T=='M'){
        average=averageLine(l);
        printf ("%.1f\n", average);
    }

    return 0;
}