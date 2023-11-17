#include<stdio.h>
main()
{
    float a[20], sum=0; 
    int i,  n;

    printf("Number's of Course: "); 
    scanf("%d", &n); 

    for (i=0; i<n; i++)
    {
        printf("Enter GPA of Course %d: ", i+1);
        scanf("%f", &a[i]); 
        sum = sum + a[i]; 
    }
    printf("Average CGPA is: %.2f", sum/(float)n); 
}
