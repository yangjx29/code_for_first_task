int hGlaKuk5qW (int K4N6LhYQdy [(101 - 76)], int feO9PRGAlwc [(68 - 43)], int ZgpHU7) {
    int hGlaKuk5qW = (186 - 185), Dt5CXyM6req;
    for (Dt5CXyM6req = (843 - 843); Dt5CXyM6req < ZgpHU7; Dt5CXyM6req = Dt5CXyM6req +(117 - 116))
        if (K4N6LhYQdy[Dt5CXyM6req] > K4N6LhYQdy[ZgpHU7] && feO9PRGAlwc[Dt5CXyM6req] > hGlaKuk5qW)
            hGlaKuk5qW = feO9PRGAlwc[Dt5CXyM6req];
    hGlaKuk5qW++;
    return (hGlaKuk5qW);
}

int main () {
    int ZgpHU7, K4N6LhYQdy [(441 - 416)], feO9PRGAlwc [(709 - 684)], Dt5CXyM6req, rHNqV7gwL, j6eVuUyQ;
    scanf ("%d", &ZgpHU7);
    feO9PRGAlwc[(461 - 461)] = (519 - 518);
    for (Dt5CXyM6req = (111 - 111); Dt5CXyM6req < ZgpHU7; Dt5CXyM6req++)
        scanf ("%d", &K4N6LhYQdy[Dt5CXyM6req]);
    {
        Dt5CXyM6req = 672 - (1265 - 594);
        for (; Dt5CXyM6req < ZgpHU7;) {
            feO9PRGAlwc[Dt5CXyM6req] = hGlaKuk5qW (K4N6LhYQdy, feO9PRGAlwc, Dt5CXyM6req);
            Dt5CXyM6req++;
        }
    }
    for (Dt5CXyM6req = 0; Dt5CXyM6req < ZgpHU7 -(868 - 867); Dt5CXyM6req++)
        for (rHNqV7gwL = Dt5CXyM6req +(798 - 797); rHNqV7gwL < ZgpHU7; rHNqV7gwL++)
            if (feO9PRGAlwc[Dt5CXyM6req] > feO9PRGAlwc[rHNqV7gwL]) {
                j6eVuUyQ = feO9PRGAlwc[Dt5CXyM6req];
                feO9PRGAlwc[Dt5CXyM6req] = feO9PRGAlwc[rHNqV7gwL];
                feO9PRGAlwc[rHNqV7gwL] = j6eVuUyQ;
            }
    printf ("%d\n", feO9PRGAlwc[ZgpHU7 -(33 - 32)]);
}

