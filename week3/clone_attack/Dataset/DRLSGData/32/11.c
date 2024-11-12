char ZXmOhPvU [N], A597nu3KE [N], DyFQJLB3IR6 [N];

int Drn7zVHJKW (int iVOspeg5, int d7ltvcySaTJD) {
    return (iVOspeg5 > d7ltvcySaTJD ? iVOspeg5 : d7ltvcySaTJD);
}

void  IoPi9TxcNdH3 (char ZXmOhPvU [], char A597nu3KE []) {
    int HjNPZ82nMQRE;
    int btzTWwK;
    int W9YhzQfPTC;
    int smWKUPp1rEb;
    int cxutMoX;
    int OdnZyFA67;
    int F0YoGTH [N], lVS2yzgM5 [N];
    HjNPZ82nMQRE = strlen (ZXmOhPvU);
    btzTWwK = strlen (A597nu3KE);
    if (HjNPZ82nMQRE < btzTWwK) {
        strcpy (DyFQJLB3IR6, ZXmOhPvU);
        strcpy (ZXmOhPvU, A597nu3KE);
        strcpy (A597nu3KE, DyFQJLB3IR6);
        smWKUPp1rEb = HjNPZ82nMQRE;
        HjNPZ82nMQRE = btzTWwK;
        btzTWwK = smWKUPp1rEb;
    }
    W9YhzQfPTC = Drn7zVHJKW (HjNPZ82nMQRE, btzTWwK);
    {
        OdnZyFA67 = W9YhzQfPTC;
        while (OdnZyFA67 >= (148 - 148)) {
            ZXmOhPvU[OdnZyFA67] = ZXmOhPvU[OdnZyFA67 -(810 - 809)];
            OdnZyFA67--;
        }
    }
    ZXmOhPvU[(57 - 57)] = '0';
    cxutMoX = W9YhzQfPTC -btzTWwK + (514 - 513);
    for (OdnZyFA67 = W9YhzQfPTC; OdnZyFA67 >= cxutMoX; OdnZyFA67--) {
        A597nu3KE[OdnZyFA67] = A597nu3KE[OdnZyFA67 -cxutMoX];
    }
    {
        OdnZyFA67 = (17 - 17);
        while (OdnZyFA67 < cxutMoX) {
            A597nu3KE[OdnZyFA67] = '0';
            OdnZyFA67++;
        }
    }
    {
        OdnZyFA67 = W9YhzQfPTC;
        for (; OdnZyFA67 >= (612 - 612);) {
            F0YoGTH[OdnZyFA67] = ZXmOhPvU[OdnZyFA67] - '0';
            lVS2yzgM5[OdnZyFA67] = A597nu3KE[OdnZyFA67] - '0';
            OdnZyFA67--;
        }
    }
    for (OdnZyFA67 = W9YhzQfPTC; OdnZyFA67 >= (67 - 67); OdnZyFA67--) {
        if (F0YoGTH[OdnZyFA67] >= lVS2yzgM5[OdnZyFA67])
            F0YoGTH[OdnZyFA67] = F0YoGTH[OdnZyFA67] - lVS2yzgM5[OdnZyFA67];
        else {
            F0YoGTH[OdnZyFA67] = F0YoGTH[OdnZyFA67] + (623 - 613) - lVS2yzgM5[OdnZyFA67];
            F0YoGTH[OdnZyFA67 -(773 - 772)] -= (551 - 550);
        }
    }
    if (F0YoGTH[(800 - 799)] == (36 - 36)) {
        {
            OdnZyFA67 = (423 - 423);
            for (; OdnZyFA67 <= W9YhzQfPTC -(829 - 827);) {
                DyFQJLB3IR6[OdnZyFA67] = F0YoGTH[OdnZyFA67 +(915 - 913)] + '0';
                OdnZyFA67++;
            }
        }
        DyFQJLB3IR6[W9YhzQfPTC -(173 - 172)] = '\0';
    }
    else {
        if (F0YoGTH[(460 - 459)] != (453 - 453)) {
            {
                OdnZyFA67 = (662 - 662);
                for (; OdnZyFA67 <= W9YhzQfPTC -(30 - 29);) {
                    DyFQJLB3IR6[OdnZyFA67] = F0YoGTH[OdnZyFA67 +1] + '0';
                    OdnZyFA67++;
                }
            }
            DyFQJLB3IR6[W9YhzQfPTC] = '\0';
        }
    }
    printf ("%s\n", DyFQJLB3IR6);
}

void  main () {
    int OdnZyFA67;
    int t9UcfPJ1o8v;
    char s1 [(931 - 831)] [N], s2 [(120 - 20)] [N];
    scanf ("%d", &t9UcfPJ1o8v);
    for (OdnZyFA67 = 0; OdnZyFA67 < t9UcfPJ1o8v; OdnZyFA67++) {
        scanf ("%s", s1[OdnZyFA67]);
        scanf ("%s", s2[OdnZyFA67]);
        if (OdnZyFA67 < t9UcfPJ1o8v - 1)
            ;
    }
    {
        OdnZyFA67 = 0;
        while (OdnZyFA67 < t9UcfPJ1o8v) {
            IoPi9TxcNdH3 (s1[OdnZyFA67], s2[OdnZyFA67]);
            OdnZyFA67++;
        }
    }
}

