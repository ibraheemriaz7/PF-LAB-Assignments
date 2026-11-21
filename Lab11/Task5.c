#include <stdio.h>

struct HospitalRecord {
    int recordId;
    char ward[30];
    struct PatientInfo {
        int patientId;
        char name[50];
        int age;
    } patient;
};

int main() {
    struct HospitalRecord rec = {501, "Emergency", {204, "Sara Ahmed", 28}};
    struct HospitalRecord *ptr;
    ptr = &rec;

    printf("Record ID: %d\n", ptr->recordId);
    printf("Ward: %s\n", ptr->ward);
    printf("Patient ID: %d\n", ptr->patient.patientId);
    printf("Patient Name: %s\n", ptr->patient.name);
    printf("Patient Age: %d\n", ptr->patient.age);

    return 0;
}
