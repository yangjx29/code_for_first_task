int main () {
    double  *I26p5n1P, *s8zIwUVc3X4p;
    int nYNvpu6lgm;
    int Atz3ljS;
    int wGwi1zUTWa;
    int wAhLVmDt;
    int Ns6xRaLH;
    double  heW1pugiEPrB, WTzNxCjHm8pL, SpbjiH6BFXqL;
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
    free (I26p5n1P);
    free (s8zIwUVc3X4p);
    scanf ("%d\n", &nYNvpu6lgm);
    I26p5n1P = (double  *) malloc (sizeof (double ) * 101);
    s8zIwUVc3X4p = (double  *) malloc (sizeof (double ) * nYNvpu6lgm);
    {
        Atz3ljS = 926 - 926;
        while (nYNvpu6lgm > Atz3ljS) {
            scanf ("%lf\n", &SpbjiH6BFXqL);
            I26p5n1P[(566 - 566)] = SpbjiH6BFXqL;
            heW1pugiEPrB = 0;
            {
                wGwi1zUTWa = 850 - 849;
                while (I26p5n1P[0] >= wGwi1zUTWa) {
                    scanf ("%lf", &I26p5n1P[wGwi1zUTWa]);
                    heW1pugiEPrB = heW1pugiEPrB + I26p5n1P[wGwi1zUTWa];
                    wGwi1zUTWa++;
                };
            }
            heW1pugiEPrB = heW1pugiEPrB / I26p5n1P[0];
            WTzNxCjHm8pL = 0;
            {
                wAhLVmDt = 1;
                while (wAhLVmDt <= I26p5n1P[0]) {
                    WTzNxCjHm8pL = WTzNxCjHm8pL +(I26p5n1P[wAhLVmDt] - heW1pugiEPrB) * (I26p5n1P[wAhLVmDt] - heW1pugiEPrB);
                    wAhLVmDt = wAhLVmDt + 1;
                };
            }
            WTzNxCjHm8pL = WTzNxCjHm8pL / I26p5n1P[0];
            WTzNxCjHm8pL = sqrt (WTzNxCjHm8pL);
            s8zIwUVc3X4p[Atz3ljS] = WTzNxCjHm8pL;
            Atz3ljS++;
        };
    }
    {
        Ns6xRaLH = 0;
        while (Ns6xRaLH < nYNvpu6lgm) {
            printf ("%.5lf\n", s8zIwUVc3X4p[Ns6xRaLH]);
            Ns6xRaLH = Ns6xRaLH +1;
        };
    }
    return 0;
}

