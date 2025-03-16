#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PATIENTS 100

// Hasta yapisi
typedef struct {
    char id[10];
    char name[50];
    char birth_date[15]; // Dogum tarihi
    char complaint[100]; // Hastanin sikayeti
    int priority;  // Oncelik: 1 - Kritik, 2 - Acil, 3 - Normal
    int low_bp; // Kucuk tansiyon
    int high_bp; // Buyuk tansiyon
    int heart_rate; // Kalp ritmi
    char prescription[20];
} Patient;

Patient patients[MAX_PATIENTS];
int patient_count = 0;

// Hasta ekleme fonksiyonu
void addPatient() {
    if (patient_count >= MAX_PATIENTS) {
        printf("Hasta kapasitesi dolu!\n");
        return;
    }
    
    printf("Hasta ID: ");
    scanf("%s", patients[patient_count].id);
    
    printf("Hasta Adi: ");
    scanf(" %[^\n]", patients[patient_count].name);
    
    printf("Dogum Tarihi (GG/AA/YYYY): ");
    scanf("%s", patients[patient_count].birth_date);
    
    printf("Hastanin Sikayeti: ");
    scanf(" %[^\n]", patients[patient_count].complaint);
    
    printf("Oncelik (1-Kritik, 2-Acil, 3-Normal): ");
    scanf("%d", &patients[patient_count].priority);
    
    printf("Kucuk Tansiyon: ");
    scanf("%d", &patients[patient_count].low_bp);
    
    printf("Buyuk Tansiyon: ");
    scanf("%d", &patients[patient_count].high_bp);
    
    printf("Kalp Ritmi: ");
    scanf("%d", &patients[patient_count].heart_rate);
    
    sprintf(patients[patient_count].prescription, "RX-%d", rand() % 10000);
    patient_count++;
}

// Hastalari öncelik sirasina göre siralama
void sortPatients() {
    int i, j;
    for (i = 0; i < patient_count - 1; i++) {
        for (j = i + 1; j < patient_count; j++) {
            if (patients[i].priority > patients[j].priority) {
                Patient temp = patients[i];
                patients[i] = patients[j];
                patients[j] = temp;
            }
        }
    }
}

// Hasta listesini gosterme fonksiyonu
void displayPatients() {
    int i;
    sortPatients();
    printf("\nHasta Listesi (Oncelik sirasina gore)\n");
    for (i = 0; i < patient_count; i++) {
        printf("ID: %s, Ad: %s, Dogum Tarihi: %s, Sikayet: %s, Oncelik: %d, Kucuk Tansiyon: %d, Buyuk Tansiyon: %d, Kalp Ritmi: %d, Recete: %s\n", 
                patients[i].id, patients[i].name, patients[i].birth_date, patients[i].complaint, patients[i].priority, 
                patients[i].low_bp, patients[i].high_bp, patients[i].heart_rate, patients[i].prescription);
    }
}

int main() {
    int choice;
    do {
        printf("\n1. Hasta Ekle\n2. Hasta Listesini Goster\n3. Cikis\nSeciminiz: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addPatient();
                break;
            case 2:
                displayPatients();
                break;
            case 3:
                printf("Cikiliyor...\n");
                break;
            default:
                printf("Gecersiz secim!\n");
        }
    } while (choice != 3);
    
    return 0;
}

