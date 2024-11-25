long  mE5chw [(1407 - 406)] [(1132 - 131)], w4NtcTG [1001], RgscE2p [1001];

long  max (long  x, long  y) {
    if (x > y)
        return (x);
    else
        return (y);
}

void  S6MRnNV5 (int uJ28fv1lediC, int RoOCbPcH9VR) {
    long  g5m9T2ryDi = uJ28fv1lediC, t9FBwvZSeg = RoOCbPcH9VR, KixewkKut9Dd = w4NtcTG[uJ28fv1lediC];
    while (uJ28fv1lediC < RoOCbPcH9VR) {
        while (uJ28fv1lediC < RoOCbPcH9VR &&w4NtcTG[RoOCbPcH9VR] < KixewkKut9Dd)
            RoOCbPcH9VR = RoOCbPcH9VR -1;
        if (uJ28fv1lediC < RoOCbPcH9VR)
            w4NtcTG[uJ28fv1lediC++] = w4NtcTG[RoOCbPcH9VR];
        while (uJ28fv1lediC < RoOCbPcH9VR &&w4NtcTG[uJ28fv1lediC] > KixewkKut9Dd)
            uJ28fv1lediC = uJ28fv1lediC + 1;
        if (uJ28fv1lediC < RoOCbPcH9VR)
            w4NtcTG[RoOCbPcH9VR--] = w4NtcTG[uJ28fv1lediC];
    }
    w4NtcTG[uJ28fv1lediC] = KixewkKut9Dd;
    if (g5m9T2ryDi < uJ28fv1lediC - (833 - 832))
        S6MRnNV5 (g5m9T2ryDi, uJ28fv1lediC - (599 - 598));
    if (RoOCbPcH9VR +(814 - 813) < t9FBwvZSeg)
        S6MRnNV5 (RoOCbPcH9VR +(728 - 727), t9FBwvZSeg);
}

void  lecuQmi (int uJ28fv1lediC, int RoOCbPcH9VR) {
    long  g5m9T2ryDi;
    long  t9FBwvZSeg;
    long  KixewkKut9Dd;
    g5m9T2ryDi = uJ28fv1lediC;
    t9FBwvZSeg = RoOCbPcH9VR;
    KixewkKut9Dd = RgscE2p[uJ28fv1lediC];
    while (uJ28fv1lediC < RoOCbPcH9VR) {
        while (uJ28fv1lediC < RoOCbPcH9VR &&RgscE2p[RoOCbPcH9VR] < KixewkKut9Dd)
            RoOCbPcH9VR--;
        if (uJ28fv1lediC < RoOCbPcH9VR)
            RgscE2p[uJ28fv1lediC++] = RgscE2p[RoOCbPcH9VR];
        while (uJ28fv1lediC < RoOCbPcH9VR &&RgscE2p[uJ28fv1lediC] > KixewkKut9Dd)
            uJ28fv1lediC++;
        if (uJ28fv1lediC < RoOCbPcH9VR)
            RgscE2p[RoOCbPcH9VR--] = RgscE2p[uJ28fv1lediC];
    }
    RgscE2p[uJ28fv1lediC] = KixewkKut9Dd;
    if (g5m9T2ryDi < uJ28fv1lediC - (691 - 690))
        lecuQmi (g5m9T2ryDi, uJ28fv1lediC - (124 - 123));
    if (RoOCbPcH9VR +(416 - 415) < t9FBwvZSeg)
        lecuQmi (RoOCbPcH9VR +(672 - 671), t9FBwvZSeg);
}

