#include <stdio.h>

int main(void) {
    float v_ms, kn;  

    printf("Podaj predkosc wiatru w m/s: ");
   scanf("%f", &v_ms);
  

    kn = v_ms * 1.94384; // wzór do obliczenia węzłów
     
if (kn < 1) {
    printf("B=0 (Calm) ");
}

else if (kn >= 1 && kn <= 3) {
    printf("B=1 (Light Air)");

}

else if  (kn >= 4.0 && kn <= 6.0) {
    printf("B=2 (Light Breeze)");
}
else if  (kn >= 7.0 && kn <= 10.0) {
    printf("B=3 (Gentle Breeze)");
}

else if  (kn >= 11.0 && kn <= 16.0) {
    printf("B=4 (Moderate Breeze)");
}

else if  (kn >= 17.0 && kn <= 21.0) {
    printf("B=5 (Fresh Breeze)");
}

else if  (kn >= 22.0 && kn <= 27.0) {
    printf("B=6 (Strong Breeze)");
}
else if  (kn >= 28.0 && kn <= 33.0) {
    printf("B=7 (Near Gale)");
}
else if  (kn >= 34.0 && kn <= 40.0) {
    printf("B=8 (Gale)");
}
else if  (kn >= 41.0 && kn <= 47.0) {
    printf("B=9 (Strong Gale)");
}
else if  (kn >= 48.0 && kn <= 55.0) {
    printf("B=10 (Storm)");
}
else if  (kn >= 56.0 && kn <= 63.0) {
    printf("B=11 (Violent Storm)");
}

else if  (kn >= 64) {
    printf("B=12 (Hurricane)");
}
    return 0;
}
