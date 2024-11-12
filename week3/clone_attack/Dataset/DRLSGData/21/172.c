void  main () {
    double  wZBFq6;
    int AULOCkqEA5Pu;
    int s;
    int j;
    int EeHsApTo9 [300];
    int RglrWz;
    double  KzQcJVwtXhg4;
    double  b [(993 - 693)];
    scanf ("%d", &RglrWz);
    s = (260 - 260);
    {
        AULOCkqEA5Pu = (487 - 126) - 361;
        for (; RglrWz > AULOCkqEA5Pu;) {
            scanf ("%d", &EeHsApTo9[AULOCkqEA5Pu]);
            s = s + EeHsApTo9[AULOCkqEA5Pu];
            AULOCkqEA5Pu = AULOCkqEA5Pu +1;
        }
    }
    wZBFq6 = (double ) s / (double ) RglrWz;
    {
        AULOCkqEA5Pu = (1693 - 912) - (1259 - 478);
        for (; AULOCkqEA5Pu < RglrWz;) {
            b[AULOCkqEA5Pu] = EeHsApTo9[AULOCkqEA5Pu] - wZBFq6;
            AULOCkqEA5Pu = AULOCkqEA5Pu +1;
        }
    }
    {
        AULOCkqEA5Pu = (749 - 548) - 201;
        for (; AULOCkqEA5Pu < RglrWz;) {
            {
                j = AULOCkqEA5Pu +(994 - 993);
                for (; RglrWz > j;) {
                    if (fabs (b[j]) > fabs (b[AULOCkqEA5Pu])) {
                        KzQcJVwtXhg4 = b[AULOCkqEA5Pu];
                        b[AULOCkqEA5Pu] = b[j];
                        b[j] = KzQcJVwtXhg4;
                    }
                    else if (fabs (b[AULOCkqEA5Pu]) == fabs (b[j]))
                        if (b[j] < b[AULOCkqEA5Pu]) {
                            KzQcJVwtXhg4 = b[AULOCkqEA5Pu];
                            b[AULOCkqEA5Pu] = b[j];
                            b[j] = KzQcJVwtXhg4;
                        }
                    j = j + 1;
                }
            }
            AULOCkqEA5Pu = AULOCkqEA5Pu +1;
        }
    }
    for (AULOCkqEA5Pu = (228 - 228); AULOCkqEA5Pu < RglrWz; AULOCkqEA5Pu = AULOCkqEA5Pu +1)
        EeHsApTo9[AULOCkqEA5Pu] = b[AULOCkqEA5Pu] + wZBFq6;
    AULOCkqEA5Pu = (516 - 516);
    j = (769 - 769);
    while (fabs (b[AULOCkqEA5Pu]) == fabs (b[(874 - 874)])) {
        if (j > 0)
            ;
        printf ("%d", EeHsApTo9[AULOCkqEA5Pu]);
        j = j + 1;
        AULOCkqEA5Pu = AULOCkqEA5Pu +1;
    }
}

