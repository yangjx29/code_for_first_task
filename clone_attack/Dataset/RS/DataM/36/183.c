int than (char a [], char b []) {
    int Dohm20ajC;
    int len;
    int emgC07;
    int nNm2wFzxDV;
    int gBUEKF;
    int ZkUd01YJp76X;
    Dohm20ajC = 1;
    len = strlen (a);
    for (emgC07 = 0; len - 1 >= emgC07; emgC07++) {
        nNm2wFzxDV = 0;
        gBUEKF = 0;
        for (ZkUd01YJp76X = 0; len - 1 >= ZkUd01YJp76X; ZkUd01YJp76X++) {
            if (!(a[emgC07] != a[ZkUd01YJp76X]))
                nNm2wFzxDV = nNm2wFzxDV + 1;
            if (b[ZkUd01YJp76X] == a[emgC07])
                gBUEKF = gBUEKF + 1;
        }
        if (nNm2wFzxDV != gBUEKF)
            Dohm20ajC = 0;
    }
    return Dohm20ajC;
}

void  main () {
    int Dohm20ajC;
    int MCNPeG;
    int iXbBnsc2u;
    char a [100], b [100];
    scanf ("%s%s", a, b);
    Dohm20ajC = strlen (a);
    MCNPeG = strlen (b);
    if (Dohm20ajC != MCNPeG)
        printf ("NO\n");
    else {
        iXbBnsc2u = than (a, b);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (iXbBnsc2u)
            printf ("YES\n");
        else
            printf ("NO\n");
    };
}