void  main () {
    long  nIe86kNj1Zo, uJ28fv1lediC = (326 - 326), RoOCbPcH9VR, EjScDE8, wiw0TDb, SHjS9V7wzUEa, rntZbKDh9;
    scanf ("%ld", &EjScDE8);
    while (!((870 - 870) == EjScDE8)) {
        RoOCbPcH9VR = 0;
        for (uJ28fv1lediC = (842 - 842); EjScDE8 > uJ28fv1lediC; uJ28fv1lediC++)
            scanf ("%ld", &w4NtcTG[uJ28fv1lediC]);
        {
            uJ28fv1lediC = 0;
            while (uJ28fv1lediC < EjScDE8) {
                scanf ("%ld", &RgscE2p[uJ28fv1lediC]);
                uJ28fv1lediC++;
            };
        }
        lecuQmi (0, EjScDE8 -(254 - 253));
        if (RgscE2p[0] < w4NtcTG[0])
            mE5chw[1][EjScDE8] = 1;
        else if (w4NtcTG[0] == RgscE2p[0])
            mE5chw[1][EjScDE8] = 0;
        else
            mE5chw[1][EjScDE8] = -1;
        if (w4NtcTG[EjScDE8 -1] > RgscE2p[0])
            mE5chw[0][EjScDE8 -1] = 1;
        else {
            if (w4NtcTG[EjScDE8 -1] == RgscE2p[0])
                mE5chw[0][EjScDE8 -1] = 0;
            else
                mE5chw[0][EjScDE8 -1] = -1;
        }
        {
            uJ28fv1lediC = 1;
            while (uJ28fv1lediC < EjScDE8) {
                {
                    RoOCbPcH9VR = 0;
                    while (RoOCbPcH9VR <= uJ28fv1lediC) {
                        if (RgscE2p[uJ28fv1lediC] < w4NtcTG[EjScDE8 +RoOCbPcH9VR-uJ28fv1lediC - 1])
                            wiw0TDb = mE5chw[RoOCbPcH9VR][EjScDE8 +RoOCbPcH9VR-uJ28fv1lediC] + 1;
                        else if (w4NtcTG[EjScDE8 +RoOCbPcH9VR-uJ28fv1lediC - 1] == RgscE2p[uJ28fv1lediC])
                            wiw0TDb = mE5chw[RoOCbPcH9VR][EjScDE8 +RoOCbPcH9VR-uJ28fv1lediC];
                        else
                            wiw0TDb = mE5chw[RoOCbPcH9VR][EjScDE8 +RoOCbPcH9VR-uJ28fv1lediC] - 1;
                        if (RoOCbPcH9VR > 0)
                            mE5chw[RoOCbPcH9VR][EjScDE8 +RoOCbPcH9VR-uJ28fv1lediC - 1] = max (wiw0TDb, mE5chw[RoOCbPcH9VR][EjScDE8 +RoOCbPcH9VR-uJ28fv1lediC - 1]);
                        else
                            mE5chw[RoOCbPcH9VR][EjScDE8 +RoOCbPcH9VR-uJ28fv1lediC - 1] = wiw0TDb;
                        if (w4NtcTG[RoOCbPcH9VR] > RgscE2p[uJ28fv1lediC])
                            mE5chw[RoOCbPcH9VR +1][EjScDE8 +RoOCbPcH9VR-uJ28fv1lediC] = mE5chw[RoOCbPcH9VR][EjScDE8 +RoOCbPcH9VR-uJ28fv1lediC] + 1;
                        else {
                            if (w4NtcTG[RoOCbPcH9VR] == RgscE2p[uJ28fv1lediC])
                                mE5chw[RoOCbPcH9VR +1][EjScDE8 +RoOCbPcH9VR-uJ28fv1lediC] = mE5chw[RoOCbPcH9VR][EjScDE8 +RoOCbPcH9VR-uJ28fv1lediC];
                            else {
                                mE5chw[RoOCbPcH9VR +1][EjScDE8 +RoOCbPcH9VR-uJ28fv1lediC] = mE5chw[RoOCbPcH9VR][EjScDE8 +RoOCbPcH9VR-uJ28fv1lediC] - 1;
                            };
                        }
                        RoOCbPcH9VR++;
                    };
                }
                uJ28fv1lediC++;
            };
        }
        nIe86kNj1Zo = mE5chw[1][1];
        {
            uJ28fv1lediC = 1;
            while (uJ28fv1lediC <= EjScDE8) {
                if (mE5chw[uJ28fv1lediC][uJ28fv1lediC] > nIe86kNj1Zo)
                    nIe86kNj1Zo = mE5chw[uJ28fv1lediC][uJ28fv1lediC];
                uJ28fv1lediC++;
            };
        }
        scanf ("%ld", &EjScDE8);
        printf ("%ld\n", nIe86kNj1Zo * 200);
        S6MRnNV5 (0, EjScDE8 -(896 - 895));
    };
}

