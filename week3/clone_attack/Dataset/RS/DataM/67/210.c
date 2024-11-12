int main () {
    double  c [100];
    int SqPrRutlNJ [100] [2], n, i, j;
    scanf ("%d", &n);
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
    for (i = 0; i < n; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; j < 2; j++) {
            scanf ("%d", &SqPrRutlNJ[i][j]);
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
            };
        };
    }
    for (i = 1; i < n; i = i + 1) {
        c[i] = 100 * ((1.0 * SqPrRutlNJ[0][1] / SqPrRutlNJ[0][0]) - (1.0 * SqPrRutlNJ[i][1] / SqPrRutlNJ[i][0]));
        if (c[i] > 5) {
            printf ("\n");
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            printf ("worse");
        }
        else if (c[i] < (-5)) {
            printf ("\n");
            printf ("better");
        }
        else {
            printf ("\n");
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            printf ("same");
        };
    }
    return 0;
}

