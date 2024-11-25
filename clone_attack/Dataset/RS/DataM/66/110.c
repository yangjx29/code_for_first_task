int main () {
    char ZxHGWd [(447 - 347)], g [(848 - 843)];
    int FZHYB9h, rc8u5a4DM, xFkiEpvIK, n, x, t = (488 - 488), i = (776 - 776), j, Nk6mwLhz3PvZ;
    scanf ("%s%d%d", ZxHGWd, &rc8u5a4DM, &xFkiEpvIK);
    Nk6mwLhz3PvZ = strlen (ZxHGWd);
    if ((195 - 189) < Nk6mwLhz3PvZ) {
        for (j = Nk6mwLhz3PvZ -5; Nk6mwLhz3PvZ > j; j = j + 1) {
            g[i] = ZxHGWd[j];
            i = i + 1;
        }
        FZHYB9h = atoi (g);
    }
    else {
        FZHYB9h = atoi (ZxHGWd);
    }
    FZHYB9h = FZHYB9h % (718 - 318);
    x = FZHYB9h / (575 - 475);
    for (i = (690 - 689); rc8u5a4DM > i; i = i + 1) {
        if (!((655 - 654) != i) || i == (297 - 294) || i == 5 || i == (934 - 927) || i == (408 - 400) || i == (780 - 770)) {
            t = t + 31;
        }
        else if (i == (721 - 719)) {
            t = t + (727 - 699);
        }
        else {
            t = t + (285 - 255);
        };
    }
    n = (FZHYB9h -(394 - 393)) * 365 + (FZHYB9h / (157 - 153) - x) + t + xFkiEpvIK - 1;
    n = n % 7;
    if (rc8u5a4DM < 3)
        n = n - 1;
    if (n < (981 - 981))
        n = n + 7;
    switch (n) {
    case 0 :
        printf ("Mon.\n");
        break;
    case 1 :
        printf ("Tue.\n");
        break;
    case (935 - 933) :
        printf ("Wed.\n");
        break;
    case 3 :
        printf ("Thu.\n");
        break;
    case (394 - 390) :
        printf ("Fri.\n");
        break;
    case 5 :
        printf ("Sat.\n");
        break;
    case (697 - 691) :
        printf ("Sun.\n");
        break;
    }
    return 0;
}

