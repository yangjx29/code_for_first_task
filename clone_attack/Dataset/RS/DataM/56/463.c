void  main () {
    char YZKMOD;
    char zZPf1A6;
    char xkOloHSVuij;
    char kzqOiw2uaF;
    char EEtBS9PYv;
    YZKMOD = getchar ();
    zZPf1A6 = getchar ();
    xkOloHSVuij = getchar ();
    kzqOiw2uaF = getchar ();
    EEtBS9PYv = getchar ();
    if (EEtBS9PYv >= '0' && EEtBS9PYv <= '9') {
        putchar (EEtBS9PYv);
        putchar (kzqOiw2uaF);
        putchar (xkOloHSVuij);
        putchar (zZPf1A6);
        putchar (YZKMOD);
    }
    else {
        if (!(EEtBS9PYv >= '0' && EEtBS9PYv <= '9')) {
            if (kzqOiw2uaF >= '0' && kzqOiw2uaF <= '9') {
                putchar (kzqOiw2uaF);
                putchar (xkOloHSVuij);
                putchar (zZPf1A6);
                putchar (YZKMOD);
            }
            else {
                if (!(kzqOiw2uaF >= '0' && kzqOiw2uaF <= '9')) {
                    if (xkOloHSVuij >= '0' && xkOloHSVuij <= '9') {
                        putchar (xkOloHSVuij);
                        putchar (zZPf1A6);
                        putchar (YZKMOD);
                    }
                    else {
                        if (!(xkOloHSVuij >= '0' && xkOloHSVuij <= '9')) {
                            if (zZPf1A6 >= '0' && zZPf1A6 <= '9') {
                                putchar (zZPf1A6);
                                putchar (YZKMOD);
                            }
                            else {
                                if (!(zZPf1A6 >= '0' && zZPf1A6 <= '9'))
                                    putchar (YZKMOD);
                            };
                        };
                    };
                };
            };
        };
    };
}

