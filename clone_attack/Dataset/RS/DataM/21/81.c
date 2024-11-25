void  main () {
    int zwICglO;
    int ZfjzdksKlX6w;
    int f72cim0n;
    int tq7wB4xorA;
    int OcNjFG;
    int P1agPQAj;
    int zKaXdsxgwu;
    int kQdUk2q;
    int a [(504 - 204)];
    int nwc8ni [300];
    zwICglO = (804 - 804);
    scanf ("%d", &ZfjzdksKlX6w);
    for (f72cim0n = (74 - 74); ZfjzdksKlX6w > f72cim0n; f72cim0n = f72cim0n + 1)
        scanf ("%d", &a[f72cim0n]);
    {
        f72cim0n = 145 - 145;
        while (ZfjzdksKlX6w > f72cim0n) {
            zwICglO = zwICglO + a[f72cim0n];
            f72cim0n = f72cim0n + 1;
        };
    }
    if (zwICglO < (a[(307 - 307)] * ZfjzdksKlX6w))
        zKaXdsxgwu = a[0] * ZfjzdksKlX6w -zwICglO;
    else {
        if ((a[0] * ZfjzdksKlX6w) < zwICglO)
            zKaXdsxgwu = zwICglO - a[0] * ZfjzdksKlX6w;
    }
    for (f72cim0n = (368 - 367); f72cim0n < ZfjzdksKlX6w; f72cim0n = f72cim0n + 1) {
        if ((zwICglO < (a[f72cim0n] * ZfjzdksKlX6w)) && (((a [f72cim0n] * ZfjzdksKlX6w) -zwICglO) > zKaXdsxgwu))
            zKaXdsxgwu = a[f72cim0n] * ZfjzdksKlX6w -zwICglO;
        else {
            if (((a[f72cim0n] * ZfjzdksKlX6w) < zwICglO) && ((zwICglO - (a[f72cim0n] * ZfjzdksKlX6w)) > zKaXdsxgwu))
                zKaXdsxgwu = zwICglO - a[f72cim0n] * ZfjzdksKlX6w;
        };
    }
    tq7wB4xorA = 0;
    for (f72cim0n = 0; f72cim0n < ZfjzdksKlX6w; f72cim0n = f72cim0n + 1)
        if (((a[f72cim0n] * ZfjzdksKlX6w -zwICglO) == zKaXdsxgwu) || ((zwICglO - (a[f72cim0n] * ZfjzdksKlX6w)) == zKaXdsxgwu)) {
            nwc8ni[tq7wB4xorA] = a[f72cim0n];
            tq7wB4xorA = tq7wB4xorA + 1;
        }
    OcNjFG = tq7wB4xorA;
    {
        tq7wB4xorA = 0;
        while (tq7wB4xorA < OcNjFG) {
            f72cim0n = tq7wB4xorA;
            for (P1agPQAj = tq7wB4xorA + 1; P1agPQAj <= OcNjFG; P1agPQAj = P1agPQAj +1)
                if (nwc8ni[f72cim0n] > nwc8ni[P1agPQAj])
                    f72cim0n = P1agPQAj;
            if (f72cim0n != tq7wB4xorA) {
                kQdUk2q = nwc8ni[f72cim0n];
                nwc8ni[f72cim0n] = nwc8ni[tq7wB4xorA];
                nwc8ni[tq7wB4xorA] = kQdUk2q;
            }
            tq7wB4xorA = tq7wB4xorA + 1;
        };
    }
    for (tq7wB4xorA = 1; tq7wB4xorA < OcNjFG; tq7wB4xorA = tq7wB4xorA + 1)
        printf ("%d,", nwc8ni[tq7wB4xorA]);
    printf ("%d", nwc8ni[OcNjFG]);
}

