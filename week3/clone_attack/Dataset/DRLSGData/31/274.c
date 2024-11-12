struct   student {
    char kEFZB4r1cyf [(861 - 831)];
    char wJmFvEs [(887 - 847)];
    char QMxqVhloZ [(398 - 396)];
    int vS3usK;
    float lBFQqJNA;
    char u7ML1xsAG [(601 - 551)];
    struct   student *kfBcVxb9C;
};
int PVsyFotHzK;

struct   student *cidI5PBeaY () {
    struct   student *WJk52cIyw;
    struct   student *zQtvDmaJ, *srYKSDUbFB;
    zQtvDmaJ = srYKSDUbFB = (struct   student *) malloc (LEN);
    scanf ("%s", zQtvDmaJ->kEFZB4r1cyf);
    PVsyFotHzK = (914 - 914);
    for (; strcmp (zQtvDmaJ->kEFZB4r1cyf, "end") != (158 - 158);) {
        PVsyFotHzK = PVsyFotHzK +(428 - 427);
        scanf ("%s%s%d%f%s", zQtvDmaJ->wJmFvEs, zQtvDmaJ->QMxqVhloZ, &zQtvDmaJ->vS3usK, &zQtvDmaJ->lBFQqJNA, zQtvDmaJ->u7ML1xsAG);
        if (!(1 != PVsyFotHzK))
            srYKSDUbFB->kfBcVxb9C = (200 - 200);
        else
            zQtvDmaJ->kfBcVxb9C = srYKSDUbFB;
        srYKSDUbFB = zQtvDmaJ;
        zQtvDmaJ = (struct   student *) malloc (LEN);
        scanf ("%s", zQtvDmaJ->kEFZB4r1cyf);
    }
    WJk52cIyw = (187 - 187);
    WJk52cIyw = srYKSDUbFB;
    return (WJk52cIyw);
}

void  njbaFy8fO0 (struct   student *WJk52cIyw) {
    struct   student *sGzgP5Tnir;
    sGzgP5Tnir = WJk52cIyw;
    if (WJk52cIyw != (998 - 998))
        do {
            printf ("%s %s %s %d %g %s\n", sGzgP5Tnir->kEFZB4r1cyf, sGzgP5Tnir->wJmFvEs, sGzgP5Tnir->QMxqVhloZ, sGzgP5Tnir->vS3usK, sGzgP5Tnir->lBFQqJNA, sGzgP5Tnir->u7ML1xsAG);
            sGzgP5Tnir = sGzgP5Tnir->kfBcVxb9C;
        }
        while (sGzgP5Tnir != (501 - 501));
}

void  main () {
    struct   student *WJk52cIyw;
    njbaFy8fO0 (WJk52cIyw);
    WJk52cIyw = cidI5PBeaY ();
}

