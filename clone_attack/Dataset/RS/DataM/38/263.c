int main () {
    int szSXb8xVjGc;
    int i;
    int j;
    int a [(136 - 36)];
    double  b [100] [1000], c [100], HLWgbCc [100], kOMFXq [100], ZNr7gZ8cbskK [100];
    scanf ("%d", &szSXb8xVjGc);
    {
        i = 619 - 619;
        while (i < szSXb8xVjGc) {
            scanf ("%d", &a[i]);
            for (j = 0; j < a[i]; j = j + 1) {
                scanf ("%lf", &b[i][j]);
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < szSXb8xVjGc) {
            c[i] = 0;
            {
                j = 0;
                while (j < a[i]) {
                    c[i] += b[i][j];
                    j = j + 1;
                };
            }
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < szSXb8xVjGc) {
            kOMFXq[i] = c[i] / a[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < szSXb8xVjGc) {
            HLWgbCc[i] = 0;
            {
                j = 0;
                while (j < a[i]) {
                    HLWgbCc[i] = HLWgbCc[i] + pow (b[i][j] - kOMFXq[i], 2);
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < szSXb8xVjGc) {
            ZNr7gZ8cbskK[i] = sqrt (HLWgbCc[i] / a[i]);
            printf ("%.5lf\n", ZNr7gZ8cbskK[i]);
            i++;
        };
    }
    return 0;
}

