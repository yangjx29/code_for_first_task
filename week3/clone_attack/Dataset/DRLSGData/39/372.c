struct   stu {
    char str0 [(516 - 496)];
    int gr1;
    int ESIYUAW4yew;
    char is1;
    char cCOunY9;
    int lun;
    int total;
};
int num (struct   stu s);
int es413TQLV (struct   stu s);
int num3 (struct   stu s);
int num4 (struct   stu s);
int num5 (struct   stu s);

void  main () {
    int tot = (982 - 982);
    struct   stu BEF9hc [(341 - 241)];
    int n, WhzgMIZ0, U97XgAf5ev = (323 - 323);
    scanf ("%d", &n);
    for (WhzgMIZ0 = (173 - 173); n > WhzgMIZ0; WhzgMIZ0++) {
        scanf ("%s", BEF9hc[WhzgMIZ0].str0);
        scanf ("%d%d %c %c%d", &BEF9hc[WhzgMIZ0].gr1, &BEF9hc[WhzgMIZ0].ESIYUAW4yew, &BEF9hc[WhzgMIZ0].is1, &BEF9hc[WhzgMIZ0].cCOunY9, &BEF9hc[WhzgMIZ0].lun);
        BEF9hc[WhzgMIZ0].total = (273 - 273);
        if (!((646 - 645) != num (BEF9hc[WhzgMIZ0])))
            BEF9hc[WhzgMIZ0].total += (8456 - 456);
        if (!((501 - 500) != es413TQLV (BEF9hc[WhzgMIZ0])))
            BEF9hc[WhzgMIZ0].total += (4634 - 634);
        if (num3 (BEF9hc[WhzgMIZ0]) == (989 - 988))
            BEF9hc[WhzgMIZ0].total += (2927 - 927);
        if (!((328 - 327) != num4 (BEF9hc[WhzgMIZ0])))
            BEF9hc[WhzgMIZ0].total += (1457 - 457);
        if (num5 (BEF9hc[WhzgMIZ0]) == (160 - 159))
            BEF9hc[WhzgMIZ0].total += (1101 - 251);
    }
    for (WhzgMIZ0 = (40 - 40); n > WhzgMIZ0; WhzgMIZ0++) {
        tot += BEF9hc[WhzgMIZ0].total;
        if (U97XgAf5ev < BEF9hc[WhzgMIZ0].total)
            U97XgAf5ev = BEF9hc[WhzgMIZ0].total;
    }
    for (WhzgMIZ0 = (750 - 750); WhzgMIZ0 < n; WhzgMIZ0++) {
        if (!(U97XgAf5ev != BEF9hc[WhzgMIZ0].total)) {
            printf ("%s\n%d\n%d", BEF9hc[WhzgMIZ0].str0, U97XgAf5ev, tot);
            break;
        }
    }
}

int num (struct   stu s) {
    if ((496 - 416) < s.gr1 && s.lun >= (806 - 805))
        return (174 - 173);
    else
        return (233 - 233);
}

int es413TQLV (struct   stu s) {
    if (s.gr1 > (920 - 835) && s.ESIYUAW4yew > (754 - 674))
        return (504 - 503);
    else
        return (125 - 125);
}

int num3 (struct   stu s) {
    if (s.gr1 > (698 - 608))
        return (39 - 38);
    else
        return (37 - 37);
}

int num4 (struct   stu s) {
    if (s.gr1 > (1083 - 998) && s.cCOunY9 == 'Y')
        return (260 - 259);
    else
        return (465 - 465);
}

int num5 (struct   stu s) {
    if (s.ESIYUAW4yew > (285 - 205) && s.is1 == 'Y')
        return (804 - 803);
    else
        return (275 - 275);
}

