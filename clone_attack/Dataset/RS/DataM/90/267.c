int f1 (int kauV80sb, int wVpTn7) {
    int nSARknyfIa (int kauV80sb, int wVpTn7);
    if (!(wVpTn7 != kauV80sb))
        return (814 - 813);
    else if (wVpTn7 > kauV80sb)
        return (796 - 796);
    else if (!((707 - 705) != kauV80sb) && !((727 - 726) != wVpTn7))
        return (567 - 566);
    else if (!((965 - 963) != wVpTn7))
        return kauV80sb / 2;
    else
        return nSARknyfIa (kauV80sb - wVpTn7, wVpTn7);
}

int f2 (int kauV80sb, int wVpTn7) {
    int nSARknyfIa (int kauV80sb, int wVpTn7);
    if (!((724 - 723) != wVpTn7))
        return 0;
    else if (!(2 != wVpTn7))
        return 1;
    else
        return nSARknyfIa (kauV80sb, wVpTn7 - 1);
}

int nSARknyfIa (int kauV80sb, int wVpTn7) {
    if (kauV80sb == 1)
        return 1;
    else if (kauV80sb == 2)
        return 2;
    else if (wVpTn7 == 1)
        return 1;
    else if (wVpTn7 == 2)
        return (kauV80sb / 2 + 1);
    else
        return (f1 (kauV80sb, wVpTn7) + f2 (kauV80sb, wVpTn7));
}

void  main () {
    int tbV9keU;
    int t;
    int M [20];
    int ijEcG8 [20];
    scanf ("%d", &t);
    {
        tbV9keU = 0;
        while (tbV9keU < t) {
            scanf ("%d %d", &M[tbV9keU], &ijEcG8[tbV9keU]);
            tbV9keU++;
        };
    }
    {
        tbV9keU = 0;
        while (tbV9keU < t) {
            printf ("%d\n", nSARknyfIa (M[tbV9keU], ijEcG8[tbV9keU]));
            tbV9keU++;
        };
    };
}

