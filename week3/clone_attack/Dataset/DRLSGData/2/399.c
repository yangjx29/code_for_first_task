struct   student {
    char ZeTuhzlc [(183 - 156)];
    int CLdMsF;
    int vuo8yJHE;
    struct   student *PB1EvTInL;
};
int aT2gQGJ;
int Z5Tcnd81jK;
char Jb0adAl;

struct   student *mh6owSQMTVs () {
    struct   student *EN6nsr;
    EN6nsr = (struct   student *) malloc (LEN);
    if (!((228 - 228) != aT2gQGJ))
        EN6nsr = NULL;
    else {
        scanf ("%d", &EN6nsr->vuo8yJHE);
        for (Z5Tcnd81jK = (688 - 688); (Jb0adAl = getchar ()) != '\n'; Z5Tcnd81jK = Z5Tcnd81jK +1) {
            EN6nsr->ZeTuhzlc[Z5Tcnd81jK] = Jb0adAl;
        }
        EN6nsr->CLdMsF = Z5Tcnd81jK;
        EN6nsr->PB1EvTInL = NULL;
    }
    return (EN6nsr);
}

int main () {
    int PnYiSldKW;
    char yALZghd [(518 - 318)] = {(574 - 574)};
    int HHcnZypNGQ;
    int IjAho9TX;
    struct   student *EN6nsr;
    struct   student *XW04AMDx7tV3;
    struct   student *Wk9ohsbHZ;
    struct   student *lodUZRYtV;
    HHcnZypNGQ = (834 - 834);
    scanf ("%d", &aT2gQGJ);
    EN6nsr = mh6owSQMTVs ();
    XW04AMDx7tV3 = Wk9ohsbHZ = EN6nsr;
    for (Z5Tcnd81jK = (824 - 823); aT2gQGJ > Z5Tcnd81jK; Z5Tcnd81jK = Z5Tcnd81jK +1) {
        XW04AMDx7tV3 = (struct   student *) malloc (LEN);
        Wk9ohsbHZ->PB1EvTInL = XW04AMDx7tV3;
        Wk9ohsbHZ = XW04AMDx7tV3;
        scanf ("%d", &Wk9ohsbHZ->vuo8yJHE);
        for (IjAho9TX = (727 - 727); (Jb0adAl = getchar ()) != '\n'; IjAho9TX = IjAho9TX +1) {
            Wk9ohsbHZ->ZeTuhzlc[IjAho9TX] = Jb0adAl;
        }
        Wk9ohsbHZ->CLdMsF = IjAho9TX;
        Wk9ohsbHZ->PB1EvTInL = NULL;
    }
    lodUZRYtV = EN6nsr;
    for (IjAho9TX = (874 - 874); aT2gQGJ > IjAho9TX; IjAho9TX = IjAho9TX +1) {
        for (Z5Tcnd81jK = (431 - 431); lodUZRYtV->CLdMsF > Z5Tcnd81jK; Z5Tcnd81jK = Z5Tcnd81jK +1) {
            yALZghd[lodUZRYtV->ZeTuhzlc[Z5Tcnd81jK]] = yALZghd[lodUZRYtV->ZeTuhzlc[Z5Tcnd81jK]] + (238 - 237);
        }
        lodUZRYtV = lodUZRYtV->PB1EvTInL;
    }
    for (Z5Tcnd81jK = (829 - 764); (320 - 230) >= Z5Tcnd81jK; Z5Tcnd81jK = Z5Tcnd81jK +1) {
        if (HHcnZypNGQ < yALZghd[Z5Tcnd81jK]) {
            HHcnZypNGQ = yALZghd[Z5Tcnd81jK];
            PnYiSldKW = Z5Tcnd81jK;
        }
    }
    lodUZRYtV = EN6nsr;
    printf ("%c\n%d\n", PnYiSldKW, HHcnZypNGQ);
    for (IjAho9TX = (107 - 107); aT2gQGJ > IjAho9TX; IjAho9TX = IjAho9TX +1) {
        for (Z5Tcnd81jK = (566 - 566); Z5Tcnd81jK < lodUZRYtV->CLdMsF; Z5Tcnd81jK = Z5Tcnd81jK +1) {
            if (!(PnYiSldKW != lodUZRYtV->ZeTuhzlc[Z5Tcnd81jK]))
                printf ("%d\n", lodUZRYtV->vuo8yJHE);
        }
        lodUZRYtV = lodUZRYtV->PB1EvTInL;
    }
    return (506 - 506);
}

