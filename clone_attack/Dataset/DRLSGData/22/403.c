void  main () {
    int Nzv0t3QhT;
    int b;
    char LgULP8dxGH [(1352 - 150)];
    gets (LgULP8dxGH);
    int Ku9MtvwJeb;
    int F8AtwkNzri;
    int UvWOfRL;
    int Tb1H4UC [(1052 - 752)];
    int jVha5gt;
    char aON0ed5BP [(793 - 493)] [(503 - 498)];
    UvWOfRL = (131 - 131);
    Ku9MtvwJeb = (965 - 965);
    Nzv0t3QhT = (423 - 423);
    {
        jVha5gt = (1446 - 494) - 952;
        for (; LgULP8dxGH[jVha5gt] != (866 - 866);) {
            if (('9' >= LgULP8dxGH[jVha5gt] && '0' <= LgULP8dxGH[jVha5gt]) && (LgULP8dxGH[jVha5gt + (336 - 335)] <= '9' && LgULP8dxGH[jVha5gt + (57 - 56)] >= '0')) {
                aON0ed5BP[Nzv0t3QhT][Ku9MtvwJeb] = LgULP8dxGH[jVha5gt];
                Ku9MtvwJeb = Ku9MtvwJeb +(933 - 932);
            }
            if ((LgULP8dxGH[jVha5gt] <= '9' && '0' <= LgULP8dxGH[jVha5gt]) && (LgULP8dxGH[jVha5gt + (695 - 694)] > '9' || '0' > LgULP8dxGH[jVha5gt + (929 - 928)])) {
                UvWOfRL = UvWOfRL +(70 - 69);
                aON0ed5BP[Nzv0t3QhT][Ku9MtvwJeb] = LgULP8dxGH[jVha5gt];
                Nzv0t3QhT = Nzv0t3QhT +(205 - 204);
                aON0ed5BP[Nzv0t3QhT][Ku9MtvwJeb +(429 - 428)] = '\0';
                Ku9MtvwJeb = (204 - 204);
            }
            jVha5gt = jVha5gt + (678 - 677);
        }
    }
    if (!((972 - 971) != Nzv0t3QhT))
        ;
    else {
        {
            jVha5gt = (1770 - 874) - 896;
            for (; UvWOfRL > jVha5gt;) {
                sscanf (aON0ed5BP[jVha5gt], "%d", &Tb1H4UC[jVha5gt]);
                jVha5gt = jVha5gt + 1;
            }
        }
        F8AtwkNzri = Tb1H4UC[(977 - 977)];
        {
            jVha5gt = (623 - 600) - (99 - 76);
            for (; UvWOfRL > jVha5gt;) {
                if (Tb1H4UC[jVha5gt] != F8AtwkNzri)
                    break;
                jVha5gt = jVha5gt + (941 - 940);
            }
        }
        if (UvWOfRL > jVha5gt) {
            {
                jVha5gt = 327 - (1171 - 845);
                for (; jVha5gt < UvWOfRL;) {
                    Nzv0t3QhT = (727 - 163) - (1334 - 770);
                    for (; Nzv0t3QhT < UvWOfRL -jVha5gt;) {
                        if (Tb1H4UC[Nzv0t3QhT] < Tb1H4UC[Nzv0t3QhT +(370 - 369)]) {
                            b = Tb1H4UC[Nzv0t3QhT];
                            Tb1H4UC[Nzv0t3QhT] = Tb1H4UC[Nzv0t3QhT +(446 - 445)];
                            Tb1H4UC[Nzv0t3QhT +(834 - 833)] = b;
                        }
                        Nzv0t3QhT = Nzv0t3QhT +1;
                    }
                    jVha5gt = jVha5gt + 1;
                }
            }
            F8AtwkNzri = Tb1H4UC[(724 - 724)];
            {
                jVha5gt = (644 - 644);
                for (; jVha5gt < UvWOfRL;) {
                    if (Tb1H4UC[jVha5gt] != F8AtwkNzri)
                        break;
                    jVha5gt = jVha5gt + 1;
                }
            }
            printf ("%d\n", Tb1H4UC[jVha5gt]);
        }
        else
            ;
    }
}

