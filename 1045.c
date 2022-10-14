#include <stdio.h>

int main() {

  double A, B, C,  largest, middle, smallest;
  scanf(" %lf %lf %lf", &A, &B, &C);

  if (A >= B && A >= C) {
    if (B >= C) {
      largest = A;
      middle = B;
      smallest = C;
    } else {
      largest = A;
      middle = C;
      smallest = B;
    }
  }

  else if (B >= A && B >= C) {
    if (A >= C) {
      largest = B;
      middle = A;
      smallest = C;
    } else {
      largest = B;
      middle = C;
      smallest = A;
    }
  }

  else if (C >= A && C >= B) {
    if (A >= B) {
      largest = C;
      middle = A;
      smallest = B;
    } else {
      largest = C;
      middle = B;
      smallest = A;
    }
  }

  if (largest >= (middle + smallest)) {
    printf("NAO FORMA TRIANGULO\n");
  } else {
    if (largest * largest == (middle * middle + smallest * smallest)) {
      printf("TRIANGULO RETANGULO\n");
    }

    if (largest * largest > (middle * middle + smallest * smallest)) {
      printf("TRIANGULO OBTUSANGULO\n");
    }

    if (largest * largest < (middle * middle + smallest * smallest)) {
      printf("TRIANGULO ACUTANGULO\n");
    }

    if (largest == middle && largest == smallest) {
      printf("TRIANGULO EQUILATERO\n");
    }

    else if (largest == middle || middle == smallest || largest == smallest) {
      printf("TRIANGULO ISOSCELES\n");
    }
  }

  return 0;
}
