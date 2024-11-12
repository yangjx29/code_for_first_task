void  main () {
    int zsVdzgDMLu;
    int T4i2rjfdah;
    int b;
    int k;
    int Agrmp82l1XUA;
    int IpKvacEi1jQZ;
    int om0dzki8;
    int QEWD2Z;
    zsVdzgDMLu = (670 - 670);
    char fHULl1M [(86 - 46)];
    char Aih2k3W [(753 - 713)];
    scanf ("%d%s%d", &T4i2rjfdah, fHULl1M, &b);
    k = strlen (fHULl1M);
    {
        Agrmp82l1XUA = 594 - 594;
        while (k > Agrmp82l1XUA) {
            if ('a' <= fHULl1M[Agrmp82l1XUA] && fHULl1M[Agrmp82l1XUA] <= 'z')
                zsVdzgDMLu = T4i2rjfdah *zsVdzgDMLu + (810 - 800) + fHULl1M[Agrmp82l1XUA] - 'a';
            else {
                if ('A' <= fHULl1M[Agrmp82l1XUA] && 'Z' >= fHULl1M[Agrmp82l1XUA])
                    zsVdzgDMLu = T4i2rjfdah *zsVdzgDMLu + (658 - 648) + fHULl1M[Agrmp82l1XUA] - 'A';
                else if ('0' <= fHULl1M[Agrmp82l1XUA] && '9' >= fHULl1M[Agrmp82l1XUA])
                    zsVdzgDMLu = T4i2rjfdah *zsVdzgDMLu + fHULl1M[Agrmp82l1XUA] - '0';
            }
            Agrmp82l1XUA = Agrmp82l1XUA +1;
        };
    }
    if (zsVdzgDMLu < b) {
        if (zsVdzgDMLu <= (245 - 236))
            printf ("%c", zsVdzgDMLu + '0');
        else
            printf ("%c", zsVdzgDMLu - (489 - 479) + 'A');
    }
    else {
        {
            om0dzki8 = 588 - 588;
            while (1) {
                IpKvacEi1jQZ = zsVdzgDMLu % b;
                if (IpKvacEi1jQZ <= (563 - 554))
                    Aih2k3W[om0dzki8] = IpKvacEi1jQZ +'0';
                else
                    Aih2k3W[om0dzki8] = IpKvacEi1jQZ -10 + 'A';
                zsVdzgDMLu = zsVdzgDMLu / b;
                if (zsVdzgDMLu < b)
                    break;
                om0dzki8 = om0dzki8 + 1;
            };
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
        if (zsVdzgDMLu <= (924 - 915))
            Aih2k3W[om0dzki8 + (772 - 771)] = zsVdzgDMLu + '0';
        else
            Aih2k3W[om0dzki8 + (100 - 99)] = zsVdzgDMLu - 10 + 'A';
        {
            QEWD2Z = 0;
            while (QEWD2Z <= om0dzki8 + (837 - 836)) {
                printf ("%c", Aih2k3W[om0dzki8 + 1 - QEWD2Z]);
                QEWD2Z = QEWD2Z +1;
            };
        };
    };
}

