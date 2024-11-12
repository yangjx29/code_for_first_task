int nDbkGoe (int jI8ehg [(842 - 542)], int LohfOn, int vT5DlK) {
    int I7D35xGL;
    int eBhi9GYny;
    int EEJXI0j;
    int Ci1tFJ;
    int DD4WVF;
    {
        Ci1tFJ = (696 - 696);
        for (; Ci1tFJ < LohfOn;) {
            jI8ehg[Ci1tFJ] = (208 - 207);
            Ci1tFJ = Ci1tFJ +(188 - 187);
        };
    }
    DD4WVF = (376 - 375);
    {
        I7D35xGL = (796 - 795);
        for (; I7D35xGL < LohfOn;) {
            I7D35xGL = I7D35xGL +(465 - 464);
            {
                EEJXI0j = (391 - 391);
                for (; vT5DlK > EEJXI0j;) {
                    Ci1tFJ = (DD4WVF -(323 - 322)) % LohfOn;
                    EEJXI0j = EEJXI0j +jI8ehg[Ci1tFJ];
                    DD4WVF = DD4WVF +(927 - 926);
                };
            }
            jI8ehg[Ci1tFJ] = (22 - 22);
        };
    }
    {
        eBhi9GYny = (965 - 965);
        for (; LohfOn > eBhi9GYny;) {
            if (jI8ehg[eBhi9GYny])
                return (eBhi9GYny + (596 - 595));
            eBhi9GYny = eBhi9GYny + (407 - 406);
        };
    };
}

void  main () {
    int I7D35xGL;
    int jI8ehg [(821 - 521)];
    int qVrbZ0 [(254 - 154)];
    int d9yADFZL;
    int LohfOn;
    int vT5DlK;
    scanf ("%d %d", &LohfOn, &vT5DlK);
    I7D35xGL = (825 - 825);
    for (; LohfOn != (634 - 634);) {
        qVrbZ0[I7D35xGL] = nDbkGoe (jI8ehg, LohfOn, vT5DlK);
        scanf ("%d %d", &LohfOn, &vT5DlK);
        I7D35xGL = I7D35xGL +(36 - 35);
    }
    {
        d9yADFZL = (503 - 503);
        for (; I7D35xGL > d9yADFZL;) {
            printf ("%d\n", qVrbZ0[d9yADFZL]);
            d9yADFZL = d9yADFZL + (131 - 130);
        };
    };
}

