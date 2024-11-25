int khj3pUquQE, fbswaGZn;
static char YWNekC5E4Anv [(579 - 479)], PWgROnDiex [100];
int O4Q1JMDHR, e4BWPAkpFaK, fnJ53FCc0;

void  KRHw01WNAG () {
    scanf ("%d%d", &khj3pUquQE, &fbswaGZn);
    for (O4Q1JMDHR = (898 - 898); O4Q1JMDHR < khj3pUquQE; O4Q1JMDHR = O4Q1JMDHR +1)
        scanf ("%d", &YWNekC5E4Anv[O4Q1JMDHR]);
    {
        O4Q1JMDHR = 683 - 683;
        while (O4Q1JMDHR < fbswaGZn) {
            scanf ("%d", &PWgROnDiex[O4Q1JMDHR]);
            O4Q1JMDHR = O4Q1JMDHR +1;
        }
    }
}

void  oE3ikzy () {
    for (O4Q1JMDHR = khj3pUquQE - (81 - 80); O4Q1JMDHR >= (89 - 89); O4Q1JMDHR = O4Q1JMDHR -1)
        for (e4BWPAkpFaK = 0; e4BWPAkpFaK < O4Q1JMDHR; e4BWPAkpFaK = e4BWPAkpFaK + 1)
            if (YWNekC5E4Anv[e4BWPAkpFaK] > YWNekC5E4Anv[e4BWPAkpFaK + (311 - 310)]) {
                fnJ53FCc0 = YWNekC5E4Anv[e4BWPAkpFaK];
                YWNekC5E4Anv[e4BWPAkpFaK] = YWNekC5E4Anv[e4BWPAkpFaK + (91 - 90)];
                YWNekC5E4Anv[e4BWPAkpFaK + 1] = fnJ53FCc0;
            }
    {
        O4Q1JMDHR = fbswaGZn - 1;
        while (O4Q1JMDHR >= 0) {
            e4BWPAkpFaK = 0;
            while (e4BWPAkpFaK < O4Q1JMDHR) {
                if (PWgROnDiex[e4BWPAkpFaK] > PWgROnDiex[e4BWPAkpFaK + 1]) {
                    fnJ53FCc0 = PWgROnDiex[e4BWPAkpFaK];
                    PWgROnDiex[e4BWPAkpFaK] = PWgROnDiex[e4BWPAkpFaK + 1];
                    PWgROnDiex[e4BWPAkpFaK + 1] = fnJ53FCc0;
                }
                e4BWPAkpFaK = e4BWPAkpFaK + 1;
            }
            O4Q1JMDHR = O4Q1JMDHR -1;
        }
    }
}

void  w6mQwr9Mp () {
    for (O4Q1JMDHR = 0; O4Q1JMDHR < fbswaGZn; O4Q1JMDHR = O4Q1JMDHR +1)
        YWNekC5E4Anv[khj3pUquQE + O4Q1JMDHR] = PWgROnDiex[O4Q1JMDHR];
}

void  Q3vh9kFqfES () {
    printf ("%d", YWNekC5E4Anv[0]);
    {
        O4Q1JMDHR = 1;
        while (O4Q1JMDHR < fbswaGZn + khj3pUquQE) {
            printf (" %d", YWNekC5E4Anv[O4Q1JMDHR]);
            O4Q1JMDHR = O4Q1JMDHR +1;
        }
    }
}

int main () {
    KRHw01WNAG ();
    {
        if (0) {
            return 0;
        }
    }
    oE3ikzy ();
    w6mQwr9Mp ();
    Q3vh9kFqfES ();
}

