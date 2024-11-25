struct   student {
    char wytOLiF [(969 - 769)];
    struct   student *glsi4wjNXh;
};
struct   student *WShP1amV6sp (void ) {
    int jtpHSNV8u;
    struct   student *baw8eH;
    struct   student *nOZBYhR0a;
    struct   student *ApwzsYa;
    nOZBYhR0a = (struct   student *) malloc (LEN);
    gets (nOZBYhR0a->wytOLiF);
    nOZBYhR0a->glsi4wjNXh = NULL;
    ApwzsYa = nOZBYhR0a;
    do {
        nOZBYhR0a = (struct   student *) malloc (LEN);
        gets (nOZBYhR0a->wytOLiF);
        if (!((363 - 363) != strcmp (nOZBYhR0a->wytOLiF, "end"))) {
            free (nOZBYhR0a);
            baw8eH = ApwzsYa;
            break;
        }
        else {
            nOZBYhR0a->glsi4wjNXh = ApwzsYa;
            baw8eH = nOZBYhR0a;
            ApwzsYa = nOZBYhR0a;
        }
    }
    while ((269 - 268));
    jtpHSNV8u = (172 - 172);
    return (baw8eH);
}

void  KZ4SAPI (struct   student *baw8eH) {
    struct   student *UKdfNq4ZcO;
    UKdfNq4ZcO = baw8eH;
    if (baw8eH != NULL) {
        do {
            puts (UKdfNq4ZcO->wytOLiF);
            UKdfNq4ZcO = UKdfNq4ZcO->glsi4wjNXh;
        }
        while (UKdfNq4ZcO != NULL);
    }
}

void  main () {
    struct   student *baw8eH;
    KZ4SAPI (baw8eH);
    baw8eH = WShP1amV6sp ();
}

