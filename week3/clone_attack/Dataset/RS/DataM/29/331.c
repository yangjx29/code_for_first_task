int main () {
    int i, j, n;
    double  a;
    double  n5JoQ3 [300];
    double  b [300] = {0};
    n5JoQ3[0] = 1;
    n5JoQ3[1] = 2;
    for (i = 0; 298 > i; i = i + 1) {
        n5JoQ3[i + 2] = n5JoQ3[i] + n5JoQ3[i + 1];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (n > i) {
            scanf ("%lf", &a);
            {
                j = 0;
                while (a > j) {
                    b[i] = b[i] + n5JoQ3[j + 1] / n5JoQ3[j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    for (i = 0; n > i; i = i + 1) {
        printf ("%.3lf\n", b[i]);
    }
    return 0;
}

