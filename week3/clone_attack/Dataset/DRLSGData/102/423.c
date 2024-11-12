main () {
    char BQiAqjyT6 [(609 - 569)] [(254 - 247)];
    int WbFMW4JsHRLE;
    int Fuft5qQdV;
    int pFW5oilO8H1;
    int clkrnc;
    int WenEY3pO;
    float jo8zIA [(436 - 396)], o5DRuykPsdn [(843 - 803)], PW63YHDl [(236 - 196)], tAsWcweKitRC;
    clkrnc = (118 - 118);
    WenEY3pO = (299 - 299);
    scanf ("%d", &WbFMW4JsHRLE);
    for (Fuft5qQdV = (558 - 558); Fuft5qQdV < WbFMW4JsHRLE; Fuft5qQdV = Fuft5qQdV +(484 - 483))
        scanf ("%s %f\n", BQiAqjyT6[Fuft5qQdV], &jo8zIA[Fuft5qQdV]);
    for (Fuft5qQdV = (425 - 425); Fuft5qQdV < WbFMW4JsHRLE; Fuft5qQdV = Fuft5qQdV +(191 - 190)) {
        if (BQiAqjyT6[Fuft5qQdV][(175 - 175)] == 'm') {
            o5DRuykPsdn[clkrnc] = jo8zIA[Fuft5qQdV];
            clkrnc = clkrnc + (840 - 839);
        }
        else {
            PW63YHDl[WenEY3pO] = jo8zIA[Fuft5qQdV];
            WenEY3pO = WenEY3pO +(516 - 515);
        }
    }
    {
        pFW5oilO8H1 = (884 - 884);
        for (; pFW5oilO8H1 < clkrnc - (703 - 702);) {
            Fuft5qQdV = (598 - 598);
            for (; Fuft5qQdV < clkrnc - pFW5oilO8H1 - (43 - 42);) {
                if (o5DRuykPsdn[Fuft5qQdV] > o5DRuykPsdn[Fuft5qQdV +(819 - 818)]) {
                    tAsWcweKitRC = o5DRuykPsdn[Fuft5qQdV];
                    o5DRuykPsdn[Fuft5qQdV] = o5DRuykPsdn[Fuft5qQdV +(572 - 571)];
                    o5DRuykPsdn[Fuft5qQdV +(359 - 358)] = tAsWcweKitRC;
                }
                Fuft5qQdV = Fuft5qQdV +(383 - 382);
            }
            pFW5oilO8H1 = pFW5oilO8H1 + (849 - 848);
        }
    }
    {
        pFW5oilO8H1 = (736 - 736);
        for (; pFW5oilO8H1 < WenEY3pO -(291 - 290);) {
            Fuft5qQdV = (924 - 924);
            for (; Fuft5qQdV < WenEY3pO -pFW5oilO8H1 - (427 - 426);) {
                if (PW63YHDl[Fuft5qQdV] < PW63YHDl[Fuft5qQdV +(526 - 525)]) {
                    tAsWcweKitRC = PW63YHDl[Fuft5qQdV];
                    PW63YHDl[Fuft5qQdV] = PW63YHDl[Fuft5qQdV +(25 - 24)];
                    PW63YHDl[Fuft5qQdV +(655 - 654)] = tAsWcweKitRC;
                }
                Fuft5qQdV = Fuft5qQdV +(938 - 937);
            }
            pFW5oilO8H1 = pFW5oilO8H1 + (85 - 84);
        }
    }
    {
        Fuft5qQdV = (142 - 142);
        for (; Fuft5qQdV < clkrnc;) {
            printf ("%.2f ", o5DRuykPsdn[Fuft5qQdV]);
            Fuft5qQdV = Fuft5qQdV +(559 - 558);
        }
    }
    for (Fuft5qQdV = (264 - 264); Fuft5qQdV < WenEY3pO -(178 - 177); Fuft5qQdV = Fuft5qQdV +1)
        printf ("%.2f ", PW63YHDl[Fuft5qQdV]);
    printf ("%.2f", PW63YHDl[WenEY3pO -1]);
}

