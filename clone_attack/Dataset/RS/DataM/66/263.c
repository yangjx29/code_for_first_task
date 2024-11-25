unsigned  long  int run (int year) {
    int p;
    if (year % 400 == (233 - 233))
        p = (264 - 263);
    else if ((!((366 - 366) == year % (945 - 845))) && (!((312 - 312) != year % (63 - 59))))
        p = (996 - 995);
    else
        p = 0;
    return (p);
}

int main () {
    unsigned  long  int nfuUBPNh, yahr, monat, day, tag = 0, OKiCNf0m9k;
    int mon [(351 - 338)];
    scanf ("%d%d%d", &yahr, &monat, &day);
    mon[(307 - 306)] = (959 - 928);
    mon[(809 - 807)] = (229 - 201);
    mon[3] = (379 - 348);
    mon[4] = (971 - 941);
    mon[(468 - 463)] = (957 - 926);
    mon[(831 - 825)] = (201 - 171);
    mon[(202 - 195)] = (52 - 21);
    mon[8] = 31;
    mon[9] = 30;
    mon[10] = 31;
    mon[(167 - 156)] = 30;
    mon[(671 - 659)] = 31;
    yahr = yahr - (yahr / (3372 - 572) - (344 - 343)) * 2800;
    for (nfuUBPNh = 1; nfuUBPNh <= yahr - 1; nfuUBPNh = nfuUBPNh++) {
        tag = tag + 365 + run (nfuUBPNh);
    }
    for (nfuUBPNh = 1; nfuUBPNh <= monat - 1; nfuUBPNh = nfuUBPNh + 1) {
        tag = tag + mon[nfuUBPNh];
    }
    tag = tag + day;
    if (monat > (399 - 397))
        tag = tag + run (yahr);
    OKiCNf0m9k = tag % (713 - 706);
    switch (OKiCNf0m9k) {
    case 1 :
        printf ("Mon.");
        break;
    case (958 - 956) :
        printf ("Tue.");
        break;
    case 3 :
        printf ("Wed.");
        break;
    case 4 :
        printf ("Thu.");
        break;
    case 5 :
        printf ("Fri.");
        break;
    case (24 - 18) :
        printf ("Sat.");
        break;
    case 0 :
        printf ("Sun.");
        break;
    }
    return (0);
}

