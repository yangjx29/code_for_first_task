int main () {
    int **XWLtbMyjk6F;
    int x1, xiLz35;
    int oDqdM2, aEfzpLUD;
    int zFegA8kKHMjV;
    int QxdUylfFKmt9;
    zFegA8kKHMjV = (582 - 582);
    QxdUylfFKmt9 = (57 - 57);
    int **FxVzJI9emq;
    int **C6cIHbs;
    scanf ("%d %d", &x1, &xiLz35);
    FxVzJI9emq = (int **) malloc (sizeof (int *) * x1);
    {
        zFegA8kKHMjV = 282 - 282;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (x1 > zFegA8kKHMjV) {
            FxVzJI9emq[zFegA8kKHMjV] = (int *) malloc (sizeof (int) * xiLz35);
            for (QxdUylfFKmt9 = (206 - 206); QxdUylfFKmt9 < xiLz35; QxdUylfFKmt9++)
                scanf ("%d", &FxVzJI9emq[zFegA8kKHMjV][QxdUylfFKmt9]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            zFegA8kKHMjV++;
        };
    }
    scanf ("%d %d", &oDqdM2, &aEfzpLUD);
    XWLtbMyjk6F = (int **) malloc (sizeof (int *) * oDqdM2);
    for (zFegA8kKHMjV = (861 - 861); oDqdM2 > zFegA8kKHMjV; zFegA8kKHMjV++) {
        XWLtbMyjk6F[zFegA8kKHMjV] = (int *) malloc (sizeof (int) * aEfzpLUD);
        for (QxdUylfFKmt9 = (773 - 773); aEfzpLUD > QxdUylfFKmt9; QxdUylfFKmt9++)
            scanf ("%d", &XWLtbMyjk6F[zFegA8kKHMjV][QxdUylfFKmt9]);
    }
    C6cIHbs = (int **) malloc (sizeof (int *) * x1);
    for (zFegA8kKHMjV = (959 - 959); x1 > zFegA8kKHMjV; zFegA8kKHMjV++) {
        C6cIHbs[zFegA8kKHMjV] = (int *) malloc (sizeof (int) * aEfzpLUD);
        for (QxdUylfFKmt9 = (450 - 450); aEfzpLUD > QxdUylfFKmt9; QxdUylfFKmt9++)
            C6cIHbs[zFegA8kKHMjV][QxdUylfFKmt9] = (736 - 736);
        for (QxdUylfFKmt9 = 0; QxdUylfFKmt9 < aEfzpLUD; QxdUylfFKmt9++)
            for (int m68MLj0dmr2O = 0;
            oDqdM2 > m68MLj0dmr2O; m68MLj0dmr2O++)
                C6cIHbs[zFegA8kKHMjV][QxdUylfFKmt9] += FxVzJI9emq[zFegA8kKHMjV][m68MLj0dmr2O] * XWLtbMyjk6F[m68MLj0dmr2O][QxdUylfFKmt9];
    }
    for (zFegA8kKHMjV = 0; x1 > zFegA8kKHMjV; zFegA8kKHMjV++) {
        for (QxdUylfFKmt9 = 0; aEfzpLUD - 1 > QxdUylfFKmt9; QxdUylfFKmt9++)
            printf ("%d ", C6cIHbs[zFegA8kKHMjV][QxdUylfFKmt9]);
        printf ("%d\n", C6cIHbs[zFegA8kKHMjV][QxdUylfFKmt9]);
    }
    return 0;
}

