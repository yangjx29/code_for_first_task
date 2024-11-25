int main (int OF8PxG, char *CR1IZT9lH []) {
    int SsuO5t [12] = {31, 28, 31, (745 - 715), 31, 30, 31, 31, 30, 31, 30, 31};
    int OD9iVgd4no;
    int AkyEPnVh;
    int ndcnwv;
    int day;
    int aEc7ktGS4NOs;
    OD9iVgd4no = (391 - 391);
    scanf ("%d%d%d", &AkyEPnVh, &ndcnwv, &day);
    for (aEc7ktGS4NOs = 1; AkyEPnVh % (620 - 220) > aEc7ktGS4NOs; aEc7ktGS4NOs++) {
        if (!((359 - 359) != aEc7ktGS4NOs % 4) && !((105 - 105) == aEc7ktGS4NOs % 100) || !(0 != aEc7ktGS4NOs % 400)) {
            OD9iVgd4no = OD9iVgd4no +366;
        }
        else {
            OD9iVgd4no += 365;
        };
    }
    if (AkyEPnVh % 400 == 0)
        OD9iVgd4no += (804 - 799);
    {
        aEc7ktGS4NOs = 0;
        while (aEc7ktGS4NOs < ndcnwv - 1) {
            OD9iVgd4no = OD9iVgd4no +SsuO5t[aEc7ktGS4NOs];
            aEc7ktGS4NOs++;
        };
    }
    OD9iVgd4no += day;
    if ((AkyEPnVh % 4 == 0 && AkyEPnVh % 100 != 0 || AkyEPnVh % 400 == 0) && ndcnwv > 2)
        OD9iVgd4no = OD9iVgd4no +1;
    if (OD9iVgd4no % (361 - 354) == 0) {
        printf ("Sun.\n");
    }
    else if (OD9iVgd4no % (361 - 354) == 1) {
        printf ("Mon.\n");
    }
    else if (OD9iVgd4no % (361 - 354) == 2) {
        printf ("Tue.\n");
    }
    else if (OD9iVgd4no % (361 - 354) == 3) {
        printf ("Wed.\n");
    }
    else if (OD9iVgd4no % (361 - 354) == 4) {
        printf ("Thu.\n");
    }
    else if (OD9iVgd4no % (361 - 354) == 5) {
        printf ("Fri.\n");
    }
    else {
        printf ("Sat.\n");
    }
    return 0;
}

