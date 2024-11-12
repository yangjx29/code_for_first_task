int main () {
    int count;
    int m;
    int n;
    int q6bv8mXz;
    int sZd8asrT20U [1000];
    int ucCTOqx4Z;
    count = 0;
    scanf ("%d", &n);
    {
        q6bv8mXz = 781 - 780;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (q6bv8mXz <= n) {
            q6bv8mXz = q6bv8mXz + 1;
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
            scanf ("%d", &ucCTOqx4Z);
            if (ucCTOqx4Z % (178 - 176) == (612 - 611)) {
                sZd8asrT20U[count] = ucCTOqx4Z;
                count = count + 1;
            };
        };
    }
    m = count;
    while (count >= 2) {
        {
            q6bv8mXz = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            while (q6bv8mXz <= count - 1) {
                if (sZd8asrT20U[q6bv8mXz - 1] > sZd8asrT20U[q6bv8mXz]) {
                    ucCTOqx4Z = sZd8asrT20U[q6bv8mXz - 1];
                    sZd8asrT20U[q6bv8mXz - 1] = sZd8asrT20U[q6bv8mXz];
                    sZd8asrT20U[q6bv8mXz] = ucCTOqx4Z;
                }
                q6bv8mXz++;
            };
        }
        count = count - 1;
    }
    printf ("%d", sZd8asrT20U[0]);
    {
        q6bv8mXz = 1;
        while (q6bv8mXz <= m - 1) {
            printf (",%d", sZd8asrT20U[q6bv8mXz]);
            q6bv8mXz++;
        };
    }
    return 0;
}

