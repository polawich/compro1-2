#include <stdio.h>

int main(void) {
    float height, weight, sum_height = 0, sum_weight = 0;
    int age, sum_age = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    for(int i = 0; i < 50; i++) {
        scanf("%d %f %f", &age, &height, &weight);
        sum_age += age;
        sum_height += height;
        sum_weight += weight;
        if (age >= 20 && height >= 160.0){
            count1 += 1;
        }
        if (age < 20 && (height <= 180.0 || weight >= 60.0))
        {
            count2 += 1;   
        }
        if (age >= 30 && weight >= 40.0 && weight <= 80.0)
        {
            count3 += 1;
        }
        if (age < 40 && (weight < 85.0 || height <= 200.0))
        {
            count4 += 1;
        }
        
    }
    printf("Age >= 20 and Height >= 160: %d\n", count1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", count2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", count3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", count4);
    printf("Average Age: %d\nAverage Height: %.2f\nAverage Weight: %.2f\n", (sum_age/50), (sum_height/50), (sum_weight/50));
    return 0;
}