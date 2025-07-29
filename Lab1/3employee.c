#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    struct employees
    {
        int id;
        char name[50];
        char designation[20];
        int basic_salary;
        float hra;
        float da;
    }employeedata[n];
    for(i=0;i<n;i++)
    {
        employeedata[i].id=i+1;
        printf("Enter the name of the employee: ");
        scanf("%s",employeedata[i].name);
        printf("Enter the designation: ");
        scanf("%s",employeedata[i].designation);
        printf("Enter the employee basic salary: ");
        scanf("%d",&employeedata[i].basic_salary);
        printf("Enter the HRA percent: ");
        scanf("%f",&employeedata[i].hra);
        printf("Enter the DA percent: ");
        scanf("%f",&employeedata[i].da);
    }
    printf("Enter the employee id: ");
    scanf("%d",&n);
    printf("Employee Name: %s\n",employeedata[n-1].name);
    printf("Employee Designation: %s\n",employeedata[n-1].designation);
    printf("Employee Basic: %dRs\n",employeedata[n-1].basic_salary);
    float gross=employeedata[n-1].basic_salary+employeedata[n-1].hra*employeedata[n-1].basic_salary/100+employeedata[n-1].da*employeedata[n-1].basic_salary/100;
    printf("Employee Gross: %fRs\n",gross);
    return 0;
}