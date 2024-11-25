int ksholNW5L (const  void  *F9JqMlrA2, const  void  *PpH25Wa) {
    return *((int *) F9JqMlrA2) - *((int *) PpH25Wa);
}

main () {
    for (; 1;) {
        int tian [1000];
        int X0O2nfAJh3o [1000];
        int b39lBVwyF;
        int KIVaHTyeE7D;
        int sd7Rsxc8r;
        int ifSnAFPvV;
        int k9TUoCcQ3nM;
        int OhvdXif31P8L;
        b39lBVwyF = 0;
        KIVaHTyeE7D = 0;
        scanf ("%d", &sd7Rsxc8r);
        if (!(0 != sd7Rsxc8r))
            break;
        for (ifSnAFPvV = 0; sd7Rsxc8r > ifSnAFPvV; ifSnAFPvV++) {
            scanf ("%d", &tian[ifSnAFPvV]);
        }
        {
            ifSnAFPvV = 0;
            while (ifSnAFPvV < sd7Rsxc8r) {
                scanf ("%d", &X0O2nfAJh3o[ifSnAFPvV]);
                ifSnAFPvV = ifSnAFPvV + 1;
            };
        }
        k9TUoCcQ3nM = sd7Rsxc8r - 1;
        OhvdXif31P8L = sd7Rsxc8r - 1;
        qsort (tian, sd7Rsxc8r, sizeof (int), ksholNW5L);
        qsort (X0O2nfAJh3o, sd7Rsxc8r, sizeof (int), ksholNW5L);
        for (ifSnAFPvV = 0; OhvdXif31P8L >= ifSnAFPvV;) {
            if (tian[ifSnAFPvV] > X0O2nfAJh3o[b39lBVwyF]) {
                ifSnAFPvV = ifSnAFPvV + 1;
                KIVaHTyeE7D = KIVaHTyeE7D +200;
                b39lBVwyF++;
                continue;
            }
            if (X0O2nfAJh3o[b39lBVwyF] > tian[ifSnAFPvV]) {
                k9TUoCcQ3nM = k9TUoCcQ3nM - 1;
                KIVaHTyeE7D = KIVaHTyeE7D -200;
                ifSnAFPvV++;
                continue;
            }
            if (tian[ifSnAFPvV] == X0O2nfAJh3o[b39lBVwyF]) {
                if (tian[OhvdXif31P8L] > X0O2nfAJh3o[k9TUoCcQ3nM]) {
                    k9TUoCcQ3nM = k9TUoCcQ3nM - 1;
                    KIVaHTyeE7D = KIVaHTyeE7D +200;
                    OhvdXif31P8L--;
                    continue;
                }
                else if (tian[ifSnAFPvV] == X0O2nfAJh3o[k9TUoCcQ3nM]) {
                    k9TUoCcQ3nM--;
                    ifSnAFPvV++;
                    continue;
                }
                else {
                    KIVaHTyeE7D = KIVaHTyeE7D -200;
                    k9TUoCcQ3nM--;
                    ifSnAFPvV++;
                    continue;
                };
            };
        }
        printf ("%d\n", KIVaHTyeE7D);
    };
}

