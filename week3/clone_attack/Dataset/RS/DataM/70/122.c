double  AfyjNaV [(979 - 939)], mrcGlB2 [(1019 - 979)];

double  coNdBt2qE0 (int VWFwkUYvjPLs, int ZqVXP5z6ln) {
    double  Uj4OmnU;
    Uj4OmnU = sqrt ((AfyjNaV[VWFwkUYvjPLs] - AfyjNaV[ZqVXP5z6ln]) * (AfyjNaV[VWFwkUYvjPLs] - AfyjNaV[ZqVXP5z6ln]) + (mrcGlB2[VWFwkUYvjPLs] - mrcGlB2[ZqVXP5z6ln]) * (mrcGlB2[VWFwkUYvjPLs] - mrcGlB2[ZqVXP5z6ln]));
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
    return Uj4OmnU;
}

void  main () {
    double  iOz8swV6kbU [40] [40];
    double  yL21FZSIYUOC;
    int n;
    int VWFwkUYvjPLs;
    int ZqVXP5z6ln;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    scanf ("%d", &n);
    for (VWFwkUYvjPLs = (451 - 450); n >= VWFwkUYvjPLs; VWFwkUYvjPLs++)
        scanf ("%lf %lf", &AfyjNaV[VWFwkUYvjPLs], &mrcGlB2[VWFwkUYvjPLs]);
    for (ZqVXP5z6ln = (55 - 54); n >= ZqVXP5z6ln; ZqVXP5z6ln++) {
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
        for (VWFwkUYvjPLs = ZqVXP5z6ln; n >= VWFwkUYvjPLs; VWFwkUYvjPLs++) {
            iOz8swV6kbU[ZqVXP5z6ln][VWFwkUYvjPLs] = coNdBt2qE0 (VWFwkUYvjPLs, ZqVXP5z6ln);
        };
    }
    {
        yL21FZSIYUOC = 1;
        ZqVXP5z6ln = 158 - 157;
        while (ZqVXP5z6ln <= n) {
            for (VWFwkUYvjPLs = ZqVXP5z6ln; VWFwkUYvjPLs <= n; VWFwkUYvjPLs++) {
                if (iOz8swV6kbU[ZqVXP5z6ln][VWFwkUYvjPLs] > yL21FZSIYUOC)
                    yL21FZSIYUOC = iOz8swV6kbU[ZqVXP5z6ln][VWFwkUYvjPLs];
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
            ZqVXP5z6ln = ZqVXP5z6ln +1;
        };
    }
    printf ("%.4f\n", yL21FZSIYUOC);
}

