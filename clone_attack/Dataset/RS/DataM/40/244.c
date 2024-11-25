double  RS9VE1WJ (double  gC8wNJ, double  ARM9AdpF2z7, double  c, double  dj3Lw7n, double  NcGubJmi) {
    double  yIm7K1tZb;
    double  RmHT8KztGp;
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
    yIm7K1tZb = (gC8wNJ + ARM9AdpF2z7 +c + dj3Lw7n) / 2;
    RmHT8KztGp = sqrt ((yIm7K1tZb - gC8wNJ) * (yIm7K1tZb - ARM9AdpF2z7) * (yIm7K1tZb - c) * (yIm7K1tZb - dj3Lw7n) - gC8wNJ * ARM9AdpF2z7 *c * dj3Lw7n * (cos (NcGubJmi)) *(cos (NcGubJmi)));
    return RmHT8KztGp;
}

void  main () {
    double  gC8wNJ, ARM9AdpF2z7, c, dj3Lw7n, NcGubJmi, yIm7K1tZb, RmHT8KztGp;
    scanf ("%lf%lf%lf%lf%lf", &gC8wNJ, &ARM9AdpF2z7, &c, &dj3Lw7n, &NcGubJmi);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    NcGubJmi = NcGubJmi *PI / 360;
    yIm7K1tZb = (gC8wNJ + ARM9AdpF2z7 +c + dj3Lw7n) / 2;
    if (0 > (yIm7K1tZb - gC8wNJ) * (yIm7K1tZb - ARM9AdpF2z7) * (yIm7K1tZb - c) * (yIm7K1tZb - dj3Lw7n) - gC8wNJ * ARM9AdpF2z7 *c * dj3Lw7n * (cos (NcGubJmi)) *(cos (NcGubJmi))) {
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
    else {
        RmHT8KztGp = RS9VE1WJ (gC8wNJ, ARM9AdpF2z7, c, dj3Lw7n, NcGubJmi);
        printf ("%.4lf", RmHT8KztGp);
    };
}

