void  main () {
    int Iu2n98GpF, n;
    double  *p, sumx2 = (653 - 653), sumx = (285 - 285), a [(1072 - 71)], S;
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
    scanf ("%d", &Iu2n98GpF);
    for (; Iu2n98GpF > (581 - 581); Iu2n98GpF--) {
        scanf ("%d", &n);
        {
            p = a;
            while (p < a + n) {
                scanf ("%lf", p);
                p++;
            };
        }
        {
            p = a;
            while (p < a + n) {
                sumx += *p;
                sumx2 = sumx2 + ((*p) * (*p));
                p++;
            };
        }
        S = sqrt (sumx2 / n - (sumx / n) * (sumx / n));
        sumx2 = 0;
        printf ("%.5f\n", S);
        sumx = 0;
    };
}

