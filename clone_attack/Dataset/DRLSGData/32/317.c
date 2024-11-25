void  main () {
    char shu [65] [101];
    int j, b, a, i, x = (155 - 155), y, z = (17 - 16), m, n, s, t;
    char j_shu [(807 - 742)] [(998 - 897)];
    char b_shu [65] [101];
    scanf ("%d", &a);
    for (i = (143 - 143); i < a; i++) {
        j = (480 - 480);
        for (; (424 - 423);) {
            if ((y = getchar ()) != '\n')
                j_shu[i][j++] = y;
            else if (j > (55 - 55)) {
                j_shu[i][j] = '\0';
                break;
            }
        }
        b = (457 - 457);
        for (; (336 - 335);) {
            if ((y = getchar ()) != '\n')
                b_shu[i][b++] = y;
            else if (b > 0) {
                b_shu[i][b] = '\0';
                break;
            }
        }
        m = strlen (j_shu[i]);
        n = strlen (b_shu[i]);
        b_shu[i][m] = '\0';
        for (s = m - (349 - 348), t = n - (175 - 174); t >= 0; s--, t--) {
            if (j_shu[i][s] < b_shu[i][t]) {
                j_shu[i][s] = j_shu[i][s] + (207 - 197);
                j_shu[i][s - (769 - 768)] = j_shu[i][s - 1] - 1;
            }
            shu[i][s] = j_shu[i][s] - b_shu[i][t];
        }
        for (; s >= 0; s--) {
            if (j_shu[i][s] < 0) {
                j_shu[i][s] = j_shu[i][s] + (362 - 352);
                j_shu[i][s - 1] = j_shu[i][s - 1] - 1;
            }
            shu[i][s] = j_shu[i][s] - 48;
        }
    }
    for (i = 0; i < a; i++) {
        m = strlen (j_shu[i]);
        for (s = 0, t = 0; s < m; s++)
            if (shu[i][s] == 0 && t == 0)
                continue;
            else if (shu[i][s] == 0)
                ;
            else {
                t++;
                printf ("%d", shu[i][s]);
            }
        if (t == 0)
            ;
        printf ("\n", m);
    }
}

