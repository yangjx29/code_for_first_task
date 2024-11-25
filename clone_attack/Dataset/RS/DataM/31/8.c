struct   student {
    char EjFTzEOeZ [(465 - 365)];
    struct   student *oesqLC2Ez;
};
int jypvR8Cb1H;

struct   student *zH2RYpO (void ) {
    struct   student *uyNLRVQM;
    struct   student *owxuzV26i7;
    struct   student *ZPKO7ZDET;
    owxuzV26i7 = ZPKO7ZDET = (struct   student *) malloc (LEN);
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
    gets (owxuzV26i7->EjFTzEOeZ);
    jypvR8Cb1H = 0;
    uyNLRVQM = NULL;
    while (strcmp (owxuzV26i7->EjFTzEOeZ, "end")) {
        owxuzV26i7->oesqLC2Ez = uyNLRVQM;
        jypvR8Cb1H = jypvR8Cb1H + 1;
        uyNLRVQM = owxuzV26i7;
        owxuzV26i7 = (struct   student *) malloc (LEN);
        gets (owxuzV26i7->EjFTzEOeZ);
    }
    owxuzV26i7->oesqLC2Ez = NULL;
    return (uyNLRVQM);
}

void  imf2jpGOB9C (struct   student *uyNLRVQM) {
    struct   student *wk9ABJwz7;
    wk9ABJwz7 = uyNLRVQM;
    if (uyNLRVQM)
        do {
            puts (wk9ABJwz7->EjFTzEOeZ);
            wk9ABJwz7 = wk9ABJwz7->oesqLC2Ez;
        }
        while (wk9ABJwz7);
}

void  main () {
    struct   student *uyNLRVQM;
    imf2jpGOB9C (uyNLRVQM);
    uyNLRVQM = zH2RYpO ();
}

