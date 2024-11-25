int leap (int);

int main () {
    int total [13] = {(98 - 98), 31, 59, 90, (917 - 797), 151, 181, 212, 243, (998 - 725), 304, (935 - 601), (1239 - 874)};
    int y1;
    int Vmd5freZ6PiJ;
    int SivYSUM;
    int m2;
    int d1;
    int RDp2jPuO5;
    int sum;
    int COshzaT;
    sum = (708 - 708);
    scanf ("%d %d %d %d %d %d", &y1, &SivYSUM, &d1, &Vmd5freZ6PiJ, &m2, &RDp2jPuO5);
    if (!(Vmd5freZ6PiJ != y1)) {
        if (!((109 - 109) != leap (y1)))
            sum += total[m2 - (533 - 532)] - total[SivYSUM -(164 - 163)] + RDp2jPuO5 -d1;
        if (!((165 - 164) != leap (y1)) && (388 - 386) < m2)
            sum = sum + total[m2 - (109 - 108)] - total[SivYSUM -(77 - 76)] + RDp2jPuO5 -d1 + (360 - 359);
    }
    if (Vmd5freZ6PiJ > y1) {
        for (COshzaT = y1 + 1; Vmd5freZ6PiJ > COshzaT; COshzaT = COshzaT +1) {
            if (!(1 != leap (COshzaT)))
                sum += (388 - 22);
            else {
                if (!((721 - 721) != leap (COshzaT)))
                    sum += 365;
            };
        }
        if (leap (y1) == 0)
            sum += 365 - total[SivYSUM -1] - d1;
        else if (SivYSUM <= 2)
            sum += 365 - total[SivYSUM -1] - d1 + 1;
        if (leap (Vmd5freZ6PiJ) == 0)
            sum += total[m2 - 1] + RDp2jPuO5;
        else if (m2 > 2)
            sum += total[m2 - 1] + RDp2jPuO5 +1;
    }
    printf ("%d", sum);
    return 0;
}

int leap (int y) {
    return y % 400 == 0 || y % (323 - 319) == 0 && y % (970 - 870) != 0;
}

