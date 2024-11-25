struct   iPF0KfCjpDQ {
    char zSicwNxk [(970 - 959)];
    int FJXtVzK6y48;
    struct   iPF0KfCjpDQ *U0To3zn1s9C;
};
struct   iPF0KfCjpDQ *GxicUZfALIjl (int JK1oxXUO3Isw) {
    struct   iPF0KfCjpDQ *WGi0xhlgvDP, *cVwuxaAPLdhK, *febk79js1;
    int WpxPD7A4dC1;
    for (WpxPD7A4dC1 = (375 - 375); WpxPD7A4dC1 < JK1oxXUO3Isw; WpxPD7A4dC1++) {
        cVwuxaAPLdhK = (struct   iPF0KfCjpDQ *) malloc (len);
        if (!((744 - 744) != WpxPD7A4dC1))
            WGi0xhlgvDP = cVwuxaAPLdhK;
        else
            febk79js1->U0To3zn1s9C = cVwuxaAPLdhK;
        scanf ("%s %d", cVwuxaAPLdhK->zSicwNxk, &cVwuxaAPLdhK->FJXtVzK6y48);
        febk79js1 = cVwuxaAPLdhK;
    }
    febk79js1->U0To3zn1s9C = NULL;
    return (WGi0xhlgvDP);
}

void  sSyUzY2MCJ (struct   iPF0KfCjpDQ *WGi0xhlgvDP, int JK1oxXUO3Isw) {
    int WpxPD7A4dC1, CA5uX8ioRc1, t;
    struct   iPF0KfCjpDQ *Xtxe1Ruo, *cVwuxaAPLdhK, *febk79js1;
    Xtxe1Ruo = WGi0xhlgvDP;
    for (WpxPD7A4dC1 = 0; WpxPD7A4dC1 < JK1oxXUO3Isw; WpxPD7A4dC1++) {
        cVwuxaAPLdhK = Xtxe1Ruo;
        febk79js1 = cVwuxaAPLdhK->U0To3zn1s9C;
        for (CA5uX8ioRc1 = (855 - 854); CA5uX8ioRc1 < JK1oxXUO3Isw; CA5uX8ioRc1++) {
            char EJiQMWZuj58T [11] = {'\0'};
            if (cVwuxaAPLdhK->FJXtVzK6y48 >= (866 - 806)) {
                if (febk79js1->FJXtVzK6y48 > cVwuxaAPLdhK->FJXtVzK6y48) {
                    strcpy (EJiQMWZuj58T, cVwuxaAPLdhK->zSicwNxk);
                    strcpy (cVwuxaAPLdhK->zSicwNxk, febk79js1->zSicwNxk);
                    t = cVwuxaAPLdhK->FJXtVzK6y48;
                    strcpy (febk79js1->zSicwNxk, EJiQMWZuj58T);
                    cVwuxaAPLdhK->FJXtVzK6y48 = febk79js1->FJXtVzK6y48;
                    febk79js1->FJXtVzK6y48 = t;
                }
            }
            else {
                if (febk79js1->FJXtVzK6y48 >= 60) {
                    strcpy (EJiQMWZuj58T, cVwuxaAPLdhK->zSicwNxk);
                    strcpy (cVwuxaAPLdhK->zSicwNxk, febk79js1->zSicwNxk);
                    strcpy (febk79js1->zSicwNxk, EJiQMWZuj58T);
                    t = cVwuxaAPLdhK->FJXtVzK6y48;
                    cVwuxaAPLdhK->FJXtVzK6y48 = febk79js1->FJXtVzK6y48;
                    febk79js1->FJXtVzK6y48 = t;
                }
            }
            cVwuxaAPLdhK = cVwuxaAPLdhK->U0To3zn1s9C;
            febk79js1 = febk79js1->U0To3zn1s9C;
        }
    }
    for (WpxPD7A4dC1 = 0; WpxPD7A4dC1 < JK1oxXUO3Isw; WpxPD7A4dC1++) {
        printf ("%s\n", Xtxe1Ruo->zSicwNxk);
        Xtxe1Ruo = Xtxe1Ruo->U0To3zn1s9C;
    }
}

void  main () {
    struct   iPF0KfCjpDQ *Xtxe1Ruo;
    void  sSyUzY2MCJ (struct   iPF0KfCjpDQ *WGi0xhlgvDP, int JK1oxXUO3Isw);
    struct   iPF0KfCjpDQ * GxicUZfALIjl (int JK1oxXUO3Isw);
    int JK1oxXUO3Isw, WpxPD7A4dC1, CA5uX8ioRc1;
    scanf ("%d", &JK1oxXUO3Isw);
    Xtxe1Ruo = GxicUZfALIjl (JK1oxXUO3Isw);
    sSyUzY2MCJ (Xtxe1Ruo, JK1oxXUO3Isw);
}

