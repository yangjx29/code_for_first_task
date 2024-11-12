void  main () {
    struct   stu {
        char fLlRSkwBgCVY [100];
        char vgEtsvQ7 [100];
        char QiT84wWpd;
        int zp7zY5GSMZ;
        float JOERyFjtoZD;
        char deszA60tYB [100];
        struct   stu *next;
    };
    int dq3QpHbAr1 = 1, gM9f5A;
    struct   stu *rQBxWl2fHjm;
    struct   stu *lxBegOW;
    struct   stu *ILrBpjWeTwb;
    struct   stu *S0TqMG;
    struct   stu *qUgbVyqi1;
    rQBxWl2fHjm = lxBegOW = ILrBpjWeTwb = (struct   stu *) malloc (sizeof (struct   stu));
    scanf ("%s", rQBxWl2fHjm->fLlRSkwBgCVY);
    for (; strcmp (rQBxWl2fHjm->fLlRSkwBgCVY, "end") != 0;) {
        scanf ("%s %c%d%f%s", rQBxWl2fHjm->vgEtsvQ7, &rQBxWl2fHjm->QiT84wWpd, &rQBxWl2fHjm->zp7zY5GSMZ, &rQBxWl2fHjm->JOERyFjtoZD, rQBxWl2fHjm->deszA60tYB);
        rQBxWl2fHjm = (struct   stu *) malloc (sizeof (struct   stu));
        scanf ("%s", rQBxWl2fHjm->fLlRSkwBgCVY);
        if (strcmp (rQBxWl2fHjm->fLlRSkwBgCVY, "end") == 0)
            lxBegOW->next = NULL;
        else {
            lxBegOW->next = rQBxWl2fHjm;
            lxBegOW = rQBxWl2fHjm;
            dq3QpHbAr1++;
        };
    }
    rQBxWl2fHjm = ILrBpjWeTwb;
    {
        gM9f5A = 0;
        while (dq3QpHbAr1 > gM9f5A) {
            lxBegOW = rQBxWl2fHjm = ILrBpjWeTwb;
            while (rQBxWl2fHjm->next != NULL) {
                lxBegOW = rQBxWl2fHjm;
                rQBxWl2fHjm = rQBxWl2fHjm->next;
            }
            if (gM9f5A == 0)
                qUgbVyqi1 = S0TqMG = rQBxWl2fHjm;
            else
                S0TqMG = S0TqMG->next = rQBxWl2fHjm;
            gM9f5A = gM9f5A + 1;
            lxBegOW->next = NULL;
        };
    }
    rQBxWl2fHjm = qUgbVyqi1;
    {
        gM9f5A = 0;
        while (gM9f5A < dq3QpHbAr1) {
            gM9f5A++;
            printf ("%s %s %c %d %g %s\n", rQBxWl2fHjm->fLlRSkwBgCVY, rQBxWl2fHjm->vgEtsvQ7, rQBxWl2fHjm->QiT84wWpd, rQBxWl2fHjm->zp7zY5GSMZ, rQBxWl2fHjm->JOERyFjtoZD, rQBxWl2fHjm->deszA60tYB);
            rQBxWl2fHjm = rQBxWl2fHjm->next;
        };
    };
}

