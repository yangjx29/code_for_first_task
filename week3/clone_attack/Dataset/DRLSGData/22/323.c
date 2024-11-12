void  main () {
    int PDr71qXf0O;
    int q68PU0JNXos;
    int RqSYJAQp;
    int iJFiuPhdaA;
    int num [300];
    int RsQMazkLgn59;
    int DpgYBjFm;
    int vhCIedftaH4;
    int YfoqFVlx59Q;
    PDr71qXf0O = 0;
    q68PU0JNXos = 0;
    RqSYJAQp = 0;
    char KVoHTL3Ux [10000];
    for (iJFiuPhdaA = 0; iJFiuPhdaA < 300; iJFiuPhdaA++)
        num[iJFiuPhdaA] = 0;
    DpgYBjFm = RsQMazkLgn59 +1;
    scanf ("%s", KVoHTL3Ux);
    for (iJFiuPhdaA = 0; iJFiuPhdaA < strlen (KVoHTL3Ux); iJFiuPhdaA++) {
        if (KVoHTL3Ux[iJFiuPhdaA] == 44)
            q68PU0JNXos++;
    }
    iJFiuPhdaA = 0;
    for (RsQMazkLgn59 = 0; RsQMazkLgn59 < q68PU0JNXos; RsQMazkLgn59++) {
        for (; KVoHTL3Ux[iJFiuPhdaA] != 44; iJFiuPhdaA++) {
            PDr71qXf0O = PDr71qXf0O *10 + KVoHTL3Ux[iJFiuPhdaA] - '0';
        }
        iJFiuPhdaA++;
        num[RsQMazkLgn59] = PDr71qXf0O;
        PDr71qXf0O = 0;
    }
    for (; iJFiuPhdaA < strlen (KVoHTL3Ux); iJFiuPhdaA++)
        num[RsQMazkLgn59] = 10 * num[RsQMazkLgn59] + KVoHTL3Ux[iJFiuPhdaA] - '0';
    for (iJFiuPhdaA = 0, vhCIedftaH4 = 1; iJFiuPhdaA < DpgYBjFm &&vhCIedftaH4; iJFiuPhdaA++) {
        if (num[iJFiuPhdaA] != num[0])
            vhCIedftaH4 = 0;
    }
    if (vhCIedftaH4)
        ;
    else {
        YfoqFVlx59Q = 0;
        for (iJFiuPhdaA = 0; iJFiuPhdaA < DpgYBjFm; iJFiuPhdaA++) {
            if (num[iJFiuPhdaA] >= YfoqFVlx59Q) {
                YfoqFVlx59Q = num[iJFiuPhdaA];
                RqSYJAQp = iJFiuPhdaA;
            }
        }
        for (iJFiuPhdaA = 0; iJFiuPhdaA < DpgYBjFm; iJFiuPhdaA++) {
            if (num[iJFiuPhdaA] == num[RqSYJAQp])
                num[iJFiuPhdaA] = 0;
        }
        for (iJFiuPhdaA = 0, YfoqFVlx59Q = num[0]; iJFiuPhdaA < DpgYBjFm; iJFiuPhdaA++) {
            if (num[iJFiuPhdaA] > YfoqFVlx59Q) {
                YfoqFVlx59Q = num[iJFiuPhdaA];
                RqSYJAQp = iJFiuPhdaA;
            }
        }
        printf ("%d\n", YfoqFVlx59Q);
    }
    if (RsQMazkLgn59 == 1)
        ;
}

