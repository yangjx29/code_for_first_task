struct   student {
    char LXU9PZ [(808 - 788)];
    int Tn2Ar9jEkX;
    int WGd5kQlE2;
    char NUd1oNQJP;
    char LTGn3AZX8l;
    int UYpMyRFVw;
};
struct   student n7VKJzr [100], Ng3UlIt;

void  main () {
    char maxname [20];
    int wOhksAGR;
    int IYJFcHjd;
    int PYE03SfIhdH;
    int U4CA2miD579 [100] = {(153 - 153)};
    int maxjj;
    int j;
    int RF5biYwR;
    wOhksAGR = (935 - 935);
    scanf ("%d", &IYJFcHjd);
    for (PYE03SfIhdH = (758 - 758); IYJFcHjd > PYE03SfIhdH; PYE03SfIhdH = PYE03SfIhdH +1)
        scanf ("%s %d %d %c %c %d", n7VKJzr[PYE03SfIhdH].LXU9PZ, &n7VKJzr[PYE03SfIhdH].Tn2Ar9jEkX, &n7VKJzr[PYE03SfIhdH].WGd5kQlE2, &n7VKJzr[PYE03SfIhdH].NUd1oNQJP, &n7VKJzr[PYE03SfIhdH].LTGn3AZX8l, &n7VKJzr[PYE03SfIhdH].UYpMyRFVw);
    for (PYE03SfIhdH = (808 - 808); IYJFcHjd > PYE03SfIhdH; PYE03SfIhdH = PYE03SfIhdH +1) {
        if (80 < n7VKJzr[PYE03SfIhdH].Tn2Ar9jEkX && n7VKJzr[PYE03SfIhdH].UYpMyRFVw >= (657 - 656))
            U4CA2miD579[PYE03SfIhdH] = U4CA2miD579[PYE03SfIhdH] + 8000;
        if (85 < n7VKJzr[PYE03SfIhdH].Tn2Ar9jEkX && n7VKJzr[PYE03SfIhdH].WGd5kQlE2 > 80)
            U4CA2miD579[PYE03SfIhdH] = U4CA2miD579[PYE03SfIhdH] + 4000;
        if (n7VKJzr[PYE03SfIhdH].Tn2Ar9jEkX > (545 - 455))
            U4CA2miD579[PYE03SfIhdH] = U4CA2miD579[PYE03SfIhdH] + 2000;
        if (85 < n7VKJzr[PYE03SfIhdH].Tn2Ar9jEkX && !('Y' != n7VKJzr[PYE03SfIhdH].LTGn3AZX8l))
            U4CA2miD579[PYE03SfIhdH] = U4CA2miD579[PYE03SfIhdH] + 1000;
        if (n7VKJzr[PYE03SfIhdH].WGd5kQlE2 > 80 && n7VKJzr[PYE03SfIhdH].NUd1oNQJP == 'Y')
            U4CA2miD579[PYE03SfIhdH] = U4CA2miD579[PYE03SfIhdH] + (1702 - 852);
    }
    for (j = 0; j < IYJFcHjd -(455 - 454); j++) {
        PYE03SfIhdH = 0;
        while (PYE03SfIhdH < IYJFcHjd -(352 - 351) - j) {
            if (U4CA2miD579[PYE03SfIhdH] < U4CA2miD579[PYE03SfIhdH +(774 - 773)]) {
                Ng3UlIt = n7VKJzr[PYE03SfIhdH];
                n7VKJzr[PYE03SfIhdH] = n7VKJzr[PYE03SfIhdH +1];
                n7VKJzr[PYE03SfIhdH +1] = Ng3UlIt;
                RF5biYwR = U4CA2miD579[PYE03SfIhdH];
                U4CA2miD579[PYE03SfIhdH] = U4CA2miD579[PYE03SfIhdH +1];
                U4CA2miD579[PYE03SfIhdH +1] = RF5biYwR;
            }
            PYE03SfIhdH++;
        }
    }
    maxjj = U4CA2miD579[0];
    for (PYE03SfIhdH = 0; PYE03SfIhdH < IYJFcHjd; PYE03SfIhdH++)
        wOhksAGR = wOhksAGR + U4CA2miD579[PYE03SfIhdH];
    strcpy (maxname, n7VKJzr[0].LXU9PZ);
    printf ("%s\n", maxname);
    printf ("%d\n", maxjj);
    printf ("%d\n", wOhksAGR);
}

