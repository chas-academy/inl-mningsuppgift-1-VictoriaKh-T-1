#include <stdio.h>
#include <stdlib.h>

int main()
{
  // The Line below must *NOT* be changed or test will fail!
  srand(1);
  int numbers[100];
  int counts[6] = {0, 0, 0, 0, 0, 0};
  int sum = 0;

  for (int i = 0; i < 100; i++)
  {
    numbers[i] = (rand() % 6) + 1;
    sum += numbers[i];
    switch (numbers[i])
    {
    case 1:
      counts[0]++;
      break;
    case 2:
      counts[1]++;
      break;
    case 3:
      counts[2]++;
      break;
    case 4:
      counts[3]++;
      break;
    case 5:
      counts[4]++;
      break;
    case 6:
      counts[5]++;
      break;
    }
  }

  for (int i = 0; i < 6; i++)
  {
    printf("%d\n", counts[i]);
  }

  printf("%d\n", sum);
  printf("%.1f\n", sum / 100.0);
  return 0;
}
