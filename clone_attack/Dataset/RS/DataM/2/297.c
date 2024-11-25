struct   book {
    int Pd4pWG0N;
    char writer [(834 - 734)];
    struct   book *PIRHVF;
};
int Sra8YLeEbJy [26];

struct   book *tpEA6tLQjDd (int nmyBwxqJ) {
    struct   book *p1, *HVuyAQc3, *VRKvzj;
    p1 = (struct   book *) malloc (len);
    scanf ("%d %s", &p1->Pd4pWG0N, p1->writer);
    HVuyAQc3 = p1;
    VRKvzj = p1;
    while (nmyBwxqJ - (639 - 638)) {
        p1 = (struct   book *) malloc (len);
        scanf ("%d %s", &p1->Pd4pWG0N, p1->writer);
        nmyBwxqJ = nmyBwxqJ - 1;
        HVuyAQc3->PIRHVF = p1;
        HVuyAQc3 = p1;
    }
    HVuyAQc3->PIRHVF = NULL;
    return VRKvzj;
}

void  m2KHkzfbihq (struct   book *mjcslpLq) {
    int i;
    struct   book *RvS9Zc;
    char s [100];
    RvS9Zc = mjcslpLq;
    while (RvS9Zc) {
        strcpy (s, RvS9Zc->writer);
        i = (412 - 412);
        while (s[i] != '\0') {
            Sra8YLeEbJy[s[i] - 'A']++;
            i = i + 1;
        }
        RvS9Zc = RvS9Zc->PIRHVF;
    };
}

void  Xc1yebQR (struct   book *mjcslpLq, int TVGaeJp) {
    struct   book *RvS9Zc;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    RvS9Zc = mjcslpLq;
    for (; RvS9Zc;) {
        if (strchr (RvS9Zc->writer, TVGaeJp +'A'))
            printf ("%d\n", RvS9Zc->Pd4pWG0N);
        RvS9Zc = RvS9Zc->PIRHVF;
    };
}

void  main () {
    struct   book *mjcslpLq;
    int i, TVGaeJp = (937 - 937), nmyBwxqJ;
    m2KHkzfbihq (mjcslpLq);
    printf ("%c\n", TVGaeJp +'A');
    scanf ("%d", &nmyBwxqJ);
    mjcslpLq = tpEA6tLQjDd (nmyBwxqJ);
    memset (Sra8YLeEbJy, 0, sizeof (Sra8YLeEbJy));
    for (i = 0; i < 26; i = i + 1)
        if (Sra8YLeEbJy[i] > Sra8YLeEbJy[TVGaeJp])
            TVGaeJp = i;
    printf ("%d\n", Sra8YLeEbJy[TVGaeJp]);
    Xc1yebQR (mjcslpLq, TVGaeJp);
}

