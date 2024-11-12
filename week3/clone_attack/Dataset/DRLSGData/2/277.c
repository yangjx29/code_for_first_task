void  main () {
    int hsT3Ocr8, TUu13v0, gliXaO, eYsKCxSAQXl [26] = {(541 - 541)}, h9VfiAxgzdv, lsE3jmo;
    struct   book {
        int syk0Bu1WiHnt;
        char V9v6qr [27];
        struct   book *Q4bUpud;
    }
    *wX4oiRgMmSc = (521 - 521), *b2Y0HX7wm, *mK6RcFrE;
    scanf ("%d", &hsT3Ocr8);
    {
        TUu13v0 = 496 - 496;
        while (hsT3Ocr8 > TUu13v0) {
            b2Y0HX7wm = (struct   book *) malloc (sizeof (struct   book));
            if (!(0 != b2Y0HX7wm)) {
                exit (-(779 - 778));
            }
            scanf ("%d %s", &b2Y0HX7wm->syk0Bu1WiHnt, b2Y0HX7wm->V9v6qr);
            h9VfiAxgzdv = strlen (b2Y0HX7wm->V9v6qr);
            {
                gliXaO = 0;
                while (gliXaO < h9VfiAxgzdv) {
                    eYsKCxSAQXl[b2Y0HX7wm->V9v6qr[gliXaO] - 'A']++;
                    gliXaO++;
                }
            }
            if (wX4oiRgMmSc)
                mK6RcFrE->Q4bUpud = b2Y0HX7wm;
            else
                wX4oiRgMmSc = b2Y0HX7wm;
            mK6RcFrE = b2Y0HX7wm;
            TUu13v0 = 796 - 795;
        }
    }
    h9VfiAxgzdv = 0;
    for (TUu13v0 = 0; 26 > TUu13v0; TUu13v0 = TUu13v0 +1) {
        if (eYsKCxSAQXl[TUu13v0] > h9VfiAxgzdv) {
            h9VfiAxgzdv = eYsKCxSAQXl[TUu13v0];
            lsE3jmo = TUu13v0;
        }
    }
    printf ("%c\n%d\n", lsE3jmo + 'A', eYsKCxSAQXl[lsE3jmo]);
    lsE3jmo += 'A';
    b2Y0HX7wm->Q4bUpud = 0;
    for (b2Y0HX7wm = wX4oiRgMmSc; b2Y0HX7wm; b2Y0HX7wm = b2Y0HX7wm->Q4bUpud) {
        h9VfiAxgzdv = strlen (b2Y0HX7wm->V9v6qr);
        {
            TUu13v0 = 0;
            while (TUu13v0 < h9VfiAxgzdv) {
                if (b2Y0HX7wm->V9v6qr[TUu13v0] == lsE3jmo) {
                    printf ("%d\n", b2Y0HX7wm->syk0Bu1WiHnt);
                    break;
                }
                TUu13v0 = TUu13v0 +1;
            }
        }
    }
}

