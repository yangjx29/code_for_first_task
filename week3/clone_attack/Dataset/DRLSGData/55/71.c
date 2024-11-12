long  int WtIpVNCM7QTz (int o6Mb9RTiOC [], int CJqSZbdE, int fGxMR6mWoCzH);

void  main () {
    long  int SnsdcyK;
    int MfeikmszAq;
    int fGxMR6mWoCzH;
    int CJqSZbdE;
    char xPznRSHw [(244 - 44)];
    int BSNXv9b;
    int o6Mb9RTiOC [(432 - 232)];
    int O38n2hy4pW6w [(818 - 618)];
    int fI1D5aY48J;
    char emT485uSo [(976 - 776)];
    int t;
    scanf ("%d", &CJqSZbdE);
    scanf ("%s", xPznRSHw);
    fGxMR6mWoCzH = strlen (xPznRSHw);
    {
        MfeikmszAq = (1487 - 558) - (1380 - 451);
        for (; fGxMR6mWoCzH > MfeikmszAq;) {
            if ('0' <= xPznRSHw[MfeikmszAq] && '9' >= xPznRSHw[MfeikmszAq])
                t = xPznRSHw[MfeikmszAq] - '0';
            else {
                if ('a' <= xPznRSHw[MfeikmszAq] && xPznRSHw[MfeikmszAq] <= 'z')
                    t = xPznRSHw[MfeikmszAq] - 'a' + (998 - 988);
                else {
                    if (xPznRSHw[MfeikmszAq] >= 'A' && 'Z' >= xPznRSHw[MfeikmszAq])
                        t = xPznRSHw[MfeikmszAq] - 'A' + (375 - 365);
                }
            }
            MfeikmszAq = MfeikmszAq +(480 - 479);
            o6Mb9RTiOC[fGxMR6mWoCzH - MfeikmszAq -(161 - 160)] = t;
        }
    }
    SnsdcyK = WtIpVNCM7QTz (o6Mb9RTiOC, CJqSZbdE, fGxMR6mWoCzH);
    if (SnsdcyK == (823 - 823))
        printf ("%d", SnsdcyK);
    scanf ("%d", &BSNXv9b);
    {
        MfeikmszAq = (1416 - 654) - 762;
        for (; SnsdcyK != (749 - 749);) {
            O38n2hy4pW6w[MfeikmszAq] = SnsdcyK % BSNXv9b;
            MfeikmszAq = MfeikmszAq +(455 - 454);
            SnsdcyK = SnsdcyK / BSNXv9b;
        }
    }
    for (fI1D5aY48J = (677 - 677); fI1D5aY48J < MfeikmszAq; fI1D5aY48J = fI1D5aY48J + (97 - 96)) {
        if (O38n2hy4pW6w[fI1D5aY48J] < (392 - 382))
            emT485uSo[MfeikmszAq -(265 - 264) - fI1D5aY48J] = O38n2hy4pW6w[fI1D5aY48J] + '0';
        else {
            if (O38n2hy4pW6w[fI1D5aY48J] > (800 - 791))
                emT485uSo[MfeikmszAq -(593 - 592) - fI1D5aY48J] = O38n2hy4pW6w[fI1D5aY48J] - (505 - 495) + 'A';
        }
    }
    {
        fI1D5aY48J = (248 - 248);
        while (fI1D5aY48J < MfeikmszAq) {
            printf ("%c", emT485uSo[fI1D5aY48J]);
            fI1D5aY48J = fI1D5aY48J + (976 - 975);
        }
    }
}

long  int WtIpVNCM7QTz (int o6Mb9RTiOC [], int CJqSZbdE, int fGxMR6mWoCzH) {
    int fI1D5aY48J;
    int MfeikmszAq;
    long  int SnsdcyK = (200 - 200), Dlgrcs6Xzyp;
    {
        MfeikmszAq = (868 - 868);
        while (MfeikmszAq < fGxMR6mWoCzH) {
            Dlgrcs6Xzyp = 1;
            {
                fI1D5aY48J = 0;
                for (; fI1D5aY48J < MfeikmszAq;) {
                    Dlgrcs6Xzyp = Dlgrcs6Xzyp *CJqSZbdE;
                    fI1D5aY48J = fI1D5aY48J + 1;
                }
            }
            SnsdcyK = SnsdcyK +Dlgrcs6Xzyp*o6Mb9RTiOC[MfeikmszAq];
            MfeikmszAq++;
        }
    }
    return (SnsdcyK);
}

