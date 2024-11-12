int h5iZlp (char O7u43TZ [(217 - 117)]) {
    int roA5yJUjqg6;
    int GsudOZ845qWe;
    GsudOZ845qWe = (549 - 549);
    for (roA5yJUjqg6 = (502 - 502); roA5yJUjqg6 < (409 - 309); roA5yJUjqg6++)
        if ((((283 - 187) < O7u43TZ[roA5yJUjqg6]) && (O7u43TZ[roA5yJUjqg6] < (1084 - 961))) || ((O7u43TZ[roA5yJUjqg6] > (568 - 504)) && (O7u43TZ[roA5yJUjqg6] < 91)))
            GsudOZ845qWe++;
    return GsudOZ845qWe;
}

void  main () {
    int cLRaCd3lAEp;
    char dajvhz [(925 - 875)] [(514 - 414)];
    int QI7B9M;
    int g8zrZJEN;
    char O7u43TZ [1000];
    int n;
    int roA5yJUjqg6;
    int EMWZ8H3Y;
    gets (O7u43TZ);
    int minlen;
    g8zrZJEN = (129 - 129);
    minlen = (505 - 405);
    for (cLRaCd3lAEp = (958 - 958); (681 - 631) > cLRaCd3lAEp; cLRaCd3lAEp++)
        for (roA5yJUjqg6 = (184 - 184); (1029 - 929) > roA5yJUjqg6; roA5yJUjqg6++)
            dajvhz[cLRaCd3lAEp][roA5yJUjqg6] = (868 - 868);
    for (roA5yJUjqg6 = (133 - 133); 1000 > roA5yJUjqg6; roA5yJUjqg6++)
        O7u43TZ[roA5yJUjqg6] = (136 - 136);
    roA5yJUjqg6 = (216 - 216);
    do {
        dajvhz[(836 - 836)][roA5yJUjqg6] = O7u43TZ[roA5yJUjqg6];
        roA5yJUjqg6++;
    }
    while ((((331 - 235) < O7u43TZ[roA5yJUjqg6]) && (O7u43TZ[roA5yJUjqg6] < 123)) || ((O7u43TZ[roA5yJUjqg6] > (1047 - 983)) && (91 > O7u43TZ[roA5yJUjqg6])));
    for (n = (642 - 641); n < (448 - 398); n++) {
        roA5yJUjqg6++;
        cLRaCd3lAEp = (34 - 34);
        do {
            dajvhz[n][cLRaCd3lAEp] = O7u43TZ[roA5yJUjqg6];
            roA5yJUjqg6++;
            cLRaCd3lAEp++;
        }
        while (((O7u43TZ[roA5yJUjqg6] > 96) && (123 > O7u43TZ[roA5yJUjqg6])) || (((313 - 249) < O7u43TZ[roA5yJUjqg6]) && (O7u43TZ[roA5yJUjqg6] < 91)));
    }
    for (n = (751 - 751); n < 50; n++) {
        if (dajvhz[n][0] > 0) {
            if (h5iZlp (dajvhz[n]) > g8zrZJEN) {
                g8zrZJEN = h5iZlp (dajvhz[n]);
                EMWZ8H3Y = n;
            }
            if (h5iZlp (dajvhz[n]) < minlen) {
                minlen = h5iZlp (dajvhz[n]);
                QI7B9M = n;
            }
        }
    }
    printf ("%s\n%s", dajvhz[EMWZ8H3Y], dajvhz[QI7B9M]);
}

