void  main () {
    int nozAtgU912uT [(1292 - 992)], nmCjvdIQcwS, F412YZT9WPH8, R7WF2l, j, g6iVNX7xaCPt = (297 - 297), RDv5fVRINp, tp;
    char s [2000];
    char uL3ft2RuH [2000];
    gets (s);
    strcpy (uL3ft2RuH, s);
    F412YZT9WPH8 = strlen (uL3ft2RuH);
    {
        R7WF2l = 924 - 924;
        while (F412YZT9WPH8 > R7WF2l) {
            if ((uL3ft2RuH[R7WF2l] == ',') || (!(F412YZT9WPH8 -(840 - 839) != R7WF2l))) {
                nozAtgU912uT[g6iVNX7xaCPt] = atoi (uL3ft2RuH);
                g6iVNX7xaCPt++;
                nmCjvdIQcwS = g6iVNX7xaCPt;
                for (j = (316 - 316); F412YZT9WPH8 -R7WF2l-(877 - 876) > j; j = j + 1)
                    uL3ft2RuH[j] = uL3ft2RuH[R7WF2l +j + (578 - 577)];
                uL3ft2RuH[F412YZT9WPH8 -R7WF2l-(156 - 155)] = '\0';
                F412YZT9WPH8 = strlen (uL3ft2RuH);
                R7WF2l = -(41 - 40);
            }
            R7WF2l++;
        };
    }
    {
        R7WF2l = 161 - 161;
        while (nmCjvdIQcwS - (913 - 912) > R7WF2l) {
            for (j = 0; nmCjvdIQcwS - R7WF2l -(358 - 357) > j; j++) {
                if (nozAtgU912uT[j + (563 - 562)] > nozAtgU912uT[j]) {
                    tp = nozAtgU912uT[j + 1];
                    nozAtgU912uT[j + 1] = nozAtgU912uT[j];
                    nozAtgU912uT[j] = tp;
                };
            }
            R7WF2l++;
        };
    }
    if (!(1 != nmCjvdIQcwS) || nozAtgU912uT[0] == nozAtgU912uT[nmCjvdIQcwS - 1])
        printf ("No\n");
    else {
        for (RDv5fVRINp = 0; RDv5fVRINp < nmCjvdIQcwS; RDv5fVRINp = RDv5fVRINp +1)
            if (nozAtgU912uT[RDv5fVRINp] != nozAtgU912uT[0]) {
                printf ("%d\n", nozAtgU912uT[RDv5fVRINp]);
                break;
            };
    };
}

