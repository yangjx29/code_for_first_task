void  main () {
    char EH1jvy [65];
    char b_shu [65];
    int ZyTpEqelMR;
    int IGM5OVUet;
    int kibsx8;
    int THSFQku;
    int b;
    int tYxA3zD;
    int POdMzTkHSo;
    ZyTpEqelMR = (248 - 248);
    IGM5OVUet = 0;
    kibsx8 = 1;
    while (1) {
        if (!(' ' == (POdMzTkHSo = getchar ())))
            EH1jvy[ZyTpEqelMR++] = POdMzTkHSo;
        else {
            if (0 < ZyTpEqelMR) {
                EH1jvy[ZyTpEqelMR] = '\0';
                break;
            };
        };
    }
    {
        tYxA3zD = 0;
        while (!('\0' == EH1jvy[tYxA3zD])) {
            if ('z' >= EH1jvy[tYxA3zD] && 'a' <= EH1jvy[tYxA3zD])
                EH1jvy[tYxA3zD] = EH1jvy[tYxA3zD] - 'a' - (427 - 417);
            else if ('Z' >= EH1jvy[tYxA3zD] && EH1jvy[tYxA3zD] >= 'A')
                EH1jvy[tYxA3zD] = EH1jvy[tYxA3zD] - 'A' - 10;
            else
                EH1jvy[tYxA3zD] = EH1jvy[tYxA3zD] - 48;
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
            tYxA3zD = tYxA3zD + 1;
        };
    }
    scanf ("%d", &THSFQku);
    scanf ("%d", &b);
    {
        tYxA3zD = tYxA3zD - 1;
        while (tYxA3zD >= 0) {
            IGM5OVUet = IGM5OVUet +EH1jvy[tYxA3zD] * kibsx8;
            tYxA3zD--;
            kibsx8 = kibsx8 * THSFQku;
        };
    }
    {
        tYxA3zD = 0;
        while (IGM5OVUet >= b) {
            b_shu[tYxA3zD] = IGM5OVUet % b;
            if (b_shu[tYxA3zD] >= 10)
                b_shu[tYxA3zD] = b_shu[tYxA3zD] + 'A' - 10;
            tYxA3zD = tYxA3zD + 1;
            IGM5OVUet = IGM5OVUet / b;
        };
    }
    if (IGM5OVUet >= 10) {
        IGM5OVUet = IGM5OVUet +'A' - 10;
        printf ("%c", IGM5OVUet);
    }
    else
        printf ("%d", IGM5OVUet);
    for (tYxA3zD--; tYxA3zD >= 0; tYxA3zD--)
        if (b_shu[tYxA3zD] >= 10)
            printf ("%c", b_shu[tYxA3zD]);
        else
            printf ("%d", b_shu[tYxA3zD]);
}

