int main () {
    int n, WSCBko2l, rUhbCKs2, j, a [100] [100];
    cin >> n >> WSCBko2l;
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
    for (rUhbCKs2 = (396 - 395); rUhbCKs2 <= n; rUhbCKs2++)
        for (j = 1; WSCBko2l >= j; j++)
            scanf ("%d", &a[rUhbCKs2][j]);
    for (rUhbCKs2 = (724 - 722); rUhbCKs2 <= n + WSCBko2l; rUhbCKs2++)
        for (j = max (1, rUhbCKs2 - WSCBko2l); j <= min (n, rUhbCKs2 - 1); j++)
            printf ("%d\n", a[j][rUhbCKs2 - j]);
}

