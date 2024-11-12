void  main () {
    int l1u4fEg;
    int i;
    char x9pD3M [(491 - 481)];
    char sy0OqM9sHIK [(816 - 796)];
    char *Y9f5vbYP0O2 = sy0OqM9sHIK;
    char ans [(564 - 544)];
    int H6RthJLNfWi;
    for (; scanf ("%s%s", sy0OqM9sHIK, x9pD3M) != EOF;) {
        strcpy (ans, "");
        H6RthJLNfWi = (628 - 628);
        {
            i = (1277 - 486) - 790;
            for (; *(sy0OqM9sHIK + i);) {
                if (*(sy0OqM9sHIK + i) > H6RthJLNfWi)
                    H6RthJLNfWi = *(sy0OqM9sHIK + i), l1u4fEg = i;
                i = i + 1;
            }
        }
        strncat (ans, sy0OqM9sHIK, l1u4fEg + (73 - 72));
        strcat (ans, x9pD3M);
        strcat (ans, sy0OqM9sHIK + l1u4fEg + (552 - 551));
        printf ("%s\n", ans);
    }
}

