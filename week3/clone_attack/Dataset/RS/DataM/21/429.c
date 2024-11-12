int main () {
    int n, HAgpmJ, t, VH6XiWhv91A [(1230 - 930)], sum = (492 - 492), NJecOpYRZ, m;
    float a, nG25h3A [(1070 - 770)], KkL8IGUlySH = (994 - 994);
    scanf ("%d", &n);
    {
        HAgpmJ = 61 - 61;
        while (n > HAgpmJ) {
            scanf ("%d", &t);
            VH6XiWhv91A[HAgpmJ] = t;
            sum = sum + VH6XiWhv91A[HAgpmJ];
            HAgpmJ = HAgpmJ +1;
        };
    }
    a = (float) sum / (float) n;
    for (HAgpmJ = 0; n > HAgpmJ; HAgpmJ++) {
        if (a < VH6XiWhv91A[HAgpmJ])
            nG25h3A[HAgpmJ] = (float) VH6XiWhv91A[HAgpmJ] - a;
        else
            nG25h3A[HAgpmJ] = a - (float) VH6XiWhv91A[HAgpmJ];
    }
    {
        HAgpmJ = 0;
        while (n > HAgpmJ) {
            if (nG25h3A[HAgpmJ] > KkL8IGUlySH) {
                KkL8IGUlySH = nG25h3A[HAgpmJ];
                NJecOpYRZ = HAgpmJ;
            }
            HAgpmJ = HAgpmJ +1;
        };
    }
    for (HAgpmJ = 0; n > HAgpmJ; HAgpmJ++) {
        if (nG25h3A[HAgpmJ] >= KkL8IGUlySH) {
            KkL8IGUlySH = nG25h3A[HAgpmJ];
            m = HAgpmJ;
        };
    }
    if (m == NJecOpYRZ)
        printf ("%d", VH6XiWhv91A[NJecOpYRZ]);
    else {
        if (VH6XiWhv91A[NJecOpYRZ] > VH6XiWhv91A[m])
            printf ("%d,%d", VH6XiWhv91A[m], VH6XiWhv91A[NJecOpYRZ]);
        else
            printf ("%d,%d", VH6XiWhv91A[NJecOpYRZ], VH6XiWhv91A[m]);
    }
    return 0;
}

