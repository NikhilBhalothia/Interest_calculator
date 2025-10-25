# include <stdio.h>
# include <math.h>

void main(){
  
    double principal, rate, time, simple_interest, compound_interest;

    // Input principal amount, rate of interest and time period
    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    printf("Enter rate of interest (in percentage): ");
    scanf("%lf", &rate);
    printf("Enter time period (in years): ");
    scanf("%lf", &time);

    // Calculate Simple Interest
    simple_interest = (principal * rate * time) / 100;
    printf("Simple Interest in %.0lf years would be: %.2lf\n", time, simple_interest);

    // Calculate Compound Interest
    compound_interest = principal * pow((1 + rate / 100), time) - principal;
    printf("Compound Interest in %.0lf years would be: %.2lf\n", time, compound_interest);



}