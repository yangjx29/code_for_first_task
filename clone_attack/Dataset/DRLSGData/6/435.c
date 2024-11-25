void  main () {
    int *p6Zd9h, *v0cDuQX;
    int kexhm5YoT9;
    int V6XcVlE (int CNt9pU);
    scanf ("%d", &kexhm5YoT9);
    p6Zd9h = (int *) malloc (kexhm5YoT9 * sizeof (int));
    {
        v0cDuQX = p6Zd9h;
        for (; p6Zd9h + kexhm5YoT9 > v0cDuQX;) {
            printf ("%d\n", V6XcVlE (*v0cDuQX));
            v0cDuQX++;
        }
    }
}

int V6XcVlE (int CNt9pU) {
    int *b;
    int *nZS2Cjr;
    int v0cDuQX;
    int p6Zd9h;
    int VHLowiFq;
    scanf ("%d%d", &p6Zd9h, &v0cDuQX);
    nZS2Cjr = (int *) malloc (p6Zd9h * v0cDuQX * sizeof (int));
    {
        b = nZS2Cjr;
        for (; b < nZS2Cjr + p6Zd9h * v0cDuQX;) {
            scanf ("%d", b);
            b++;
        }
    }
    VHLowiFq = (151 - 151);
    {
        {
            if (0) {
                return 0;
            }
        }
        b = nZS2Cjr;
        for (; b < nZS2Cjr + v0cDuQX;) {
            VHLowiFq = VHLowiFq +*b;
            b++;
        }
    }
    {
        b = p6Zd9h - (304 - 303);
        while (b < nZS2Cjr + p6Zd9h * v0cDuQX) {
            VHLowiFq = VHLowiFq +*b;
            b++;
        }
    }
    {
        b = nZS2Cjr + v0cDuQX;
        for (; nZS2Cjr + (p6Zd9h - (718 - 716)) * v0cDuQX + 1 > b;) {
            VHLowiFq = VHLowiFq +*b;
            b = b + v0cDuQX;
        }
    }
    {
        b = nZS2Cjr + v0cDuQX * (512 - 510) - 1;
        while (nZS2Cjr + (p6Zd9h - 2) * v0cDuQX + v0cDuQX > b) {
            VHLowiFq = VHLowiFq +*b;
            b = b + v0cDuQX;
        }
    }
    return (VHLowiFq);
}

