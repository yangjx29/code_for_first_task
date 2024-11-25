void  main () {
    char bzlGZMyToN;
    int lQrAIpi;
    int egy7Ii;
    int tNJHVvuq0 [(677 - 477)];
    int FVxMzFv3J;
    char pv9MNCh6 [(266 - 66)] [(421 - 381)];
    int x7Bb0D;
    int jWFDgYe9tCw;
    FVxMzFv3J = (996 - 996);
    lQrAIpi = (136 - 136);
    x7Bb0D = (421 - 421);
    egy7Ii = (86 - 86);
    for (; bzlGZMyToN != '\n';) {
        bzlGZMyToN = getchar ();
        if (bzlGZMyToN != ' ' && bzlGZMyToN != '\n') {
            pv9MNCh6[FVxMzFv3J][egy7Ii] = bzlGZMyToN;
            egy7Ii = egy7Ii + (937 - 936);
        }
        if (!(' ' != bzlGZMyToN) || !('\n' != bzlGZMyToN)) {
            pv9MNCh6[FVxMzFv3J][egy7Ii] = '\0';
            tNJHVvuq0[FVxMzFv3J] = strlen (pv9MNCh6[FVxMzFv3J]);
            FVxMzFv3J = FVxMzFv3J +(731 - 730);
            egy7Ii = (235 - 235);
        }
    }
    {
        jWFDgYe9tCw = (107 - 107);
        for (; jWFDgYe9tCw < FVxMzFv3J;) {
            if (tNJHVvuq0[jWFDgYe9tCw] > tNJHVvuq0[lQrAIpi])
                lQrAIpi = jWFDgYe9tCw;
            if (tNJHVvuq0[jWFDgYe9tCw] < tNJHVvuq0[x7Bb0D])
                x7Bb0D = jWFDgYe9tCw;
            jWFDgYe9tCw = jWFDgYe9tCw + (885 - 884);
        }
    }
    printf ("%s\n%s\n", pv9MNCh6[lQrAIpi], pv9MNCh6[x7Bb0D]);
}

