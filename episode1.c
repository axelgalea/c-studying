#include <stdio.h>

#define LOWER 0     /* lower limit of table */
#define UPPER 300   /* upper limit */
#define STEP  20    /* step size */

void showFahrenheitCelcius() {
  float fahr, celsius;

  fahr = LOWER;

  printf("  F      C\n");
  while (fahr <= UPPER) {
    celsius = (5.0 / 9.0) * (fahr-32.0);
    printf("%3.0fF %6.1fC\n", fahr, celsius);
    fahr = fahr + STEP;
  }
}

void showCelciusFahrenheit() {
  float fahr;

  printf("  C      F\n");
  for (int celsius = LOWER; celsius <= UPPER; celsius += STEP) {
    fahr = (5.0 / 9.0) * celsius + 32.0;
    printf("%3dC %6.1fF\n", celsius, fahr);
  }
}

void showFahrenheitCelciusReverse() {
  printf("  F     C\n");
  for (int fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
    printf("%3dF %6.1fC\n", fahr, (5.0/9.0) * (fahr-32.0));
  }
}

int main () {
  showFahrenheitCelcius();
  printf("\v");
  showCelciusFahrenheit();
  printf("\v");
  showFahrenheitCelciusReverse();

  // printf("%d\n", getchar() != EOF);
  printf("EOF = %d\n", EOF);

  double nc;
  for (nc = 0; getchar() != EOF; ++nc)
    ;

  printf("%.0f\n", nc);
}
