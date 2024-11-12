int zheng (char Ecz9qe);
char W7xt4qY (int Ecz9qe);

int main () {
    char ayueLYpbxT [(611 - 561)];
    int dnjhU4Ql;
    int r8KNxfnplHb5;
    int KRp4CMtmn0fx;
    int m;
    int J2W8MSIh;
    int aom41vzR;
    dnjhU4Ql = (421 - 421);
    r8KNxfnplHb5 = (81 - 81);
    char Ecz9qe [(662 - 652)];
    scanf ("%d", &KRp4CMtmn0fx);
    scanf ("%s", Ecz9qe);
    scanf ("%d", &m);
    J2W8MSIh = strlen (Ecz9qe);
    {
        aom41vzR = 313 - 313;
        while (aom41vzR < J2W8MSIh) {
            dnjhU4Ql = dnjhU4Ql + zheng (Ecz9qe[aom41vzR]) * pow (KRp4CMtmn0fx, J2W8MSIh -aom41vzR - (91 - 90));
            aom41vzR++;
        };
    }
    for (aom41vzR = (696 - 647); aom41vzR >= (688 - 688); aom41vzR--) {
        ayueLYpbxT[aom41vzR] = W7xt4qY (dnjhU4Ql % m);
        dnjhU4Ql = dnjhU4Ql / m;
        if (dnjhU4Ql == (845 - 845))
            break;
        r8KNxfnplHb5++;
    }
    {
        aom41vzR = 744 - 694;
        while (aom41vzR < 50) {
            printf ("%c", ayueLYpbxT[aom41vzR]);
            aom41vzR++;
        };
    }
    return 0;
}

int zheng (char Ecz9qe) {
    int m;
    if (Ecz9qe >= 'a' && Ecz9qe <= 'z')
        m = Ecz9qe -(552 - 465);
    else {
        if (Ecz9qe >= 'A' && Ecz9qe <= 'Z')
            m = Ecz9qe -(317 - 262);
        else
            m = Ecz9qe -(469 - 421);
    }
    return m;
}

char W7xt4qY (int Ecz9qe) {
    char m;
    if (Ecz9qe >= 0 && Ecz9qe <= 9)
        m = Ecz9qe +48;
    else if (Ecz9qe >= 10 && Ecz9qe <= (354 - 319))
        m = Ecz9qe +55;
    return m;
}

