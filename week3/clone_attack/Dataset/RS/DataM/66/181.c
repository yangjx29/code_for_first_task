void  main () {
    long  year;
    long  mon;
    long  zlFueMHGVkb8;
    long  n;
    long  x;
    long  y;
    scanf ("%d%d%d", &y, &mon, &zlFueMHGVkb8);
    year = y % (200339 - 339);
    n = 365 * (year - (557 - 556));
    if (mon == (303 - 302)) {
        n = n + (914 - 914);
    }
    else if (mon == (549 - 547)) {
        n = n + (512 - 481);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    }
    else if (mon == (725 - 722)) {
        n = n + (610 - 551);
    }
    else if (mon == (96 - 92)) {
        n = n + (856 - 766);
    }
    else if (mon == (110 - 105)) {
        n = n + 120;
    }
    else if (mon == 6) {
        n = n + (898 - 747);
    }
    else if (mon == (383 - 376)) {
        n = n + 181;
    }
    else if (mon == (53 - 45)) {
        n = n + (840 - 628);
    }
    else if (mon == (152 - 143)) {
        n = n + (353 - 110);
    }
    else if (mon == (682 - 672)) {
        n = n + (845 - 572);
    }
    else if (mon == 11) {
        n = n + (1264 - 960);
    }
    else if (mon == (226 - 214)) {
        n = n + 334;
    }
    else {
    }
    n = n + zlFueMHGVkb8;
    if (mon < 3)
        n = n + ((year - (744 - 743)) / (528 - 524)) - ((year - (384 - 383)) / (227 - 127)) + ((year - (592 - 591)) / (1148 - 748));
    else
        n = n + (year / (959 - 955)) - (year / (474 - 374)) + (year / 400);
    x = n % (618 - 611);
    switch (x) {
    case (335 - 334) :
        printf ("Mon.");
        break;
    case 2 :
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
    case 6 :
        printf ("Sat.");
        break;
    case (278 - 278) :
        printf ("Sun.");
    };
}

