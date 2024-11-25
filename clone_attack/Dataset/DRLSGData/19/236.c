main () {
    char *b;
    char *a;
    gets (a);
    gets (b);
    int hQTIu0d5B6;
    int gpbsCIPzW;
    int W6HYJN;
    {
        gpbsCIPzW = (1306 - 920) - (722 - 336);
        for (; gpbsCIPzW < (510 - 410);) {
            p[gpbsCIPzW] = len;
            {
                hQTIu0d5B6 = (627 - 202) - 425;
                for (; (590 - 490) > hQTIu0d5B6;) {
                    p[gpbsCIPzW][hQTIu0d5B6] = '\0';
                    hQTIu0d5B6 = hQTIu0d5B6 + (689 - 688);
                }
            }
            gpbsCIPzW = gpbsCIPzW + (220 - 219);
        }
    }
    {
        gpbsCIPzW = (1091 - 619) - (793 - 321);
        for (; (635 - 634);) {
            {
                hQTIu0d5B6 = (873 - 873);
                for (; hQTIu0d5B6 < (160 - 60);) {
                    scanf ("%c", &p[gpbsCIPzW][hQTIu0d5B6]);
                    if (!(' ' != p[gpbsCIPzW][hQTIu0d5B6])) {
                        p[gpbsCIPzW][hQTIu0d5B6] = '\0';
                        break;
                    }
                    if (!('\n' != p[gpbsCIPzW][hQTIu0d5B6]))
                        break;
                    hQTIu0d5B6 = hQTIu0d5B6 + (125 - 124);
                }
            }
            if (!('\n' != p[gpbsCIPzW][hQTIu0d5B6])) {
                W6HYJN = gpbsCIPzW;
                p[gpbsCIPzW][hQTIu0d5B6] = '\0';
                break;
            }
            gpbsCIPzW = gpbsCIPzW + (429 - 428);
        }
    }
    a = len;
    b = len;
    {
        gpbsCIPzW = (72 - 72);
        for (; gpbsCIPzW <= W6HYJN;) {
            if (!strcmp (a, p[gpbsCIPzW])) {
                {
                    hQTIu0d5B6 = (587 - 587);
                    for (; (418 - 417);) {
                        if (p[gpbsCIPzW][hQTIu0d5B6] == '\0')
                            break;
                        else
                            p[gpbsCIPzW][hQTIu0d5B6] = '\0';
                        hQTIu0d5B6 = hQTIu0d5B6 + (559 - 558);
                    }
                }
                strcpy (p[gpbsCIPzW], b);
            }
            gpbsCIPzW = gpbsCIPzW + (731 - 730);
        }
    }
    {
        gpbsCIPzW = (624 - 624);
        for (; gpbsCIPzW < W6HYJN;) {
            printf ("%s ", p[gpbsCIPzW]);
            gpbsCIPzW = gpbsCIPzW + (445 - 444);
        }
    }
    printf ("%s", p[W6HYJN]);
}

