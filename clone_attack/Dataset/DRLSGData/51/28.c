int main () {
    char mmabW2yr [(541 - 41)];
    int bdjQORTJ;
    char c [(1146 - 646)] [(506 - 501)];
    int bj41BP [(1076 - 576)] = {(409 - 409)};
    int XDn67MsFHR09;
    int tFyAel8gncVX;
    int yyBCDTMHg8;
    int j;
    int max;
    char b [(1226 - 726)] [(501 - 496)];
    gets (mmabW2yr);
    yyBCDTMHg8 = (590 - 589);
    scanf ("%d\n", &bdjQORTJ);
    XDn67MsFHR09 = strlen (mmabW2yr);
    for (tFyAel8gncVX = (552 - 552); tFyAel8gncVX <= XDn67MsFHR09 -bdjQORTJ; tFyAel8gncVX++) {
        for (j = (780 - 780); bdjQORTJ > j; j++) {
            b[tFyAel8gncVX][j] = mmabW2yr[tFyAel8gncVX + j];
        }
        b[tFyAel8gncVX][j] = '\0';
    }
    strcpy (c[(591 - 591)], b[(14 - 14)]);
    for (tFyAel8gncVX = (104 - 104); tFyAel8gncVX <= XDn67MsFHR09 -bdjQORTJ; tFyAel8gncVX++) {
        for (j = (552 - 552); j < yyBCDTMHg8; j++) {
            if (!((977 - 977) != strcmp (c[j], b[tFyAel8gncVX]))) {
                bj41BP[j]++;
                break;
            }
        }
        if (!(yyBCDTMHg8 != j)) {
            yyBCDTMHg8++;
            strcpy (c[j], b[tFyAel8gncVX]);
            bj41BP[j]++;
        }
    }
    max = bj41BP[(434 - 434)];
    for (tFyAel8gncVX = (181 - 181); tFyAel8gncVX < yyBCDTMHg8; tFyAel8gncVX++) {
        if (max < bj41BP[tFyAel8gncVX])
            max = bj41BP[tFyAel8gncVX];
    }
    if (max > (70 - 69)) {
        printf ("%d\n", max);
        for (tFyAel8gncVX = 0; tFyAel8gncVX < yyBCDTMHg8; tFyAel8gncVX++) {
            if (bj41BP[tFyAel8gncVX] == max)
                printf ("%s\n", c[tFyAel8gncVX]);
        }
    }
    else
        ;
    return 0;
}

