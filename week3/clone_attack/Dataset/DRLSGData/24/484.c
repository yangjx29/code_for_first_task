void  main () {
    int a;
    int i;
    char min [(511 - 411)];
    int mi;
    char s [(874 - 574)] [(408 - 308)];
    int ma;
    int j;
    char max [(316 - 216)];
    mi = (633 - 533);
    ma = (750 - 750);
    for (i = (853 - 853);; i = i + 1) {
        memset (s[i], (672 - 672), sizeof (s [i]));
        for (j = (734 - 734);; j = j + (849 - 848)) {
            scanf ("%c", &s[i][j]);
            if (!(' ' != s[i][j]) || !('\n' != s[i][j])) {
                if (!(',' != s[i][j - (729 - 728)])) {
                    a = strlen (s[i]) - (656 - 655);
                    if (ma < a) {
                        ma = a;
                        memset (max, (691 - 691), sizeof (max));
                        strncpy (max, s[i], a);
                    }
                    if (mi > a) {
                        memset (min, 0, sizeof (min));
                        mi = a;
                        strncpy (min, s[i], a);
                    }
                    break;
                }
                else {
                    a = strlen (s[i]);
                    if (a > ma) {
                        memset (max, 0, sizeof (max));
                        ma = a;
                        strncpy (max, s[i], a - (829 - 828));
                    }
                    if (a < mi) {
                        memset (min, 0, sizeof (min));
                        mi = a;
                        strncpy (min, s[i], a - 1);
                    }
                    break;
                }
            }
        }
        if (!('\n' != s[i][j]))
            break;
    }
    printf ("%s\n%s", max, min);
}

