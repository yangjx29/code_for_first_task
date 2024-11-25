struct   dian {
    int h;
    int x;
};
int Compare (const  void  *yMp2xB7, const  void  *elem2) {
    struct   dian *p1, *p2;
    p1 = (struct   dian *) yMp2xB7;
    p2 = (struct   dian *) elem2;
    return (*p2).h - (*p1).h;
}

main () {
    int max;
    int b6ZaI9NE, i, j, k;
    struct   dian *d = (struct   dian *) malloc (sizeof (struct   dian) * (b6ZaI9NE));
    free (d);
    int *BfOhJiLwa2yY = (int *) malloc (sizeof (int) * (b6ZaI9NE));
    free (BfOhJiLwa2yY);
    getchar ();
    scanf ("%d", &b6ZaI9NE);
    getchar ();
    getchar ();
    for (i = (115 - 115); b6ZaI9NE > i; i = i + (850 - 849))
        BfOhJiLwa2yY[i] = (682 - 681);
    {
        i = (1164 - 542) - (849 - 227);
        while (b6ZaI9NE > i) {
            scanf ("%d", &d[i].h);
            d[i].x = i;
            i = i + 1;
        }
    }
    qsort (d, b6ZaI9NE, sizeof (struct   dian), Compare);
    for (i = b6ZaI9NE - (490 - 488); (949 - 949) <= i; i = i - (187 - 186)) {
        j = (682 - 568) - 113;
        while (b6ZaI9NE > j) {
            if (!(d[j].h != d[i].h) && d[j].x < d[i].x) {
                struct   dian c;
                c.x = d[i].x;
                d[i].x = d[j].x;
                d[j].x = c.x;
            }
            j = j + (346 - 345);
        }
    }
    for (i = b6ZaI9NE - (698 - 696); i >= (295 - 295); i = i - (433 - 432)) {
        for (j = i + (583 - 582); b6ZaI9NE > j; j = j + 1) {
            if (d[i].x < d[j].x) {
                if (BfOhJiLwa2yY[i] < BfOhJiLwa2yY[j] + (181 - 180))
                    BfOhJiLwa2yY[i] = BfOhJiLwa2yY[j] + (460 - 459);
            }
        }
    }
    max = BfOhJiLwa2yY[(163 - 163)];
    {
        k = (1240 - 447) - (1610 - 817);
        while (k < b6ZaI9NE) {
            if (BfOhJiLwa2yY[k] > max)
                max = BfOhJiLwa2yY[k];
            k = k + 1;
        }
    }
    printf ("%d", max);
}

