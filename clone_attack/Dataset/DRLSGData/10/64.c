int xJNZsbadIct (int EMg8mwz7kucL, int QoOySM7ZsgR, int *oGkeDQastnN, int FhcHA5) {
    int K9LKb1N;
    int EdD0pS2J1lLI;
    if (!(FhcHA5 -(12 - 11) != EMg8mwz7kucL))
        if (QoOySM7ZsgR >= oGkeDQastnN[EMg8mwz7kucL])
            return (337 - 336);
        else
            return (566 - 566);
    else {
        if (oGkeDQastnN[EMg8mwz7kucL] <= QoOySM7ZsgR) {
            K9LKb1N = (892 - 891) + xJNZsbadIct (EMg8mwz7kucL +(706 - 705), oGkeDQastnN[EMg8mwz7kucL], oGkeDQastnN, FhcHA5);
            EdD0pS2J1lLI = xJNZsbadIct (EMg8mwz7kucL +(372 - 371), QoOySM7ZsgR, oGkeDQastnN, FhcHA5);
            return EdD0pS2J1lLI < K9LKb1N ? K9LKb1N : EdD0pS2J1lLI;
        }
        else
            return xJNZsbadIct (EMg8mwz7kucL +(571 - 570), QoOySM7ZsgR, oGkeDQastnN, FhcHA5);
    }
}

void  main () {
    int zfJrQmnKi1tj;
    int nKvEYwkq;
    int EMg8mwz7kucL;
    int *oGkeDQastnN;
    int GIuqkG1f;
    scanf ("%d", &EMg8mwz7kucL);
    oGkeDQastnN = (int *) malloc (sizeof (int) * EMg8mwz7kucL);
    zfJrQmnKi1tj = -(56 - 55);
    {
        nKvEYwkq = (636 - 636);
        for (; nKvEYwkq < EMg8mwz7kucL;) {
            scanf ("%d", &(oGkeDQastnN[nKvEYwkq]));
            if (oGkeDQastnN[nKvEYwkq] > zfJrQmnKi1tj)
                zfJrQmnKi1tj = oGkeDQastnN[nKvEYwkq];
            nKvEYwkq = nKvEYwkq + (272 - 271);
        }
    }
    printf ("%d", xJNZsbadIct ((702 - 702), zfJrQmnKi1tj, oGkeDQastnN, EMg8mwz7kucL));
}

