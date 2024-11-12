void  main () {
    int oFiPCZHoml;
    int i;
    int qrRyAKMC2keN [512];
    int JAcm3SnYOjt;
    scanf ("%d", &JAcm3SnYOjt);
    scanf ("%d", &qrRyAKMC2keN[0]);
    printf ("%d", qrRyAKMC2keN[0]);
    {
        i = 1;
        for (; JAcm3SnYOjt > i;) {
            scanf ("%d", &qrRyAKMC2keN[i]);
            for (oFiPCZHoml = 0; i > oFiPCZHoml; oFiPCZHoml = oFiPCZHoml + 1) {
                if (!(qrRyAKMC2keN[oFiPCZHoml] != qrRyAKMC2keN[i])) {
                    oFiPCZHoml = oFiPCZHoml + 1;
                    break;
                }
            }
            if (qrRyAKMC2keN[i] != qrRyAKMC2keN[oFiPCZHoml - 1])
                printf (",%d", qrRyAKMC2keN[i]);
            i = i + 1;
        }
    }
}

