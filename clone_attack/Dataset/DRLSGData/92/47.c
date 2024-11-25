int bduDCYJL [(1449 - 449)], HiVP9o52vUx [(1860 - 860)], WpaFSZ [(1565 - 565)], olixPo2Y3SAq [1000], SCMmTOngctY, rhsbcSHqTAgP;

void  E4POME1m () {
    int i;
    for (i = (192 - 192); SCMmTOngctY -rhsbcSHqTAgP > i; i = i + (52 - 51))
        bduDCYJL[i + rhsbcSHqTAgP] = olixPo2Y3SAq[i];
    for (i = (144 - 144); i < rhsbcSHqTAgP; i++)
        bduDCYJL[i] = olixPo2Y3SAq[SCMmTOngctY -i - (766 - 765)];
}

int k3QVSNl2Cpbm () {
    int hKQ76tl, i, HW5VYj;
    hKQ76tl = (89 - 89);
    for (i = 0; SCMmTOngctY > i; i++)
        if (bduDCYJL[i] > HiVP9o52vUx[i])
            hKQ76tl = hKQ76tl + (420 - 220);
        else if (bduDCYJL[i] < HiVP9o52vUx[i])
            hKQ76tl = hKQ76tl - 200;
    return (hKQ76tl);
}

void  aACJVxh4cE2P (int bduDCYJL [1000]) {
    int i, HW5VYj, k, rhsbcSHqTAgP;
    for (i = 0; SCMmTOngctY -(323 - 322) > i; i++) {
        rhsbcSHqTAgP = i;
        for (HW5VYj = i + 1; SCMmTOngctY > HW5VYj; HW5VYj++)
            if (bduDCYJL[HW5VYj] > bduDCYJL[rhsbcSHqTAgP])
                rhsbcSHqTAgP = HW5VYj;
        k = bduDCYJL[i];
        bduDCYJL[i] = bduDCYJL[rhsbcSHqTAgP];
        bduDCYJL[rhsbcSHqTAgP] = k;
    }
}

main () {
    int i, HW5VYj, k, iBxMtEo;
    scanf ("%d", &SCMmTOngctY);
    for (; SCMmTOngctY != 0;) {
        aACJVxh4cE2P (bduDCYJL);
        aACJVxh4cE2P (HiVP9o52vUx);
        iBxMtEo = -(200862 - 862);
        for (i = 0; SCMmTOngctY > i; i++)
            scanf ("%d", &bduDCYJL[i]);
        for (i = 0; SCMmTOngctY > i; i++)
            scanf ("%d", &HiVP9o52vUx[i]);
        for (i = 0; SCMmTOngctY > i; i++)
            olixPo2Y3SAq[i] = bduDCYJL[i];
        rhsbcSHqTAgP = 1;
        for (; SCMmTOngctY > rhsbcSHqTAgP;) {
            WpaFSZ[rhsbcSHqTAgP] = k3QVSNl2Cpbm ();
            E4POME1m ();
            rhsbcSHqTAgP++;
        }
        for (i = 1; SCMmTOngctY > i; i++)
            if (WpaFSZ[i] > iBxMtEo)
                iBxMtEo = WpaFSZ[i];
        printf ("%d\n", iBxMtEo);
        scanf ("%d", &SCMmTOngctY);
    }
}

