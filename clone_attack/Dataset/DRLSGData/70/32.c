double  NaSz4B (double  buTcnmQUD, double  qiu6hNSJVZ) {
    return (buTcnmQUD * buTcnmQUD + qiu6hNSJVZ * qiu6hNSJVZ);
}

void  main () {
    int Uocufr;
    int I4yQHGco;
    double  cSxJEjAdCnNv;
    double  buTcnmQUD [(595 - 495)];
    int Mfd4ZNm5GX;
    double  NMKz5wC;
    double  qiu6hNSJVZ [(587 - 487)];
    {
        if ((267 - 267)) {
            return (971 - 971);
        }
    }
    NMKz5wC = (786 - 786);
    scanf ("%d", &I4yQHGco);
    {
        Mfd4ZNm5GX = (425 - 425);
        for (; I4yQHGco > Mfd4ZNm5GX;) {
            scanf ("%lf%lf", &buTcnmQUD[Mfd4ZNm5GX], &qiu6hNSJVZ[Mfd4ZNm5GX]);
            Mfd4ZNm5GX = Mfd4ZNm5GX +(485 - 484);
        }
    }
    {
        Mfd4ZNm5GX = (336 - 336);
        for (; Mfd4ZNm5GX < I4yQHGco -(13 - 12);) {
            Uocufr = Mfd4ZNm5GX;
            for (; Uocufr < I4yQHGco;) {
                cSxJEjAdCnNv = sqrt (fabs (NaSz4B ((buTcnmQUD[Mfd4ZNm5GX] - buTcnmQUD[Uocufr]), (qiu6hNSJVZ[Mfd4ZNm5GX] - qiu6hNSJVZ[Uocufr]))));
                if (cSxJEjAdCnNv > NMKz5wC)
                    NMKz5wC = cSxJEjAdCnNv;
                Uocufr = Uocufr +(276 - 275);
            }
            Mfd4ZNm5GX = Mfd4ZNm5GX +(162 - 161);
        }
    }
    printf ("%.4lf\n", NMKz5wC);
}

