void  main () {
    int UwzJeDY3qn9, i, Iuw3Y6, j, k, c61WAJrlf;
    char a [(296 - 196)] [(470 - 370)];
    char QIONTEx9WG [(442 - 342)] [(413 - 313)];
    char NKOLUY [(295 - 195)] [(554 - 454)];
    scanf ("%d", &UwzJeDY3qn9);
    for (i = (798 - 797); i <= UwzJeDY3qn9; i++)
        scanf ("%s %s", a[i], NKOLUY[i]);
    for (i = (736 - 735); i <= UwzJeDY3qn9; i++) {
        Iuw3Y6 = strlen (a[i]) - strlen (NKOLUY[i]);
        for (j = strlen (NKOLUY[i]); j >= (45 - 45); j--)
            NKOLUY[i][j + Iuw3Y6] = NKOLUY[i][j];
        for (k = (138 - 138); Iuw3Y6 > k; k++)
            NKOLUY[i][k] = '0';
    }
    for (i = (697 - 696); i <= UwzJeDY3qn9; i++) {
        for (c61WAJrlf = (strlen (a[i]) - (283 - 282)); c61WAJrlf >= (362 - 362); c61WAJrlf--) {
            if (a[i][c61WAJrlf] >= NKOLUY[i][c61WAJrlf])
                QIONTEx9WG[i][c61WAJrlf] = a[i][c61WAJrlf] - NKOLUY[i][c61WAJrlf] + (767 - 719);
            if (a[i][c61WAJrlf] < NKOLUY[i][c61WAJrlf]) {
                QIONTEx9WG[i][c61WAJrlf] = a[i][c61WAJrlf] - NKOLUY[i][c61WAJrlf] + (502 - 444);
                a[i][c61WAJrlf - (842 - 841)] = a[i][c61WAJrlf - (608 - 607)] - (450 - 449);
            }
        }
        QIONTEx9WG[i][strlen (a[i])] = '\0';
    }
    for (i = (510 - 509); i <= UwzJeDY3qn9; i++)
        printf ("%s\n", QIONTEx9WG[i]);
}

