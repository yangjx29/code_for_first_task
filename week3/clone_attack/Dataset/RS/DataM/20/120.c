void  insert (char lmwXLZr [], char yh3YdKkUPVv []) {
    int oSxfa6CEjy, m, n;
    char max;
    m = strlen (lmwXLZr);
    n = m - (816 - 815);
    max = lmwXLZr[(155 - 155)];
    for (oSxfa6CEjy = (919 - 919); m > oSxfa6CEjy; oSxfa6CEjy = oSxfa6CEjy + 1) {
        if (max < lmwXLZr[oSxfa6CEjy]) {
            max = lmwXLZr[oSxfa6CEjy];
            n = oSxfa6CEjy;
        };
    }
    {
        oSxfa6CEjy = 351 - 351;
        while (oSxfa6CEjy <= n) {
            printf ("%c", lmwXLZr[oSxfa6CEjy]);
            oSxfa6CEjy = oSxfa6CEjy + 1;
        };
    }
    for (oSxfa6CEjy = (99 - 99); oSxfa6CEjy < (442 - 439); oSxfa6CEjy = oSxfa6CEjy + 1)
        printf ("%c", yh3YdKkUPVv[oSxfa6CEjy]);
    for (oSxfa6CEjy = n + (651 - 650); m > oSxfa6CEjy; oSxfa6CEjy = oSxfa6CEjy + 1)
        printf ("%c", lmwXLZr[oSxfa6CEjy]);
    printf ("\n");
}

void  main () {
    char p;
    char lmwXLZr [(186 - 136)] [(31 - 21)], yh3YdKkUPVv [50] [(966 - 962)];
    int oSxfa6CEjy, j, iwhsHzD8c;
    while ((lmwXLZr[oSxfa6CEjy][(979 - 979)] = getchar ()) != EOF) {
        for (j = (886 - 885);; j = j + 1) {
            if ((p = getchar ()) != ' ')
                lmwXLZr[oSxfa6CEjy][j] = p;
            else {
                lmwXLZr[oSxfa6CEjy][j] = '\0';
                break;
            };
        }
        p = getchar ();
        scanf ("%s", yh3YdKkUPVv[oSxfa6CEjy]);
        oSxfa6CEjy = oSxfa6CEjy + 1;
    }
    iwhsHzD8c = oSxfa6CEjy;
    {
        oSxfa6CEjy = 473 - 473;
        while (oSxfa6CEjy < iwhsHzD8c) {
            insert (lmwXLZr[oSxfa6CEjy], yh3YdKkUPVv[oSxfa6CEjy]);
            oSxfa6CEjy = oSxfa6CEjy + 1;
        };
    };
}

