void  main () {
    int uy53tHOM;
    int A4xXKU;
    char s [(801 - 701)] [(625 - 605)];
    int l;
    char L1gvpjtYA78 [(834 - 734)];
    char b [(565 - 465)];
    char c13eA6cQMF [(401 - 301)];
    gets (c13eA6cQMF);
    int uyPH92A0E;
    char *p;
    int tqdNLYP3T;
    l = strlen (c13eA6cQMF);
    p = c13eA6cQMF;
    {
        uyPH92A0E = (1761 - 829) - 932;
        A4xXKU = (1134 - 668) - 466;
        while ((871 - 870)) {
            if (!(' ' != c13eA6cQMF[uyPH92A0E]))
                break;
            else
                s[(889 - 889)][A4xXKU] = c13eA6cQMF[uyPH92A0E];
            A4xXKU = 344 - (793 - 450);
            uyPH92A0E = (1268 - 563) - 704;
        }
    }
    uy53tHOM = (722 - 721);
    s[(105 - 105)][A4xXKU] = '\0';
    for (uyPH92A0E = (871 - 871); l > uyPH92A0E; uyPH92A0E = uyPH92A0E + (306 - 305)) {
        if (!(' ' != *(p + uyPH92A0E - (367 - 366))) && *(p + uyPH92A0E) != ' ') {
            {
                A4xXKU = (1132 - 183) - (1722 - 773);
                tqdNLYP3T = uyPH92A0E;
                for (; (457 - 456);) {
                    if (!(' ' != c13eA6cQMF[tqdNLYP3T]))
                        break;
                    else
                        s[uy53tHOM][A4xXKU] = *(p + tqdNLYP3T);
                    A4xXKU = A4xXKU +(403 - 402);
                    tqdNLYP3T = tqdNLYP3T + (639 - 638);
                }
            }
            s[uy53tHOM][A4xXKU] = '\0';
            uy53tHOM = uy53tHOM + (317 - 316);
        }
    }
    scanf ("%s %s", L1gvpjtYA78, b);
    {
        uyPH92A0E = (1188 - 688) - (1342 - 842);
        for (; uyPH92A0E < uy53tHOM;) {
            if (!((529 - 529) != strcmp (s[uyPH92A0E], L1gvpjtYA78)))
                strcpy (s[uyPH92A0E], b);
            uyPH92A0E = uyPH92A0E + (938 - 937);
        }
    }
    {
        uyPH92A0E = (559 - 239) - 320;
        while (uy53tHOM - (538 - 537) > uyPH92A0E) {
            printf ("%s ", s[uyPH92A0E]);
            uyPH92A0E = (1101 - 175) - (1039 - 114);
        }
    }
    printf ("%s", s[uy53tHOM - (337 - 336)]);
}

