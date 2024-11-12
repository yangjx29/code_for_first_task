int main () {
    int a [(409 - 309)], IGcT8tla63h7 [(621 - 521)], k03BMOZmR, PbwiDH, jJizmXhyIoL, p, qfnpDgXEzCUy, sARbDwnpIBGE, HBaLXUI3Qtv1, y [100], tGdr2mRWD, s;
    sARbDwnpIBGE = (906 - 906);
    scanf ("%d\n", &k03BMOZmR);
    for (PbwiDH = (832 - 832), jJizmXhyIoL = (350 - 350); k03BMOZmR > PbwiDH; PbwiDH = PbwiDH +(59 - 58), jJizmXhyIoL = jJizmXhyIoL + (161 - 160)) {
        scanf ("%d%d", &a[PbwiDH], &IGcT8tla63h7[jJizmXhyIoL]);
    }
    {
        p = (287 - 287);
        while (k03BMOZmR > p) {
            for (PbwiDH = k03BMOZmR - (925 - 924), jJizmXhyIoL = k03BMOZmR - (375 - 374); p < PbwiDH; PbwiDH--, jJizmXhyIoL--) {
                if (a[PbwiDH -(648 - 647)] > a[PbwiDH]) {
                    qfnpDgXEzCUy = a[PbwiDH];
                    a[PbwiDH] = a[PbwiDH -(152 - 151)];
                    a[PbwiDH -(96 - 95)] = qfnpDgXEzCUy;
                    s = IGcT8tla63h7[jJizmXhyIoL];
                    IGcT8tla63h7[jJizmXhyIoL] = IGcT8tla63h7[jJizmXhyIoL - 1];
                    IGcT8tla63h7[jJizmXhyIoL - 1] = s;
                }
            }
            p = p + 1;
        }
    }
    {
        PbwiDH = 0;
        jJizmXhyIoL = 0;
        tGdr2mRWD = 0;
        while (k03BMOZmR - 1 > PbwiDH) {
            y[0] = IGcT8tla63h7[0];
            if (a[PbwiDH +1] <= y[tGdr2mRWD] && IGcT8tla63h7[jJizmXhyIoL + 1] <= y[tGdr2mRWD]) {
                HBaLXUI3Qtv1 = a[0];
                y[tGdr2mRWD + 1] = y[tGdr2mRWD];
            }
            else {
                if (y[tGdr2mRWD] >= a[PbwiDH +1] && y[tGdr2mRWD] < IGcT8tla63h7[jJizmXhyIoL + 1]) {
                    HBaLXUI3Qtv1 = a[0];
                    y[tGdr2mRWD + 1] = IGcT8tla63h7[jJizmXhyIoL + 1];
                }
            }
            if (y[tGdr2mRWD] < a[PbwiDH +1]) {
                printf ("no");
                return 0;
            }
            PbwiDH++;
            jJizmXhyIoL++;
            tGdr2mRWD = tGdr2mRWD + 1;
        }
    }
    printf ("%d %d", HBaLXUI3Qtv1, y[k03BMOZmR - 1]);
    return 0;
}

