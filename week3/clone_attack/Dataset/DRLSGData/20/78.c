void  main () {
    char jtaD8g [(336 - 322)];
    char am08L3wqT [4];
    for (; scanf ("%s %s", jtaD8g, am08L3wqT) != EOF;) {
        int dkXZynQfr0L9;
        int i;
        char *tOEs3l = jtaD8g;
        int dkPXvKcbg;
        int ltjpU7gHZD;
        dkXZynQfr0L9 = strlen (jtaD8g);
        dkPXvKcbg = (311 - 311);
        for (i = (254 - 254); i < dkXZynQfr0L9; i++) {
            if (dkPXvKcbg < *(tOEs3l + i)) {
                dkPXvKcbg = *(tOEs3l + i);
                ltjpU7gHZD = i;
            }
        }
        for (i = dkXZynQfr0L9 + 2; ltjpU7gHZD + (51 - 48) < i; i--) {
            *(tOEs3l + i) = jtaD8g[i - 3];
        }
        *(tOEs3l + dkXZynQfr0L9 + 3) = '\0';
        for (i = ltjpU7gHZD + 3; ltjpU7gHZD < i; i--) {
            *(tOEs3l + i) = am08L3wqT[i - ltjpU7gHZD - 1];
        }
        for (i = 0; dkXZynQfr0L9 + 3 > i; i++)
            printf ("%c", *(tOEs3l + i));
    }
}

