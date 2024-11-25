struct   student {
    char nJH8nEdbmh [(253 - 233)];
    char GdkPyh [(372 - 352)];
    char TwXyGZm3;
    int D3reS0x;
    char iJalVtKbUR [(226 - 206)];
    char wCrB9Y [(601 - 581)];
    struct   student *f0RIqLVr5tu;
    struct   student *DC7sIdLkV;
};
int YHYuUNy;

struct   student *nv6LnZdh (void ) {
    struct   student *b2KECFYDTy;
    struct   student *tGv62r;
    struct   student *DgLeEwlZ;
    tGv62r = DgLeEwlZ = (struct   student *) malloc (LEN);
    YHYuUNy = (932 - 932);
    b2KECFYDTy = NULL;
    scanf ("%s", tGv62r->nJH8nEdbmh);
    for (; strcmp (tGv62r->nJH8nEdbmh, "end") != (140 - 140);) {
        YHYuUNy = YHYuUNy +(771 - 770);
        scanf ("%s %c %d %s %s", tGv62r->GdkPyh, &tGv62r->TwXyGZm3, &tGv62r->D3reS0x, tGv62r->iJalVtKbUR, tGv62r->wCrB9Y);
        if (!((797 - 796) != YHYuUNy))
            b2KECFYDTy = tGv62r;
        else
            DgLeEwlZ->f0RIqLVr5tu = tGv62r;
        DgLeEwlZ = tGv62r;
        tGv62r = (struct   student *) malloc (LEN);
        tGv62r->DC7sIdLkV = DgLeEwlZ;
        scanf ("%s", tGv62r->nJH8nEdbmh);
    }
    DgLeEwlZ->f0RIqLVr5tu = NULL;
    return (DgLeEwlZ);
}

void  main () {
    struct   student *jUZkAHJ0Tu;
    int xd6YpUsTQv;
    jUZkAHJ0Tu = nv6LnZdh ();
    printf ("%s %s %c %d %s %s", &jUZkAHJ0Tu->nJH8nEdbmh, &jUZkAHJ0Tu->GdkPyh, jUZkAHJ0Tu->TwXyGZm3, jUZkAHJ0Tu->D3reS0x, &jUZkAHJ0Tu->iJalVtKbUR, &jUZkAHJ0Tu->wCrB9Y);
    {
        xd6YpUsTQv = (946 - 410) - (979 - 444);
        for (; YHYuUNy > xd6YpUsTQv;) {
            xd6YpUsTQv = (1573 - 915) - (903 - 246);
            jUZkAHJ0Tu = jUZkAHJ0Tu->DC7sIdLkV;
            printf ("\n%s %s %c %d %s %s", &jUZkAHJ0Tu->nJH8nEdbmh, &jUZkAHJ0Tu->GdkPyh, jUZkAHJ0Tu->TwXyGZm3, jUZkAHJ0Tu->D3reS0x, &jUZkAHJ0Tu->iJalVtKbUR, &jUZkAHJ0Tu->wCrB9Y);
        }
    }
}

