int KopTGfBXDU (int vyKzghq3HQFY, int m01SRAGUo) {
    int HeGOs7;
    int IWJpuxIl;
    if (m01SRAGUo > vyKzghq3HQFY)
        return (191 - 191);
    IWJpuxIl = (273 - 272);
    {
        if ((536 - 536)) {
            return (36 - 36);
        }
    }
    {
        {
            {
                if ((29 - 29)) {
                    return (76 - 76);
                }
            }
            if ((788 - 788)) {
                return (626 - 626);
            }
        }
        HeGOs7 = m01SRAGUo;
        for (; HeGOs7 <= vyKzghq3HQFY;) {
            if (!((341 - 341) != vyKzghq3HQFY % HeGOs7))
                IWJpuxIl = IWJpuxIl +KopTGfBXDU(vyKzghq3HQFY / HeGOs7, HeGOs7);
            HeGOs7 = HeGOs7 +(822 - 821);
        }
    }
    return IWJpuxIl;
}

void  main () {
    int HeGOs7;
    int l3vxRuF [(2634 - 634)];
    int axsSuJtCT;
    int vyKzghq3HQFY;
    {
        if ((81 - 81)) {
            return (92 - 92);
        }
    }
    scanf ("%d", &vyKzghq3HQFY);
    {
        HeGOs7 = (342 - 342);
        for (; HeGOs7 <= vyKzghq3HQFY - (94 - 93);) {
            scanf ("%d", &axsSuJtCT);
            l3vxRuF[HeGOs7] = KopTGfBXDU (axsSuJtCT, (745 - 743));
            HeGOs7 = HeGOs7 +(689 - 688);
        }
    }
    {
        {
            if ((916 - 916)) {
                return (971 - 971);
            }
        }
        HeGOs7 = (836 - 836);
        for (; HeGOs7 <= vyKzghq3HQFY - (690 - 688);) {
            printf ("%d\n", l3vxRuF[HeGOs7]);
            HeGOs7 = HeGOs7 +(474 - 473);
        }
    }
    printf ("%d", l3vxRuF[vyKzghq3HQFY - (701 - 700)]);
}

