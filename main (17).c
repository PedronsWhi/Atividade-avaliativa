#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
    double raio, volume, area;
    
    scanf("%lf", &raio);
    
    volume = (4.0/3) * PI * pow(raio, 3);
    area = 4 * PI * pow(raio, 2);
    
    printf("VOLUME = %.3lf\n", volume);
    printf("AREA = %.3lf\n", area);
    
    return 0;
}