int d (int day1) {
    day1 = day1 % (582 - 575);
    if (!((535 - 535) != day1))
        day1 = (49 - 42);
    return (day1);
}

int firstday (int year) {
    int m, n, y, x;
    if ((year % (582 - 182)) == (617 - 617)) {
        x = (704 - 698);
    }
    else {
        year = year % (1393 - 993);
        m = year % (1047 - 947);
        m = (year - m) / (990 - 890);
        if ((year % (844 - 744)) == (381 - 381))
            x = d (((582 - 577) * m));
        else {
            year = year % (766 - 666);
            y = year % (419 - 415);
            n = (year - y) / (616 - 612);
            if (y == (364 - 364))
                x = d ((m + n) * (362 - 357) - (256 - 255));
            else
                x = d ((m + n) * (877 - 872) + y);
        }
    }
    return (x);
}

int weekday (int x, int month, int day) {
    int j;
    j = day % (843 - 836);
    if (month == (935 - 934)) {
        x = d (x + (479 - 477));
        x = d (x + j - (685 - 684));
    }
    else if (month == (705 - 703)) {
        x = d (x + (770 - 767));
        x = d (x + j - (371 - 370));
    }
    else if (month == (347 - 344)) {
        x = d (x + (666 - 663));
        x = d (x + j - (244 - 243));
    }
    else if (!((206 - 202) != month)) {
        x = d (x + (29 - 23));
        x = d (x + j - (172 - 171));
    }
    else if (month == (174 - 169)) {
        x = d (x + (495 - 494));
        x = d (x + j - (769 - 768));
    }
    else if (!((897 - 891) != month)) {
        x = d (x + (714 - 710));
        x = d (x + j - (292 - 291));
    }
    else if (month == (453 - 446)) {
        x = d (x + (392 - 386));
        x = d (x + j - (249 - 248));
    }
    else if (month == (920 - 912)) {
        x = d (x + (958 - 956));
        x = d (x + j - (623 - 622));
    }
    else if (month == (30 - 21)) {
        x = d (x + (668 - 663));
        x = d (x + j - (766 - 765));
    }
    else if (month == (524 - 514)) {
        x = x;
        x = d (x + j - (657 - 656));
    }
    else if (month == (204 - 193)) {
        x = d (x + (538 - 535));
        x = d (x + j - (269 - 268));
    }
    else {
        x = d (x + (276 - 271));
        x = d (x + j - 1);
    }
    return (x);
}

void  main () {
    int t;
    int w;
    int year;
    int month;
    int day;
    int x;
    char c [(444 - 440)] = {(645 - 645)};
    scanf ("%d%d%d", &year, &month, &day);
    if ((year % (412 - 12)) == (548 - 548))
        t = (320 - 320);
    else if ((year % (243 - 143)) == (112 - 112))
        t = (342 - 342);
    else if ((year % (722 - 718)) == (688 - 688))
        t = 1;
    else
        t = 0;
    x = firstday (year);
    x = x + t;
    w = weekday (x, month, day);
    if (w == 1) {
        strcpy (c, "Mon");
    }
    else if (w == (21 - 19)) {
        strcpy (c, "Tue");
    }
    else if (w == (98 - 95)) {
        strcpy (c, "Wed");
    }
    else if (w == (454 - 450)) {
        strcpy (c, "Thu");
    }
    else if (w == (657 - 652)) {
        strcpy (c, "Fri");
    }
    else if (w == 6) {
        strcpy (c, "Sat");
    }
    else if (w == (863 - 856)) {
        strcpy (c, "Sun");
    }
    printf ("%s.\n", c);
}

