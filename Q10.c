#include <stdio.h>

int main(){
    int wards,patients,vitals=3,sumOfVitals=0;
    printf("How many ward number: ");
    scanf("%d",&wards);
    printf("Number of patients in ward %d? ",wards);
    scanf("%d",&patients);
    float hospital[wards][patients][vitals],patientNumber;
    float patientsVitals[patients];
        for (int i = 0; i < patients; i++)
        patientsVitals[i] = 0.0;

        float vitalsIndivitualSum[3];
        for (int i = 0; i < 3; i++)
            vitalsIndivitualSum[i] = 0.0;

    for(int i=0;i<wards;i++){
        printf("\nWard %d:\n",i+1);
        for(int j=0;j<patients;j++){
            printf("Patient %d:\n",j+1);
            printf("Heart Rate: ");
            scanf("%f",&hospital[i][j][0]);
            printf("Temperature : ");
            scanf("%f",&hospital[i][j][1]);
            printf("Blood pressure: ");
            scanf("%f",&hospital[i][j][2]);
        }
    }
    float x;
    for(int i=0;i<wards;i++){
        for(int j=0;j<patients;j++){
            for (int k = 0; k < vitals; k++) {
                patientsVitals[j] += hospital[i][j][k];
            }
        }
    }
    for(int i=0;i<patients;i++){
        printf("The patient %d has total vitals as: %.2f\n",i+1,patientsVitals[i]);
    }
    for(int i=0;i<wards;i++){
        for(int j=0;j<patients;j++){
            for(int k=0;k<vitals;k++){
                vitalsIndivitualSum[k] += hospital[i][j][k];
            }
        }
        printf("\nThe sum of Heart rate in ward %d is %.2f\n",i+1,vitalsIndivitualSum[0]);
        printf("The sum of Temperature in ward %d is %.2f\n",i+1,vitalsIndivitualSum[1]);
        printf("The sum of Blood pressure in ward %d is %.2f\n",i+1,vitalsIndivitualSum[2]);
    }

    return 0;
}