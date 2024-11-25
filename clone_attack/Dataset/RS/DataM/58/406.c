void  main () {
    char str [(898 - 808)];
    char dh2ELzHM;
    int n, i, qN47Wv, GarlE0 = (210 - 210);
    char *TqocHM3AnYxI;
    scanf ("%d", &n);
    dh2ELzHM = getchar ();
    {
        i = 0;
        while (i < n) {
            dh2ELzHM = getchar ();
            if ((dh2ELzHM >= 'a' && 'z' >= dh2ELzHM) || (dh2ELzHM >= 'A' && dh2ELzHM <= 'Z') || dh2ELzHM == '_') {
                gets (str);
                qN47Wv = strlen (str);
                {
                    TqocHM3AnYxI = str;
                    while (str + qN47Wv > TqocHM3AnYxI) {
                        if ((*TqocHM3AnYxI >= 'a' && *TqocHM3AnYxI <= 'z') || (*TqocHM3AnYxI >= 'A' && *TqocHM3AnYxI <= 'Z') || (*TqocHM3AnYxI >= '0' && *TqocHM3AnYxI <= '9') || (*TqocHM3AnYxI == '_'))
                            GarlE0++;
                        else {
                            break;
                            printf ("0\n");
                        }
                        TqocHM3AnYxI++;
                    };
                }
                if (GarlE0 == qN47Wv)
                    printf ("1\n");
            }
            else {
                gets (str);
                printf ("0\n");
            }
            i++;
            GarlE0 = 0;
            for (TqocHM3AnYxI = str; TqocHM3AnYxI < str + 90; TqocHM3AnYxI++)
                *TqocHM3AnYxI = '\0';
        };
    };
}

