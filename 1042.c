#include<stdio.h>
int main()
{
    int A,B,C,temp, largest, middle, smallest;
    scanf("%d %d %d", &A, &B, &C);
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
    
    printf("%d\n",smallest);
    printf("%d\n",middle);
    printf("%d\n",largest);
    printf("\n");
    printf("%d\n",A);
    printf("%d\n",B);
    printf("%d\n",C);

    return 0;
}