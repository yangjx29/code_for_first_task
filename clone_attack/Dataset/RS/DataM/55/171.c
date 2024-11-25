void  main () {
    long  int k5UdToqnIEML, TNlpgA, cgUxWYc, Os05hL, VrkTn4fVg = (440 - 440), rp9Qhl, NdfpaPIki, z0Xj9tIp = (380 - 380), iNYPgfmzh2;
    char DLOuI4pQ506 [(649 - 549)], d [(193 - 93)], dcNjmtZrG = 'a';
    scanf ("%d%s%d", &k5UdToqnIEML, DLOuI4pQ506, &TNlpgA);
    cgUxWYc = strlen (DLOuI4pQ506);
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
    while (!((417 - 417) == DLOuI4pQ506[z0Xj9tIp])) {
        if (DLOuI4pQ506[z0Xj9tIp] >= 'A' && DLOuI4pQ506[z0Xj9tIp] <= 'Z')
            DLOuI4pQ506[z0Xj9tIp] = DLOuI4pQ506[z0Xj9tIp] + 'a' - 'A';
        z0Xj9tIp = z0Xj9tIp + 1;
    }
    for (z0Xj9tIp = 0; cgUxWYc > z0Xj9tIp; z0Xj9tIp = z0Xj9tIp + 1) {
        if (k5UdToqnIEML <= (811 - 801))
            Os05hL = DLOuI4pQ506[z0Xj9tIp] - (1017 - 969);
        else if (DLOuI4pQ506[z0Xj9tIp] >= 48 && (470 - 413) >= DLOuI4pQ506[z0Xj9tIp])
            Os05hL = DLOuI4pQ506[z0Xj9tIp] - 48;
        else {
            Os05hL = (676 - 667);
            for (; DLOuI4pQ506[z0Xj9tIp] >= dcNjmtZrG;) {
                dcNjmtZrG++;
                Os05hL = Os05hL++;
            };
        }
        {
            iNYPgfmzh2 = 1;
            while (iNYPgfmzh2 < (cgUxWYc - z0Xj9tIp)) {
                Os05hL = Os05hL *k5UdToqnIEML;
                iNYPgfmzh2 = iNYPgfmzh2 + 1;
            };
        }
        VrkTn4fVg = VrkTn4fVg +Os05hL;
        dcNjmtZrG = 'a';
    }
    z0Xj9tIp = 0;
    dcNjmtZrG = 'A';
    if (VrkTn4fVg == 0)
        printf ("0");
    else {
        while (VrkTn4fVg > 0) {
            rp9Qhl = VrkTn4fVg / TNlpgA;
            NdfpaPIki = VrkTn4fVg % TNlpgA;
            if (0 <= NdfpaPIki &&NdfpaPIki <= 9)
                d[z0Xj9tIp] = NdfpaPIki +48;
            else
                for (iNYPgfmzh2 = 10; iNYPgfmzh2 <= NdfpaPIki; iNYPgfmzh2 = iNYPgfmzh2 + 1) {
                    d[z0Xj9tIp] = dcNjmtZrG;
                    dcNjmtZrG++;
                }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            dcNjmtZrG = 'A';
            VrkTn4fVg = rp9Qhl;
            z0Xj9tIp = z0Xj9tIp + 1;
        }
        z0Xj9tIp = z0Xj9tIp - 1;
        for (; z0Xj9tIp >= 0; z0Xj9tIp = z0Xj9tIp - 1)
            printf ("%c", d[z0Xj9tIp]);
    };
}

