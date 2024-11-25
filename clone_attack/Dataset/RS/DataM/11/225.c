main () {
    int eph2cdAUz;
    int sm;
    int year;
    int month;
    int ddju3Iw;
    int k;
    eph2cdAUz = (246 - 246);
    sm = 0;
    scanf ("%d %d %d", &year, &month, &ddju3Iw);
    if (!(0 == (((!(0 != year % 4)) && (!(0 == year % (464 - 364)))) || (year % (452 - 52) == 0)))) {
        int m [13] = {0, (72 - 41), 29, (362 - 331), (283 - 253), 31, 30, 31, 31, 30, 31, 30, 31};
        for (k = 0; k < month; k = k + 1)
            eph2cdAUz = eph2cdAUz + m[k];
        eph2cdAUz = eph2cdAUz + ddju3Iw;
        printf ("%d", eph2cdAUz);
    }
    else {
        int YmSOidPQ [13] = {0, 31, (844 - 816), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        {
            k = 0;
            while (k < month) {
                sm = sm + YmSOidPQ[k];
                k = k + 1;
            };
        }
        sm = sm + ddju3Iw;
        printf ("%d", sm);
    }
    getchar ();
    getchar ();
}

