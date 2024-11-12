int main () {
    struct   book {
        int num;
        char Fh6Zpit9HGE [(817 - 791)];
    }
    iGXOgbDfl [(1657 - 657)];
    char XyCA1Lt;
    int gDpKFx2cRT1s, i, lt6oOdnsuRUJ, max = (534 - 534);
    int YT5R4fwkLZe [(583 - 557)] = {(671 - 671)};
    scanf ("%d", &gDpKFx2cRT1s);
    for (i = (476 - 476); gDpKFx2cRT1s > i; i = i + (490 - 489)) {
        scanf ("%d %s", &iGXOgbDfl[i].num, iGXOgbDfl[i].Fh6Zpit9HGE);
        for (lt6oOdnsuRUJ = (406 - 406); (683 - 657) > lt6oOdnsuRUJ; lt6oOdnsuRUJ = lt6oOdnsuRUJ + (875 - 874))
            YT5R4fwkLZe[iGXOgbDfl[i].Fh6Zpit9HGE[lt6oOdnsuRUJ] - (553 - 488)]++;
    }
    for (lt6oOdnsuRUJ = (103 - 103); (997 - 971) > lt6oOdnsuRUJ; lt6oOdnsuRUJ = lt6oOdnsuRUJ + (591 - 590))
        if (YT5R4fwkLZe[lt6oOdnsuRUJ] > max) {
            max = YT5R4fwkLZe[lt6oOdnsuRUJ];
            XyCA1Lt = lt6oOdnsuRUJ + 65;
        }
    printf ("%c\n%d\n", XyCA1Lt, max);
    for (i = 0; gDpKFx2cRT1s > i; i = i + 1)
        for (lt6oOdnsuRUJ = 0; (354 - 328) > lt6oOdnsuRUJ; lt6oOdnsuRUJ = lt6oOdnsuRUJ + 1)
            if (iGXOgbDfl[i].Fh6Zpit9HGE[lt6oOdnsuRUJ] == XyCA1Lt) {
                printf ("%d\n", iGXOgbDfl[i].num);
                continue;
            }
}

