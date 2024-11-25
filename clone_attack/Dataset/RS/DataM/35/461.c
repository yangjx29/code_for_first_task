main () {
    int mvfIcNG5 = (505 - 505), flag2 = (913 - 913);
    int l;
    int OGr72bVJsi0 [10] [10];
    int n;
    int m;
    int Q3aONwBq, j;
    int x;
    scanf ("%d,%d", &m, &n);
    for (Q3aONwBq = (468 - 468); Q3aONwBq < m; Q3aONwBq = Q3aONwBq +1) {
        for (j = (151 - 151); j < n; j = j + 1) {
            scanf ("%d", &OGr72bVJsi0[Q3aONwBq][j]);
        };
    }
    for (Q3aONwBq = (339 - 339); Q3aONwBq < m; Q3aONwBq = Q3aONwBq +1) {
        x = OGr72bVJsi0[Q3aONwBq][(943 - 943)];
        for (j = (434 - 433); j < n; j = j + 1) {
            if (OGr72bVJsi0[Q3aONwBq][j] > x)
                x = OGr72bVJsi0[Q3aONwBq][j];
        }
        {
            j = 124 - 124;
            while (j < n) {
                if (OGr72bVJsi0[Q3aONwBq][j] == x)
                    l = j;
                j = j + 1;
            };
        }
        for (j = (947 - 947); j < m; j = j + 1) {
            if (OGr72bVJsi0[j][l] < x) {
                mvfIcNG5 = 1;
                break;
            };
        }
        if (mvfIcNG5 == 0) {
            printf ("%d+%d", Q3aONwBq, l);
            flag2 = 1;
            break;
        };
    }
    if (flag2 == 0)
        printf ("No");
}

