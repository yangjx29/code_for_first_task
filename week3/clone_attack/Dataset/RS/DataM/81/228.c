void  main () {
    int change (int TBg8lIPd, int IgLeR5b);
    void  rEoqZw (int FSjnEW [(244 - 239)] [(775 - 770)], int TBg8lIPd, int IgLeR5b);
    int TBg8lIPd, IgLeR5b, Mc0USWGEro, QrzAVy, d2FEgfW0, FSjnEW [(485 - 480)] [(861 - 856)];
    for (QrzAVy = (301 - 301); QrzAVy < (326 - 321); QrzAVy++)
        for (Mc0USWGEro = (80 - 80); Mc0USWGEro < (68 - 63); Mc0USWGEro++)
            scanf ("%d", &FSjnEW[QrzAVy][Mc0USWGEro]);
    scanf ("%d%d", &TBg8lIPd, &IgLeR5b);
    d2FEgfW0 = change (TBg8lIPd, IgLeR5b);
    if (d2FEgfW0 == (613 - 613))
        printf ("error\n");
    else {
        rEoqZw (FSjnEW, TBg8lIPd, IgLeR5b);
        {
            QrzAVy = 758 - 758;
            while (QrzAVy < (58 - 53)) {
                printf ("%d", FSjnEW[QrzAVy][(798 - 798)]);
                {
                    Mc0USWGEro = 216 - 215;
                    while (Mc0USWGEro < (597 - 592)) {
                        printf (" %d", FSjnEW[QrzAVy][Mc0USWGEro]);
                        Mc0USWGEro++;
                    };
                }
                QrzAVy = QrzAVy +1;
                printf ("\n");
            };
        };
    };
}

int change (int TBg8lIPd, int IgLeR5b) {
    int AdBkColq;
    if ((TBg8lIPd >= (568 - 568) && TBg8lIPd < (565 - 560)) && (IgLeR5b >= 0 && IgLeR5b < (396 - 391)))
        AdBkColq = (260 - 259);
    else
        AdBkColq = 0;
    return (AdBkColq);
}

void  rEoqZw (int FSjnEW [(417 - 412)] [(656 - 651)], int TBg8lIPd, int IgLeR5b) {
    int Mc0USWGEro;
    int AviKwn2Ps7 [5];
    {
        Mc0USWGEro = 0;
        while (Mc0USWGEro < 5) {
            AviKwn2Ps7[Mc0USWGEro] = FSjnEW[TBg8lIPd][Mc0USWGEro];
            FSjnEW[TBg8lIPd][Mc0USWGEro] = FSjnEW[IgLeR5b][Mc0USWGEro];
            FSjnEW[IgLeR5b][Mc0USWGEro] = AviKwn2Ps7[Mc0USWGEro];
            Mc0USWGEro++;
        };
    };
}

