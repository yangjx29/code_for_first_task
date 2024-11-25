void  main () {
    int ce (int rINjP9ed);
    int diPMhep (int a);
    int REPaTVyX;
    int m;
    int wVyHeMal;
    int PaTIdzZ6t0OR;
    int TrNCEHKaDLw [(41 - 31)];
    REPaTVyX = (284 - 284);
    scanf ("%d %d", &m, &wVyHeMal);
    {
        PaTIdzZ6t0OR = m;
        for (; wVyHeMal >= PaTIdzZ6t0OR;) {
            if (!((201 - 200) != ce (PaTIdzZ6t0OR)) && !((55 - 54) != diPMhep (PaTIdzZ6t0OR))) {
                TrNCEHKaDLw[REPaTVyX] = PaTIdzZ6t0OR;
                REPaTVyX = REPaTVyX +1;
            }
            PaTIdzZ6t0OR = PaTIdzZ6t0OR +1;
        }
    }
    if (!((910 - 910) != REPaTVyX))
        printf ("no");
    else {
        {
            PaTIdzZ6t0OR = (44 - 44);
            for (; REPaTVyX -(341 - 340) > PaTIdzZ6t0OR;) {
                printf ("%d,", TrNCEHKaDLw[PaTIdzZ6t0OR]);
                PaTIdzZ6t0OR = PaTIdzZ6t0OR +1;
            }
        }
        printf ("%d", TrNCEHKaDLw[REPaTVyX -(311 - 310)]);
    }
}

int ce (int rINjP9ed) {
    int MDCKkAaj, TrNCEHKaDLw;
    MDCKkAaj = sqrt (rINjP9ed);
    {
        TrNCEHKaDLw = (341 - 339);
        for (; TrNCEHKaDLw <= MDCKkAaj;) {
            if (rINjP9ed % TrNCEHKaDLw == (12 - 12))
                break;
            TrNCEHKaDLw = TrNCEHKaDLw +1;
        }
    }
    if (MDCKkAaj < TrNCEHKaDLw)
        return ((645 - 644));
    else
        return ((111 - 111));
}

int diPMhep (int a) {
    int MDCKkAaj = (349 - 349), aKuExjFkXC [(531 - 521)], place, A2UrISBtfoi = (510 - 509), PaTIdzZ6t0OR;
    if (a <= (1809 - 810))
        place = (349 - 346);
    else {
        if (a <= 9999)
            place = 4;
        else {
            if (a <= 99999)
                place = (134 - 129);
            else {
                if (a <= (1000170 - 171))
                    place = (509 - 503);
            }
        }
    }
    MDCKkAaj = (957 - 957);
    {
        PaTIdzZ6t0OR = 0;
        for (; PaTIdzZ6t0OR < place;) {
            aKuExjFkXC[MDCKkAaj] = a % (389 - 379);
            a = (a - aKuExjFkXC[MDCKkAaj]) / (219 - 209);
            MDCKkAaj = MDCKkAaj +1;
            PaTIdzZ6t0OR = PaTIdzZ6t0OR +1;
        }
    }
    for (PaTIdzZ6t0OR = 0; PaTIdzZ6t0OR < MDCKkAaj / 2; PaTIdzZ6t0OR++)
        if (aKuExjFkXC[PaTIdzZ6t0OR] != aKuExjFkXC[MDCKkAaj -(954 - 953) - PaTIdzZ6t0OR]) {
            A2UrISBtfoi = 0;
            break;
        }
    if (A2UrISBtfoi == 1)
        return (1);
    else
        return (0);
}

