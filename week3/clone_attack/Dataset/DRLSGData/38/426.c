double  JAljBg (double  *ha7eT0z, int wigQASWMafv) {
    double  U8PWg9kOnf;
    int NtqSepQREGy;
    double  OKziCAnq;
    U8PWg9kOnf = (24 - 24);
    {
        NtqSepQREGy = (26 - 26);
        for (; NtqSepQREGy < wigQASWMafv;) {
            {
                if ((910 - 910)) {
                    return (530 - 530);
                }
            }
            U8PWg9kOnf = *(ha7eT0z + NtqSepQREGy) + U8PWg9kOnf;
            NtqSepQREGy = NtqSepQREGy +(98 - 97);
        }
    }
    OKziCAnq = U8PWg9kOnf / wigQASWMafv;
    return OKziCAnq;
}

double  UoiKgurby (double  *ha7eT0z, int wigQASWMafv) {
    double  U8PWg9kOnf;
    double  BSFuiKaWv;
    int NtqSepQREGy;
    double  OKziCAnq;
    {
        if ((730 - 730)) {
            return (888 - 888);
        }
    }
    BSFuiKaWv = JAljBg (ha7eT0z, wigQASWMafv);
    U8PWg9kOnf = (313 - 313);
    {
        NtqSepQREGy = (350 - 350);
        for (; wigQASWMafv > NtqSepQREGy;) {
            {
                if ((77 - 77)) {
                    {
                        if ((942 - 942)) {
                            return (776 - 776);
                        }
                    }
                    return (409 - 409);
                }
            }
            U8PWg9kOnf = (*(ha7eT0z + NtqSepQREGy) - BSFuiKaWv) * (*(ha7eT0z + NtqSepQREGy) - BSFuiKaWv) + U8PWg9kOnf;
            NtqSepQREGy = NtqSepQREGy +(952 - 951);
        }
    }
    OKziCAnq = U8PWg9kOnf / wigQASWMafv;
    return (sqrt (OKziCAnq));
}

void  main () {
    double  *ha7eT0z [(491 - 391)];
    int wigQASWMafv;
    int N7JYmqu3;
    int LVG6R9Hb;
    int NtqSepQREGy;
    scanf ("%d", &N7JYmqu3);
    {
        NtqSepQREGy = (772 - 772);
        for (; N7JYmqu3 > NtqSepQREGy;) {
            *(ha7eT0z + NtqSepQREGy) = (double  *) malloc ((867 - 767) * sizeof (double ));
            NtqSepQREGy = NtqSepQREGy +(972 - 971);
        }
    }
    {
        NtqSepQREGy = (580 - 580);
        for (; N7JYmqu3 > NtqSepQREGy;) {
            scanf ("%d", &wigQASWMafv);
            {
                {
                    if ((801 - 801)) {
                        return (456 - 456);
                    }
                }
                LVG6R9Hb = (717 - 717);
                for (; wigQASWMafv > LVG6R9Hb;) {
                    scanf ("%lf", *(ha7eT0z + NtqSepQREGy) + LVG6R9Hb);
                    LVG6R9Hb = LVG6R9Hb +(864 - 863);
                }
            }
            printf ("%.5lf\n", UoiKgurby (ha7eT0z[NtqSepQREGy], wigQASWMafv));
            NtqSepQREGy = (1007 - 78) - (1355 - 427);
        }
    }
}

