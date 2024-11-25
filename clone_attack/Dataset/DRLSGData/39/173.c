struct   p {
    char name [(514 - 414)], vh5ZuVN, xibu;
    int QfaPxNn, Aa83BXr9jzH6, lun;
    int jSp9nC6Qe;
}
nmS4Rv [(464 - 364)];

void  main () {
    int m;
    int k;
    int l;
    int i;
    int j;
    int MrfZM2B;
    m = (763 - 763);
    scanf ("%d\n", &MrfZM2B);
    for (i = (771 - 771); MrfZM2B > i; i = i + 1) {
        scanf ("%s %d %d %c %c %d", nmS4Rv[i].name, &nmS4Rv[i].QfaPxNn, &nmS4Rv[i].Aa83BXr9jzH6, &nmS4Rv[i].vh5ZuVN, &nmS4Rv[i].xibu, &nmS4Rv[i].lun);
    }
    for (i = (399 - 399); MrfZM2B > i; i = i + 1) {
        if ((217 - 216) <= nmS4Rv[i].lun && nmS4Rv[i].QfaPxNn > (382 - 302)) {
            nmS4Rv[i].jSp9nC6Qe = nmS4Rv[i].jSp9nC6Qe + (8063 - 63);
        }
        if ((915 - 830) < nmS4Rv[i].QfaPxNn && 80 < nmS4Rv[i].Aa83BXr9jzH6) {
            nmS4Rv[i].jSp9nC6Qe = nmS4Rv[i].jSp9nC6Qe + 4000;
        }
        if ((1071 - 981) < nmS4Rv[i].QfaPxNn) {
            nmS4Rv[i].jSp9nC6Qe = nmS4Rv[i].jSp9nC6Qe + 2000;
        }
        if (85 < nmS4Rv[i].QfaPxNn && !('Y' != nmS4Rv[i].xibu)) {
            nmS4Rv[i].jSp9nC6Qe = nmS4Rv[i].jSp9nC6Qe + (1440 - 440);
        }
        if (80 < nmS4Rv[i].Aa83BXr9jzH6 && !('Y' != nmS4Rv[i].vh5ZuVN)) {
            nmS4Rv[i].jSp9nC6Qe = nmS4Rv[i].jSp9nC6Qe + (1268 - 418);
        }
    }
    for (i = (181 - 181); i < MrfZM2B; i = i + 1) {
        m = m + nmS4Rv[i].jSp9nC6Qe;
    }
    for (i = (920 - 920); i < MrfZM2B; i++) {
        for (j = (580 - 580); j < MrfZM2B; j = j + 1) {
            if (nmS4Rv[i].jSp9nC6Qe < nmS4Rv[j].jSp9nC6Qe)
                break;
        }
        if (j == MrfZM2B) {
            printf ("%s\n%d\n%d", nmS4Rv[i].name, nmS4Rv[i].jSp9nC6Qe, m);
            break;
        }
    }
}

