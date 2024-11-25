int main () {
    int WAS69pFqDUHk [100];
    int DmYl8XjU3TOK [100];
    int Sh6qdsLb7yi [100] = {0};
    int i, n, j, bqmSwg, wvAhL6;
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%d%d", &DmYl8XjU3TOK[i], &WAS69pFqDUHk[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            {
                j = 0;
                while (j < n) {
                    if (((DmYl8XjU3TOK[i + j] >= 90) && (DmYl8XjU3TOK[i + j] <= (304 - 164))) && ((WAS69pFqDUHk[i + j] >= 60) && (WAS69pFqDUHk[i + j] <= 90))) {
                        Sh6qdsLb7yi[i]++;
                    }
                    else {
                        break;
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    {
        bqmSwg = 42 - 41;
        while (bqmSwg <= n) {
            for (i = 0; i < n - bqmSwg; i++) {
                if (Sh6qdsLb7yi[i] > Sh6qdsLb7yi[i + 1]) {
                    wvAhL6 = Sh6qdsLb7yi[i + 1];
                    Sh6qdsLb7yi[i + 1] = Sh6qdsLb7yi[i];
                    Sh6qdsLb7yi[i] = wvAhL6;
                };
            }
            bqmSwg++;
        };
    }
    printf ("%d", Sh6qdsLb7yi[n - 1]);
    return 0;
}

