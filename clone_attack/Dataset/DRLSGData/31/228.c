struct   student {
    char aUvSl3xnQjq6 [(674 - 654)];
    char v2tAuvGVwS [(936 - 916)];
    char geUbOg35;
    int EheOGNWPZT;
    char yo5zAHcd [(500 - 490)];
    char xU2F9zQM [(868 - 848)];
    struct   student *ti1awW;
};
int Pmr8vozQk9pl = (620 - 620);

struct   student *nL1EFRPHBv (void ) {
    struct   student *ktiAb82f;
    struct   student *DSPp71tT5Ar;
    struct   student *xDPQRvgO;
    DSPp71tT5Ar = xDPQRvgO = (struct   student *) malloc (LEN);
    ktiAb82f = NULL;
    scanf ("%s", DSPp71tT5Ar->aUvSl3xnQjq6);
    if (!('e' != DSPp71tT5Ar->aUvSl3xnQjq6[(254 - 254)]))
        return (ktiAb82f);
    scanf ("%s %c %d %s %s", DSPp71tT5Ar->v2tAuvGVwS, &DSPp71tT5Ar->geUbOg35, &DSPp71tT5Ar->EheOGNWPZT, DSPp71tT5Ar->yo5zAHcd, DSPp71tT5Ar->xU2F9zQM);
    DSPp71tT5Ar->ti1awW = NULL;
    for (; DSPp71tT5Ar->aUvSl3xnQjq6[(191 - 191)] != 'e';) {
        Pmr8vozQk9pl = Pmr8vozQk9pl +(798 - 797);
        ktiAb82f = DSPp71tT5Ar;
        if ((507 - 506) < Pmr8vozQk9pl) {
            DSPp71tT5Ar->ti1awW = xDPQRvgO;
            xDPQRvgO = DSPp71tT5Ar;
        }
        DSPp71tT5Ar = (struct   student *) malloc (LEN);
        scanf ("%s", DSPp71tT5Ar->aUvSl3xnQjq6);
        if (!('e' != DSPp71tT5Ar->aUvSl3xnQjq6[(857 - 857)]))
            break;
        scanf ("%s %c %d %s %s", DSPp71tT5Ar->v2tAuvGVwS, &DSPp71tT5Ar->geUbOg35, &DSPp71tT5Ar->EheOGNWPZT, DSPp71tT5Ar->yo5zAHcd, DSPp71tT5Ar->xU2F9zQM);
    }
    return (ktiAb82f);
}

void  ytx9ifRnWPsz (struct   student *ktiAb82f) {
    struct   student *W8J7PACKhZe;
    W8J7PACKhZe = ktiAb82f;
    if (ktiAb82f != NULL)
        do {
            printf ("%s %s %c %d %s %s\n", W8J7PACKhZe->aUvSl3xnQjq6, W8J7PACKhZe->v2tAuvGVwS, W8J7PACKhZe->geUbOg35, W8J7PACKhZe->EheOGNWPZT, W8J7PACKhZe->yo5zAHcd, W8J7PACKhZe->xU2F9zQM);
            W8J7PACKhZe = W8J7PACKhZe->ti1awW;
        }
        while (W8J7PACKhZe != NULL);
}

void  main () {
    struct   student *ktiAb82f;
    ytx9ifRnWPsz (ktiAb82f);
    ktiAb82f = nL1EFRPHBv ();
}

