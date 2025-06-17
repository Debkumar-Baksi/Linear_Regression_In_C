#include<stdio.h>

float mean(int values[] ,int length)
{
    int total_of_values = 0;

    for(int i =0 ; i<length ; i++)
    {
        total_of_values+=values[i];
    }

    float average = total_of_values/length;

    return average;

}

float variance(int values[] , int mean_val , int length)
{
    float variance_sum = 0.0;

    for (int i=0;i<length;i++)
    {
        float difference=values[i]-mean_val;
        variance_sum+=difference*difference;

    }

    return variance_sum;
}


float covariance(int x[], float x_mean, int y[], float y_mean , int length)
{
    float covar_sum=0.0;

    for (int i=0; i<length; i++)
    {
        float x_diff = x[i] - x_mean;
        float y_diff = y[i] - y_mean;
        covar_sum+=x_diff*y_diff;
    }
    
    return covar_sum;
}

float coefficients(int x[] , int y[],int length , float *m , float *c)
{
    float x_mean = mean(x,length);
    float y_mean = mean(y,length);

    float covar = covariance(x,x_mean,y,y_mean,length);
    float var = variance(x,x_mean,length);

    *m = covar/var;
    *c = y_mean - ((*m) * x_mean);
}


float predict(int x[] , int length, float m , float c , float predictions[])
{

    for(int i=0; i<length; i++)
    {
        predictions[i]=m*x[i] + c;
    }
}



int main()
{
    int x[] = {1,2,3,4,5,6,7,8,9,10};
    int y[] = {2,3,5,7,11,13,17,19,23,29};
    int length = sizeof(x)/sizeof(x[0]);

    float m,c;
    coefficients(x,y,length,&m,&c);

    printf("Slope (m) : %.2f\n",m);
    printf("Intercept (c) : %.2f\n",c);

    float preds[length];
    predict(x,length,m,c,preds);

    printf("Predictions: \n");
    for (int i = 0 ; i<length ; i++)
    {
        printf("x = %d ---> y = %.2f\n",x[i],preds[i]);
    }

    return 0;
}