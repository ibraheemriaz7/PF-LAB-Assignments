#include <stdio.h>

#define TOLL_RATE 50

void processVehicle(char vehicleType[]) {
    static int totalVehicles = 0;
    static int totalRevenue = 0;

    totalVehicles++;
    totalRevenue = totalRevenue + TOLL_RATE;

    printf("Processed Vehicle: %s | Fee: %d PKR\n", vehicleType, TOLL_RATE);
    printf("Total Vehicles: %d | Total Revenue: %d PKR\n\n", totalVehicles, totalRevenue);
}

int main() {
    processVehicle("Car");
    processVehicle("Truck");
    processVehicle("Bus");
    processVehicle("Bike");

    return 0;
}
