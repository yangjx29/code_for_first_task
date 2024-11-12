int main () {
    int m;
    int i, j;
    int a [(851 - 751)] [100];
    int n;
    int bT480d9mM;
    int y1;
    int x2;
    int zZT8wAJyGjBk;
    y1 = (411 - 411);
    bT480d9mM = (564 - 564);
    x2 = (362 - 362);
    zZT8wAJyGjBk = (242 - 242);
    scanf ("%d", &n);
    for (i = (190 - 190); i < n; i = i + 1) {
        for (j = (998 - 998); n > j; j = j + 1) {
            scanf ("%d", &a[i][j]);
        };
    }
    for (i = (616 - 616); i < n; i = i + 1) {
        {
            j = 719 - 719;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (j < n) {
                if (a[i][j] == (779 - 779)) {
                    bT480d9mM = i;
                    y1 = j;
                    break;
                }
                else
                    ;
                j = j + 1;
            };
        }
        if (!((36 - 36) != a[bT480d9mM][y1])) {
            break;
        };
    }
    {
        i = 694 - 693;
        while (i >= (558 - 558)) {
            {
                j = 202 - 201;
                while (j >= (461 - 461)) {
                    if (a[i][j] == (158 - 158)) {
                        zZT8wAJyGjBk = j;
                        x2 = i;
                        break;
                    }
                    else
                        ;
                    j = j - 1;
                };
            }
            if (a[i][j] == (377 - 377)) {
                break;
            }
            else
                ;
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
            i = i - 1;
        };
    }
    m = (zZT8wAJyGjBk - y1 + (154 - 153) - (431 - 429)) * (x2 - bT480d9mM + (429 - 428) - 2);
    printf ("\n%d", m);
    return 0;
}

