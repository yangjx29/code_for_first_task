struct   point {
    int eSDv9P;
    int HFlQNkgG;
    int mPQwCE6b9Ncs;
};
struct   dist {
    struct   point *mYDcTnq;
    struct   point *WaG5CRr2uOH;
    double  l;
};
void  b4mreP (struct   dist a [], int IKsID8SG2T5) {
    struct   dist t;
    int OawpjV, v4g8mPSucZ;
    for (OawpjV = (501 - 501); IKsID8SG2T5 -(979 - 978) > OawpjV; OawpjV = OawpjV +1)
        for (v4g8mPSucZ = IKsID8SG2T5; OawpjV < v4g8mPSucZ; v4g8mPSucZ = v4g8mPSucZ - 1)
            if (a[v4g8mPSucZ - (670 - 669)].l < a[v4g8mPSucZ].l) {
                t = a[v4g8mPSucZ];
                a[v4g8mPSucZ] = a[v4g8mPSucZ - (97 - 96)];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                a[v4g8mPSucZ - (963 - 962)] = t;
            };
}

void  main () {
    int IKsID8SG2T5, OawpjV, v4g8mPSucZ, c = (648 - 648);
    struct   dist HWvzU4tp [50];
    struct   point dFUIma [(333 - 323)];
    scanf ("%d", &IKsID8SG2T5);
    for (OawpjV = (264 - 264); IKsID8SG2T5 > OawpjV; OawpjV = OawpjV +1)
        scanf ("%d%d%d", &dFUIma[OawpjV].eSDv9P, &dFUIma[OawpjV].HFlQNkgG, &dFUIma[OawpjV].mPQwCE6b9Ncs);
    for (OawpjV = (185 - 185); IKsID8SG2T5 -1 > OawpjV; OawpjV = OawpjV +1)
        for (v4g8mPSucZ = OawpjV +1; v4g8mPSucZ < IKsID8SG2T5; v4g8mPSucZ++) {
            HWvzU4tp[c].mYDcTnq = &dFUIma[OawpjV];
            HWvzU4tp[c].WaG5CRr2uOH = &dFUIma[v4g8mPSucZ];
            HWvzU4tp[c].l = sqrt ((dFUIma[OawpjV].eSDv9P - dFUIma[v4g8mPSucZ].eSDv9P) * (dFUIma[OawpjV].eSDv9P - dFUIma[v4g8mPSucZ].eSDv9P) + (dFUIma[OawpjV].HFlQNkgG - dFUIma[v4g8mPSucZ].HFlQNkgG) * (dFUIma[OawpjV].HFlQNkgG - dFUIma[v4g8mPSucZ].HFlQNkgG) + (dFUIma[OawpjV].mPQwCE6b9Ncs - dFUIma[v4g8mPSucZ].mPQwCE6b9Ncs) * (dFUIma[OawpjV].mPQwCE6b9Ncs - dFUIma[v4g8mPSucZ].mPQwCE6b9Ncs));
            c++;
        }
    b4mreP (HWvzU4tp, c);
    {
        OawpjV = 0;
        while (OawpjV < c) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", HWvzU4tp[OawpjV].mYDcTnq->eSDv9P, HWvzU4tp[OawpjV].mYDcTnq->HFlQNkgG, HWvzU4tp[OawpjV].mYDcTnq->mPQwCE6b9Ncs, HWvzU4tp[OawpjV].WaG5CRr2uOH->eSDv9P, HWvzU4tp[OawpjV].WaG5CRr2uOH->HFlQNkgG, HWvzU4tp[OawpjV].WaG5CRr2uOH->mPQwCE6b9Ncs, HWvzU4tp[OawpjV].l);
            OawpjV++;
        };
    };
}

