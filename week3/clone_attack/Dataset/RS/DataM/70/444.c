int main () {
    int HHh7yrUknP2, i, j;
    float Ba9G4ib [200], HiTBu1U [200], aDt7uN3X = 0.0, ihY0oRy5 = 0.0;
    double  c [200], RMqUoA [200];
    scanf ("%d", &HHh7yrUknP2);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= HHh7yrUknP2 -1) {
            scanf ("%f %f", &Ba9G4ib[i], &HiTBu1U[i]);
            c[i] = (double ) Ba9G4ib[i];
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
            RMqUoA[i] = (double ) HiTBu1U[i];
            i++;
        };
    }
    for (i = 0; i <= HHh7yrUknP2 -2; i++) {
        j = i + 1;
        while (j <= HHh7yrUknP2 -1) {
            ihY0oRy5 = sqrt ((c[i] - c[j]) * (c[i] - c[j]) + (RMqUoA[i] - RMqUoA[j]) * (RMqUoA[i] - RMqUoA[j]));
            j++;
            if (ihY0oRy5 > aDt7uN3X)
                aDt7uN3X = ihY0oRy5;
        };
    }
    printf ("%.4f\n", aDt7uN3X);
    return 0;
}

