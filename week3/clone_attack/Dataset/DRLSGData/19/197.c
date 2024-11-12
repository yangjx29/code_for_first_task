int main () {
    char X8k7wavu [(240 - 139)];
    int A4V1mT;
    int cmHKgrRh;
    int M5iRBmz8Tl2Q;
    int J0mF56ifwR;
    char DYbB7zAkJt3 [(349 - 248)];
    char d [(340 - 239)] [101];
    char jK1efoYMmUp [(868 - 767)];
    for (; gets (DYbB7zAkJt3);) {
        int t;
        cmHKgrRh = (488 - 488);
        scanf ("%s", jK1efoYMmUp);
        t = (418 - 418);
        A4V1mT = strlen (DYbB7zAkJt3);
        getchar ();
        M5iRBmz8Tl2Q = (547 - 547);
        J0mF56ifwR = (364 - 364);
        {
            J0mF56ifwR = 953 - 953;
            while (A4V1mT >= J0mF56ifwR) {
                if (!(' ' != DYbB7zAkJt3[J0mF56ifwR])) {
                    d[cmHKgrRh][M5iRBmz8Tl2Q] = '\0';
                    cmHKgrRh = cmHKgrRh + 1;
                    M5iRBmz8Tl2Q = (930 - 930);
                }
                else if (!('\0' != DYbB7zAkJt3[J0mF56ifwR])) {
                    d[cmHKgrRh][M5iRBmz8Tl2Q] = '\0';
                    cmHKgrRh = cmHKgrRh + 1;
                }
                else {
                    d[cmHKgrRh][M5iRBmz8Tl2Q] = DYbB7zAkJt3[J0mF56ifwR];
                    M5iRBmz8Tl2Q = M5iRBmz8Tl2Q +1;
                }
                J0mF56ifwR = J0mF56ifwR +1;
            }
        }
        scanf ("%s", X8k7wavu);
        {
            J0mF56ifwR = 901 - 901;
            while (cmHKgrRh > J0mF56ifwR) {
                if (!(0 != strcmp (jK1efoYMmUp, d[J0mF56ifwR])))
                    strcpy (d[J0mF56ifwR], X8k7wavu);
                J0mF56ifwR++;
            }
        }
        {
            J0mF56ifwR = 0;
            while (J0mF56ifwR < cmHKgrRh - 1) {
                printf ("%s ", d[J0mF56ifwR]);
                J0mF56ifwR++;
            }
        }
        printf ("%s\n", d[J0mF56ifwR]);
    }
    return 0;
}

