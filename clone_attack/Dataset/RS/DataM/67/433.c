int main (int FEcjXG, char *argv []) {
    double  per [100];
    int n;
    int i;
    int p [100];
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
    int pcu [100];
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d %d", &p[i], &pcu[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        per[i] = (double ) pcu[i] / p[i] * 100;
    }
    for (i = 1; i < n; i = i + 1) {
        if (per[i] - per[0] > 5)
            ;
        else if (per[0] - per[i] > 5)
            ;
        else
            printf ("same\n");
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
    }
    return 0;
}

