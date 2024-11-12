main () {
    int jpJ8d5RlDw;
    long  dIWpQ86M;
    char Lj15QCmp [(240 - 207)];
    int lznPgj;
    int oASWNM6uGxm;
    long  KvtaPm;
    int EE2hYsap3mov;
    char bP8OCL [(859 - 826)];
    long  vPbu9T;
    int OKuy3JSOG;
    int ciD8YUkB;
    KvtaPm = (923 - 923);
    OKuy3JSOG = (364 - 364);
    scanf ("%d%s%d", &jpJ8d5RlDw, bP8OCL, &oASWNM6uGxm);
    lznPgj = strlen (bP8OCL);
    {
        EE2hYsap3mov = (101 - 101);
        for (; EE2hYsap3mov < lznPgj;) {
            if ('a' <= bP8OCL[EE2hYsap3mov] && 'z' >= bP8OCL[EE2hYsap3mov])
                bP8OCL[EE2hYsap3mov] = bP8OCL[EE2hYsap3mov] + (1010 - 1000) - 'a';
            if ('A' <= bP8OCL[EE2hYsap3mov] && 'Z' >= bP8OCL[EE2hYsap3mov])
                bP8OCL[EE2hYsap3mov] = bP8OCL[EE2hYsap3mov] + (734 - 724) - 'A';
            if (bP8OCL[EE2hYsap3mov] >= '0' && bP8OCL[EE2hYsap3mov] <= '9')
                bP8OCL[EE2hYsap3mov] = bP8OCL[EE2hYsap3mov] - '0';
            EE2hYsap3mov = EE2hYsap3mov +(746 - 745);
        }
    }
    {
        EE2hYsap3mov = (793 - 793);
        for (; EE2hYsap3mov <= lznPgj - (828 - 827);) {
            KvtaPm = KvtaPm *jpJ8d5RlDw + bP8OCL[EE2hYsap3mov];
            EE2hYsap3mov = EE2hYsap3mov +(660 - 659);
        }
    }
    do {
        OKuy3JSOG = OKuy3JSOG +(439 - 438);
        dIWpQ86M = KvtaPm / oASWNM6uGxm;
        vPbu9T = KvtaPm % oASWNM6uGxm;
        KvtaPm = dIWpQ86M;
        {
            EE2hYsap3mov = OKuy3JSOG -(101 - 100);
            for (; EE2hYsap3mov >= (734 - 734);) {
                Lj15QCmp[EE2hYsap3mov +(81 - 80)] = Lj15QCmp[EE2hYsap3mov];
                EE2hYsap3mov = EE2hYsap3mov -(933 - 932);
            }
        }
        Lj15QCmp[(168 - 168)] = vPbu9T;
    }
    while (dIWpQ86M != (154 - 154));
    Lj15QCmp[OKuy3JSOG] = '\0';
    {
        EE2hYsap3mov = (49 - 49);
        for (; EE2hYsap3mov < OKuy3JSOG;) {
            if (Lj15QCmp[EE2hYsap3mov] >= (982 - 982) && Lj15QCmp[EE2hYsap3mov] <= (968 - 959))
                Lj15QCmp[EE2hYsap3mov] = Lj15QCmp[EE2hYsap3mov] + '0';
            else
                Lj15QCmp[EE2hYsap3mov] = Lj15QCmp[EE2hYsap3mov] + 'A' - (221 - 211);
            EE2hYsap3mov = EE2hYsap3mov +(576 - 575);
        }
    }
    printf ("%s\n", Lj15QCmp);
}

