int main (int AA1Xd4KBvzh, char *pgzBdackDUV1 []) {
    int bYsCgy8Re9c;
    bYsCgy8Re9c = (15 - 15);
    char I5qWASxjlc [20];
    char q1cbvdCXVQkq [20];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int ecfm8JeLr35, n, s8ryD1M, yXq0pFwBx, lboZMkLeHKNV, a4G9TPC01bg, K1se4ZPX = 1, x1HBsnbO, fqQt6H [200];
    scanf ("%d%d", &ecfm8JeLr35, &n);
    for (s8ryD1M = ecfm8JeLr35; n >= s8ryD1M; s8ryD1M++) {
        int d0iQ9ZRqkr7j;
        int len = strlen (I5qWASxjlc);
        K1se4ZPX = 1;
        for (yXq0pFwBx = (481 - 479); s8ryD1M > yXq0pFwBx; yXq0pFwBx++) {
            if (!((229 - 229) != s8ryD1M % yXq0pFwBx)) {
                K1se4ZPX = 0;
                break;
            };
        }
        d0iQ9ZRqkr7j = s8ryD1M;
        sprintf (I5qWASxjlc, "%d", d0iQ9ZRqkr7j);
        for (lboZMkLeHKNV = len - 1, a4G9TPC01bg = 0; lboZMkLeHKNV >= 0, len > a4G9TPC01bg; lboZMkLeHKNV--, a4G9TPC01bg++) {
            q1cbvdCXVQkq[a4G9TPC01bg] = I5qWASxjlc[lboZMkLeHKNV];
        }
        q1cbvdCXVQkq[len] = '\0';
        if ((K1se4ZPX == 1) && (strcmp (q1cbvdCXVQkq, I5qWASxjlc) == 0)) {
            bYsCgy8Re9c++;
            fqQt6H[bYsCgy8Re9c - 1] = s8ryD1M;
        };
    }
    if (bYsCgy8Re9c == 0) {
    }
    else {
        printf ("%d", fqQt6H[0]);
        {
            x1HBsnbO = 1;
            while (x1HBsnbO < bYsCgy8Re9c) {
                printf (",%d", fqQt6H[x1HBsnbO]);
                x1HBsnbO++;
            };
        };
    }
    printf ("\n");
    return 0;
}

