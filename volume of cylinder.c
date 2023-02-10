//program to find volume of cylinder.

#include<stdio.h>                                                             
                                                                                
int main()                                                                     
{                                                                               
    int radius, height;                                                         
    float volume=0, pi=3.14;                                                    
    printf("\nFinds volume of a cylinder\n-------------------");                
    printf("\nEnter radius: ");                                                 
    scanf("%d", &radius);                                                       
                                                                                
    printf("\nEnter height: ");                                                 
    scanf("%d", &height);                                                       
                                                                                
    volume = pi*(radius*radius*height);                                         
                                                                                
    printf("Volume of a cylinder is: %.2f", volume); 
	return 0;                           
}