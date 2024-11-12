int main () {
    int k;
    int KijNHLxfGcon [100];
    int i;
    int j;
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
    double  x [100] [100], a [100], s [100], s1;
    scanf ("%d", &k);
    {
        i = 0;
        while (k > i) {
            scanf ("%d", &KijNHLxfGcon[i]);
            {
                j = 0;
                while (j < KijNHLxfGcon[i]) {
                    scanf ("%lf", &x[i][j]);
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < k) {
            a[i] = 0;
            s[i] = 0;
            for (j = 0; j < KijNHLxfGcon[i]; j++)
                a[i] = a[i] + x[i][j];
            a[i] = a[i] / KijNHLxfGcon[i];
            {
                j = 0;
                while (j < KijNHLxfGcon[i]) {
                    s[i] = s[i] + (a[i] - x[i][j]) * (a[i] - x[i][j]);
                    j++;
                };
            }
            s[i] = s[i] / KijNHLxfGcon[i];
            s[i] = sqrt (s[i]);
            printf ("%.5f\n", s[i]);
            i++;
        };
    }
    return (0);
}

