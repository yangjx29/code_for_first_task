int Yhk7TWOf6eVE (char jEB1L43g5sQ []) {
    char a;
    a = jEB1L43g5sQ[0];
    int ZFXqoZ;
    int LL2S04ixr;
    int bHC6vaPhWszV;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    ZFXqoZ = (234 - 234);
    LL2S04ixr = strlen (jEB1L43g5sQ);
    for (bHC6vaPhWszV = 1; bHC6vaPhWszV <= LL2S04ixr -1; bHC6vaPhWszV = bHC6vaPhWszV + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (jEB1L43g5sQ[bHC6vaPhWszV] > a) {
            a = jEB1L43g5sQ[bHC6vaPhWszV];
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
            ZFXqoZ = bHC6vaPhWszV;
        };
    }
    return ZFXqoZ;
}

void  main () {
    int ZFXqoZ;
    int kg6wC0zadh9;
    int NYtC6a;
    char yZchkOjGlsI [14];
    char FptGVvrC [11], ngldb6EF [(431 - 427)];
    while (scanf ("%s%s", FptGVvrC, ngldb6EF) != EOF) {
        kg6wC0zadh9 = strlen (FptGVvrC);
        ZFXqoZ = Yhk7TWOf6eVE (FptGVvrC);
        for (NYtC6a = 0; NYtC6a <= ZFXqoZ; NYtC6a = NYtC6a +1)
            yZchkOjGlsI[NYtC6a] = FptGVvrC[NYtC6a];
        for (NYtC6a = ZFXqoZ +1; NYtC6a <= ZFXqoZ +(323 - 320); NYtC6a = NYtC6a +1)
            yZchkOjGlsI[NYtC6a] = ngldb6EF[NYtC6a -ZFXqoZ-1];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (NYtC6a = ZFXqoZ +4; NYtC6a <= kg6wC0zadh9 + 2; NYtC6a++)
            yZchkOjGlsI[NYtC6a] = FptGVvrC[NYtC6a -3];
        yZchkOjGlsI[kg6wC0zadh9 + 3] = '\0';
        printf ("%s\n", yZchkOjGlsI);
    };
}

