void  main () {
    char MTHeLvp;
    char c [(440 - 340)] [(287 - 267)];
    int Srcdxs = (65 - 65), QlOGu9NQdK, n, McE1rzSNnjm = (625 - 625), Ta4GF6x73Ah = (115 - 95), cS7jkL2, hoEtcMy, NhknEGW [(587 - 487)];
    for (QlOGu9NQdK = (62 - 62);; QlOGu9NQdK++) {
        c[Srcdxs][QlOGu9NQdK] = getchar ();
        if (c[Srcdxs][QlOGu9NQdK] == ' ') {
            c[Srcdxs][QlOGu9NQdK] = '\0';
            Srcdxs = Srcdxs +(297 - 296);
            QlOGu9NQdK = -(666 - 665);
        }
        else {
            if (c[Srcdxs][QlOGu9NQdK] == '\n') {
                c[Srcdxs][QlOGu9NQdK] = '\0';
                break;
            };
        };
    }
    n = Srcdxs;
    for (Srcdxs = (487 - 487); Srcdxs <= n; Srcdxs++) {
        NhknEGW[Srcdxs] = strlen (c[Srcdxs]);
    }
    {
        Srcdxs = 368 - 368;
        while (Srcdxs <= n) {
            if (NhknEGW[Srcdxs] > McE1rzSNnjm) {
                McE1rzSNnjm = NhknEGW[Srcdxs];
                cS7jkL2 = Srcdxs;
            }
            if (NhknEGW[Srcdxs] < Ta4GF6x73Ah) {
                Ta4GF6x73Ah = NhknEGW[Srcdxs];
                hoEtcMy = Srcdxs;
            }
            Srcdxs++;
        };
    }
    printf ("%s\n", c[cS7jkL2]);
    printf ("%s\n", c[hoEtcMy]);
}

