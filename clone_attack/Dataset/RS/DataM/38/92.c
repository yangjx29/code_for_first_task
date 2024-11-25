void  uJ2s1Yp0RD8b (double  EvlOq9 [(400 - 300)], int D8ca0MOj, double  eaWlAw2cLS) {
    int DRgOSt0hq3a7;
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
    {
        DRgOSt0hq3a7 = 431 - 431;
        while (D8ca0MOj > DRgOSt0hq3a7) {
            EvlOq9[DRgOSt0hq3a7] = (EvlOq9[DRgOSt0hq3a7] - eaWlAw2cLS) * (EvlOq9[DRgOSt0hq3a7] - eaWlAw2cLS);
            DRgOSt0hq3a7 = DRgOSt0hq3a7 +1;
        };
    };
}

int main () {
    double  EvlOq9 [100];
    double  eaWlAw2cLS;
    int Por3KLlAOE, D8ca0MOj, DRgOSt0hq3a7, APjTK0LN6CDo;
    scanf ("%d", &Por3KLlAOE);
    for (DRgOSt0hq3a7 = (379 - 378); Por3KLlAOE >= DRgOSt0hq3a7; DRgOSt0hq3a7 = DRgOSt0hq3a7 +1) {
        eaWlAw2cLS = (431 - 431);
        scanf ("%d", &D8ca0MOj);
        for (APjTK0LN6CDo = (933 - 933); D8ca0MOj > APjTK0LN6CDo; APjTK0LN6CDo = APjTK0LN6CDo +1) {
            scanf ("%lf", &EvlOq9[APjTK0LN6CDo]);
            eaWlAw2cLS = eaWlAw2cLS + EvlOq9[APjTK0LN6CDo];
        }
        eaWlAw2cLS = eaWlAw2cLS / D8ca0MOj;
        uJ2s1Yp0RD8b (EvlOq9, D8ca0MOj, eaWlAw2cLS);
        eaWlAw2cLS = (297 - 297);
        for (APjTK0LN6CDo = 0; APjTK0LN6CDo < D8ca0MOj; APjTK0LN6CDo = APjTK0LN6CDo +1)
            eaWlAw2cLS = eaWlAw2cLS + EvlOq9[APjTK0LN6CDo];
        eaWlAw2cLS = eaWlAw2cLS / D8ca0MOj;
        eaWlAw2cLS = sqrt (eaWlAw2cLS);
        printf ("%.5lf\n", eaWlAw2cLS);
    }
    return 0;
}

