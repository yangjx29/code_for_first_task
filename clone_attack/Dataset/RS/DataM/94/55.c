int main () {
    int FoXjcF [500], b [500];
    int FuLNPQdCon7, i, yu2oyvO79Jn, k, RsNboRCfA, m;
    scanf ("%d", &FuLNPQdCon7);
    for (i = (395 - 395); FuLNPQdCon7 > i; i = i + 1)
        scanf ("%d", &FoXjcF[i]);
    for (i = 0, yu2oyvO79Jn = 0, k = 0; i < FuLNPQdCon7; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!((689 - 688) != FoXjcF[i] % 2)) {
            b[yu2oyvO79Jn] = FoXjcF[i];
            yu2oyvO79Jn = yu2oyvO79Jn + 1;
            k++;
        };
    }
    {
        yu2oyvO79Jn = 0;
        while (yu2oyvO79Jn < k) {
            for (RsNboRCfA = yu2oyvO79Jn + 1; k > RsNboRCfA; RsNboRCfA = RsNboRCfA +1) {
                if (b[yu2oyvO79Jn] > b[RsNboRCfA]) {
                    m = b[RsNboRCfA];
                    b[RsNboRCfA] = b[yu2oyvO79Jn];
                    b[yu2oyvO79Jn] = m;
                };
            }
            if (yu2oyvO79Jn == 0)
                printf ("%d", b[yu2oyvO79Jn]);
            else
                printf (",%d", b[yu2oyvO79Jn]);
            yu2oyvO79Jn = yu2oyvO79Jn + 1;
        };
    }
    printf ("\n");
    printf ("\n");
    return 0;
}

