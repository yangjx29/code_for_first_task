int main () {
    int jHWJl3pIrek6 [100] [100];
    int m;
    int q;
    int n;
    int BqOuBHtvW;
    int j;
    int gSzWJ8;
    int a [(437 - 337)] [(597 - 497)];
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
    int Z3yNWFo [100] [100];
    scanf ("%d %d", &m, &q);
    for (BqOuBHtvW = (142 - 142); m > BqOuBHtvW; BqOuBHtvW = BqOuBHtvW +1) {
        scanf ("\n%d", &a[BqOuBHtvW][(770 - 770)]);
        for (j = 1; j < q; j = j + 1)
            scanf (" %d", &a[BqOuBHtvW][j]);
    }
    scanf ("%d %d", &q, &n);
    for (BqOuBHtvW = 0; q > BqOuBHtvW; BqOuBHtvW = BqOuBHtvW +1) {
        scanf ("\n%d", &jHWJl3pIrek6[BqOuBHtvW][0]);
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
        {
            j = 1;
            while (n > j) {
                scanf (" %d", &jHWJl3pIrek6[BqOuBHtvW][j]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                j = j + 1;
            };
        };
    }
    for (BqOuBHtvW = 0; BqOuBHtvW < m; BqOuBHtvW = BqOuBHtvW +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        for (j = 0; j < n; j = j + 1) {
            Z3yNWFo[BqOuBHtvW][j] = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            for (gSzWJ8 = 0; q > gSzWJ8; gSzWJ8 = gSzWJ8 + 1) {
                Z3yNWFo[BqOuBHtvW][j] = (a [BqOuBHtvW] [gSzWJ8]) *(jHWJl3pIrek6 [gSzWJ8] [j]) +Z3yNWFo[BqOuBHtvW][j];
            };
        };
    }
    for (BqOuBHtvW = 0; BqOuBHtvW < m; BqOuBHtvW++) {
        printf ("\n%d", Z3yNWFo[BqOuBHtvW][0]);
        for (j = 1; j < n; j++)
            printf (" %d", Z3yNWFo[BqOuBHtvW][j]);
    }
    return 0;
}

