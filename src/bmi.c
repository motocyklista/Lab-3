#include <stdio.h>

int main(void) {
    float kg, m, bmi;  

    printf("Podaj wzrost w centymetrach: ");
   scanf("%f", &m);
   m = m / 100.0;  // konwersja na metry, potrzebna do wzoru BMI
    printf("Podaj wage: ");
    scanf("%f", &kg);

    bmi = kg / (m * m); // wzór do obliczenia BMI
     
if (bmi < 18.5) {
    printf("BMI ≈ %.1f --> niedowaga\n", bmi);
}

else if (bmi >= 18.5 && bmi <= 24.9) {
    printf("BMI ≈ %.1f --> prawidłowe\n", bmi);
}

else if  (bmi >= 25.0 && bmi <= 29.9) {
    printf("BMI ≈ %.1f --> nadwaga\n", bmi);
}
else if (bmi >= 30.0) {
    printf("BMI ≈ %.1f --> otyłość\n", bmi);
}


    return 0;
}
