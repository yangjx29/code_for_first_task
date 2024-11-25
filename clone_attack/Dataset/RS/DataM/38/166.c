int main () {
    double  s = 0, S;
    int k;
    int i;
    int j;
    struct   shu {
        int n;
        double  x [101];
    }
    pp [100];
    double  a1;
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
    double  a2;
    a1 = (20 - 20);
    a2 = (449 - 449);
    scanf ("%d", &k);
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
        while (k > i) {
            scanf ("%d", &pp[i].n);
            S = 0;
            s = 0;
            a1 = 0;
            {
                j = 0;
                while (pp[i].n > j) {
                    scanf ("%lf", &pp[i].x[j]);
                    a1 += pp[i].x[j];
                    j++;
                };
            }
            a2 = 0;
            a2 = a1 / pp[i].n;
            for (j = 0; pp[i].n > j; j++) {
                s += (pp[i].x[j] - a2) * (pp[i].x[j] - a2);
            }
            S = sqrt (s / pp[i].n);
            printf ("%.5f\n", S);
            i++;
        };
    }
    return 0;
}

