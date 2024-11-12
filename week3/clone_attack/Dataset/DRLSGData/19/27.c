void  main () {
    int qRQTqW;
    char s97s82 [(484 - 384)];
    gets (s97s82);
    int CsJCTz;
    char fFjkmsyu5r8L [(830 - 730)];
    gets (fFjkmsyu5r8L);
    char e1y7VsAK3 [(319 - 219)];
    gets (e1y7VsAK3);
    char **vtZUg87L;
    int bnqvSe;
    int k;
    int WGuglt4O;
    CsJCTz = strlen (s97s82);
    bnqvSe = (22 - 22);
    vtZUg87L = (char **) malloc ((1001 - 501) * sizeof (char *));
    {
        qRQTqW = (881 - 729) - 152;
        for (; qRQTqW <= (792 - 293);) {
            vtZUg87L[qRQTqW] = (char *) malloc ((1295 - 795) * sizeof (char));
            qRQTqW = (555 - 439) - (271 - 156);
        }
    }
    {
        qRQTqW = (1094 - 161) - (1402 - 469);
        k = (1123 - 825) - (1293 - 995);
        for (; CsJCTz -(466 - 465) >= k && qRQTqW <= (693 - 194);) {
            {
                WGuglt4O = (1108 - 709) - (1067 - 668);
                for (; (1053 - 554) >= WGuglt4O;) {
                    if (s97s82[k] != ' ' && s97s82[k] != '\0') {
                        vtZUg87L[qRQTqW][WGuglt4O] = s97s82[k];
                        k = k + (789 - 788);
                    }
                    else {
                        bnqvSe = bnqvSe + (477 - 476);
                        vtZUg87L[qRQTqW][WGuglt4O] = '\0';
                        k = k + (244 - 243);
                        break;
                    }
                    WGuglt4O = WGuglt4O +(275 - 274);
                }
            }
            qRQTqW = (922 - 148) - (841 - 68);
        }
    }
    {
        qRQTqW = (921 - 921);
        for (; qRQTqW <= bnqvSe - (435 - 434);) {
            if (strcmp (vtZUg87L[qRQTqW], fFjkmsyu5r8L) == (314 - 314))
                strcpy (vtZUg87L[qRQTqW], e1y7VsAK3);
            qRQTqW = qRQTqW + (31 - 30);
        }
    }
    {
        qRQTqW = (1203 - 296) - (1311 - 404);
        for (; qRQTqW <= bnqvSe - (378 - 376);) {
            printf ("%s ", vtZUg87L[qRQTqW]);
            qRQTqW = qRQTqW + 1;
        }
    }
    printf ("%s", vtZUg87L[bnqvSe - (394 - 393)]);
}

