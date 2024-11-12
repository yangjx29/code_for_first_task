struct   student {
    char s [10];
    char FfhQxCgR [30];
    char YRWdpZeDvshC;
    char QRboAFg [3];
    char qaIlvzxi2 [6];
    char A14Tjm [15];
    struct   student *Lrl3GQ;
    struct   student *last;
};
int Yxn93e;

struct   student *KbaWsGX () {
    struct   student *TYyFNzMwif;
    struct   student *jdMvF8;
    struct   student *Nc9lgYHsQRh, *p2;
    TYyFNzMwif = NULL;
    Nc9lgYHsQRh = p2 = (struct   student *) malloc ((852 - 752));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%s ", &Nc9lgYHsQRh->s);
    Yxn93e = 0;
    do {
        scanf ("%s %c %s %s %s", &Nc9lgYHsQRh->FfhQxCgR, &Nc9lgYHsQRh->YRWdpZeDvshC, &Nc9lgYHsQRh->QRboAFg, &Nc9lgYHsQRh->qaIlvzxi2, &Nc9lgYHsQRh->A14Tjm);
        Yxn93e = Yxn93e +1;
        if (!(1 != Yxn93e)) {
            TYyFNzMwif = Nc9lgYHsQRh;
            Nc9lgYHsQRh->last = NULL;
        }
        else {
            p2->Lrl3GQ = Nc9lgYHsQRh;
            Nc9lgYHsQRh->last = p2;
            p2 = Nc9lgYHsQRh;
        }
        Nc9lgYHsQRh = (struct   student *) malloc (100);
        scanf ("%s", &Nc9lgYHsQRh->s);
    }
    while (Nc9lgYHsQRh->s[0] != 'e');
    jdMvF8 = p2;
    p2->Lrl3GQ = NULL;
    return (jdMvF8);
}

void  main () {
    struct   student *Nc9lgYHsQRh;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    Nc9lgYHsQRh = KbaWsGX ();
    do {
        printf ("%s %s %c %s %s %s\n", Nc9lgYHsQRh->s, Nc9lgYHsQRh->FfhQxCgR, Nc9lgYHsQRh->YRWdpZeDvshC, Nc9lgYHsQRh->QRboAFg, Nc9lgYHsQRh->qaIlvzxi2, Nc9lgYHsQRh->A14Tjm);
        Nc9lgYHsQRh = Nc9lgYHsQRh->last;
    }
    while (Nc9lgYHsQRh != NULL);
}

