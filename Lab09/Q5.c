#include <stdio.h>

void printSensorData(void *data, char type);

int main()
{
    float temperature;
    int motion;
    char door;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &temperature);
    printf("Enter motion status (1 = motion, 0 = no motion): ");
    scanf("%d", &motion);
    printf("Enter door status (O = open, C = closed): ");
    scanf(" %c", &door);

    printf("\nSensor Readings\n");
    printSensorData(&temperature, 'f');
    printSensorData(&motion, 'i');
    printSensorData(&door, 'c');

    return 0;
}

void printSensorData(void *data, char type)
{
    if (type == 'f')
    {
        printf("Temperature: %.1f C\n", *(float *)data);
    }
    else if (type == 'i')
    {
        if (*(int *)data == 1)
        {
            printf("Motion Detected\n");
        }
        else if (*(int *)data == 0)
        {
            printf("No Motion\n");
        }
        else
        {
            printf("Invalid motion value\n");
        }
    }
    else if (type == 'c')
    {
        if (*(char *)data == 'O')
        {
            printf("Door Open\n");
        }
        else if (*(char *)data == 'C')
        {
            printf("Door Closed\n");
        }
        else
        {
            printf("Invalid door value\n");
        }
    }
    else
    {
        printf("Unknown data type\n");
    }
}
