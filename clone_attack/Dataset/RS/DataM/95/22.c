main () {
    char ZpX4PeW [90], JH2MXDV9m6uC [90];
    int AyYX8TsDL7;
    int TXWKhHpzyIEP;
    int AZelBdtspqM;
    int KprqOf0sVJ;
    int oIlphe;
    AyYX8TsDL7 = (158 - 158);
    gets (ZpX4PeW);
    gets (JH2MXDV9m6uC);
    AZelBdtspqM = strlen (ZpX4PeW);
    {
        TXWKhHpzyIEP = 0;
        while (TXWKhHpzyIEP <= AZelBdtspqM -1) {
            if (ZpX4PeW[TXWKhHpzyIEP] >= 'a' && ZpX4PeW[TXWKhHpzyIEP] <= 122)
                ZpX4PeW[TXWKhHpzyIEP] = ZpX4PeW[TXWKhHpzyIEP] - 32;
            TXWKhHpzyIEP = TXWKhHpzyIEP +1;
        };
    }
    KprqOf0sVJ = strlen (JH2MXDV9m6uC);
    {
        TXWKhHpzyIEP = 0;
        while (TXWKhHpzyIEP <= AZelBdtspqM -1) {
            if (JH2MXDV9m6uC[TXWKhHpzyIEP] >= 97 && JH2MXDV9m6uC[TXWKhHpzyIEP] <= 122)
                JH2MXDV9m6uC[TXWKhHpzyIEP] = JH2MXDV9m6uC[TXWKhHpzyIEP] - 32;
            TXWKhHpzyIEP = TXWKhHpzyIEP +1;
        };
    }
    AyYX8TsDL7 = strcmp (ZpX4PeW, JH2MXDV9m6uC);
    if (AyYX8TsDL7 < 0)
        printf ("<");
    if (AyYX8TsDL7 == 0)
        printf ("=");
    if (AyYX8TsDL7 > 0)
        printf (">");
    return 0;
}

