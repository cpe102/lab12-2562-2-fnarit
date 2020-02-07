#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}

//Write definition of stat() here 
void stat(const double data1[],int i,double data2[]){
    double max = data1[0],min = data1[0],sum = 0,avg,sd;
    for(int n = 0;n < i; n++){
        sum += data1[n];
    }
    data2[0] = sum/i;
    data2[1] = pow(sum,2)/i - pow(data2[0],2);
    for(int j = 1;j < i; j++){
        if(data1[j] > max) max = data1[j];
        data2[2] = max;
        if(data1[j] < min) min = data1[j];
        data2[3] = min;
    }
}
    