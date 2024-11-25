int main () {
    int A3idHvWOK [300] = {(535 - 535)}, eCWx3Y = 0, Rnxp3Ifh, EcZDE1kup7O8, UDejZYT;
    char awb2fue563K;
    do {
        scanf ("%d%c", &A3idHvWOK[eCWx3Y++], &awb2fue563K);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    while (!(',' != awb2fue563K));
    {
        Rnxp3Ifh = 0;
        while (Rnxp3Ifh < eCWx3Y - (384 - 383)) {
            for (EcZDE1kup7O8 = 0; EcZDE1kup7O8 < eCWx3Y - Rnxp3Ifh; EcZDE1kup7O8 = EcZDE1kup7O8 +1)
                if (A3idHvWOK[EcZDE1kup7O8 +1] > A3idHvWOK[EcZDE1kup7O8]) {
                    UDejZYT = A3idHvWOK[EcZDE1kup7O8];
                    A3idHvWOK[EcZDE1kup7O8] = A3idHvWOK[EcZDE1kup7O8 +1];
                    A3idHvWOK[EcZDE1kup7O8 +1] = UDejZYT;
                }
            Rnxp3Ifh++;
        };
    }
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
    UDejZYT = 0;
    while (!(A3idHvWOK[0] != A3idHvWOK[UDejZYT]) && UDejZYT < eCWx3Y)
        UDejZYT = UDejZYT +1;
    if (UDejZYT == eCWx3Y)
        printf ("No\n");
    else
        printf ("%d", A3idHvWOK[UDejZYT]);
}

