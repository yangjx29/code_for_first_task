int main () {
    double  RdQJM72pa = 0;
    int CBek4E6VyXq;
    int i;
    int KsMWIR, j;
    double  sum = 0;
    double  sz [100];
    double  WuU5CtZ4, k;
    scanf ("%d", &CBek4E6VyXq);
    for (i = 0; i < CBek4E6VyXq; i++) {
        scanf ("%d", &KsMWIR);
        {
            j = 0;
            while (j < KsMWIR) {
                scanf ("%lf", &(sz[j]));
                j++;
            };
        }
        for (j = 0; j < KsMWIR; j++) {
            sum += sz[j];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        k = sum / KsMWIR;
        {
            j = 0;
            while (j < KsMWIR) {
                RdQJM72pa += (sz[j] - k) * (sz[j] - k);
                j++;
            };
        }
        WuU5CtZ4 = sqrt (RdQJM72pa / KsMWIR);
        printf ("%.5lf\n", WuU5CtZ4);
        sum = 0;
        RdQJM72pa = 0;
    }
    return 0;
}

