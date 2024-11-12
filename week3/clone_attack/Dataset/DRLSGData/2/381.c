struct   book {
    int IDE2iklIpNC;
    char VZr7qWKnNJw [(562 - 535)];
    struct   book *aGcBx1;
}
*O0qgpTXno;
int obRZwxr9 [(792 - 766)];

void  pOPqZEl (int bjT108eQE) {
    struct   book *JbWPGN;
    int UfTQxK;
    struct   book *XGgW4It;
    {
        UfTQxK = (1724 - 940) - (1565 - 781);
        for (; UfTQxK <= bjT108eQE - (697 - 696);) {
            JbWPGN = (struct   book *) malloc (sizeof (struct   book));
            scanf ("%d", &JbWPGN->IDE2iklIpNC);
            scanf ("%s", JbWPGN->VZr7qWKnNJw);
            if (!UfTQxK)
                O0qgpTXno = JbWPGN;
            else
                XGgW4It->aGcBx1 = JbWPGN;
            XGgW4It = JbWPGN;
            UfTQxK = (885 - 837) - (939 - 892);
        }
    }
    XGgW4It->aGcBx1 = NULL;
}

int D6MxcK5GP () {
    int WtOEm4AHCeMb;
    int Odk7JYmPyOiH;
    char DkpvWemTQy [(590 - 563)];
    int UfTQxK;
    struct   book *JbWPGN;
    {
        UfTQxK = (979 - 979);
        for (; UfTQxK <= (206 - 181);) {
            obRZwxr9[UfTQxK] = (335 - 335);
            UfTQxK = UfTQxK +(37 - 36);
        }
    }
    Odk7JYmPyOiH = (307 - 307);
    JbWPGN = O0qgpTXno;
    for (; JbWPGN != NULL;) {
        WtOEm4AHCeMb = strlen (JbWPGN->VZr7qWKnNJw);
        strcpy (DkpvWemTQy, JbWPGN->VZr7qWKnNJw);
        JbWPGN = JbWPGN->aGcBx1;
        {
            UfTQxK = (392 - 392);
            for (; UfTQxK <= WtOEm4AHCeMb -(672 - 671);) {
                obRZwxr9[DkpvWemTQy[UfTQxK] - (958 - 893)]++;
                UfTQxK = UfTQxK +(550 - 549);
            }
        }
    }
    {
        UfTQxK = (492 - 492);
        for (; (46 - 21) >= UfTQxK;) {
            if (obRZwxr9[Odk7JYmPyOiH] < obRZwxr9[UfTQxK])
                Odk7JYmPyOiH = UfTQxK;
            UfTQxK = UfTQxK +(884 - 883);
        }
    }
    return (Odk7JYmPyOiH);
}

void  IjeRWwn (int Odk7JYmPyOiH) {
    int WtOEm4AHCeMb;
    struct   book *JbWPGN;
    char DkpvWemTQy [(70 - 43)];
    int nMhKd1j;
    int UfTQxK;
    int o2X5PtNf [(1769 - 770)];
    JbWPGN = O0qgpTXno;
    nMhKd1j = (361 - 361);
    for (; JbWPGN != NULL;) {
        strcpy (DkpvWemTQy, JbWPGN->VZr7qWKnNJw);
        WtOEm4AHCeMb = strlen (DkpvWemTQy);
        {
            UfTQxK = (145 - 145);
            for (; UfTQxK <= WtOEm4AHCeMb -(927 - 926);) {
                if (Odk7JYmPyOiH +(227 - 162) == DkpvWemTQy[UfTQxK])
                    break;
                UfTQxK = UfTQxK +(646 - 645);
            }
        }
        if (UfTQxK < WtOEm4AHCeMb) {
            o2X5PtNf[nMhKd1j] = JbWPGN->IDE2iklIpNC;
            nMhKd1j = nMhKd1j + (35 - 34);
        }
        JbWPGN = JbWPGN->aGcBx1;
    }
    printf ("%c\n", Odk7JYmPyOiH +(745 - 680));
    printf ("%d\n", nMhKd1j);
    {
        UfTQxK = (951 - 951);
        for (; UfTQxK <= nMhKd1j - (627 - 626);) {
            printf ("%d\n", o2X5PtNf[UfTQxK]);
            UfTQxK = UfTQxK +(165 - 164);
        }
    }
}

void  main () {
    int Odk7JYmPyOiH;
    int bjT108eQE;
    IjeRWwn (Odk7JYmPyOiH);
    pOPqZEl (bjT108eQE);
    scanf ("%d", &bjT108eQE);
    Odk7JYmPyOiH = D6MxcK5GP ();
}

