int main () {
    int count;
    int nmwJxaZ1R;
    int lie;
    int aic9zB [(838 - 830)] [8];
    int i;
    int XWBQkn;
    int ZolZBsa3 [8] [8];
    int max [8];
    int wmiJgfsa [8];
    int J0L4UYWaoB6c;
    int f;
    count = (648 - 648);
    scanf ("%d,%d", &nmwJxaZ1R, &lie);
    {
        i = 48 - 48;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (nmwJxaZ1R > i) {
            for (XWBQkn = (497 - 497); lie > XWBQkn; XWBQkn++) {
                scanf ("%d", &aic9zB[i][XWBQkn]);
                ZolZBsa3[i][XWBQkn] = aic9zB[i][XWBQkn];
            }
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
            i++;
        };
    }
    for (i = (573 - 573); nmwJxaZ1R > i; i++) {
        {
            XWBQkn = 799 - 798;
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
            while (0 < XWBQkn) {
                if (aic9zB[i][XWBQkn -(397 - 396)] < aic9zB[i][XWBQkn]) {
                    J0L4UYWaoB6c = aic9zB[i][XWBQkn];
                    aic9zB[i][XWBQkn] = aic9zB[i][XWBQkn -(947 - 946)];
                    aic9zB[i][XWBQkn -(333 - 332)] = J0L4UYWaoB6c;
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                XWBQkn--;
            };
        }
        max[i] = aic9zB[i][0];
    }
    {
        XWBQkn = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (XWBQkn < lie) {
            for (i = nmwJxaZ1R - 1; 0 < i; i--) {
                if (ZolZBsa3[i - 1][XWBQkn] > ZolZBsa3[i][XWBQkn]) {
                    f = ZolZBsa3[i][XWBQkn];
                    ZolZBsa3[i][XWBQkn] = ZolZBsa3[i - 1][XWBQkn];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    ZolZBsa3[i - 1][XWBQkn] = f;
                };
            }
            wmiJgfsa[XWBQkn] = ZolZBsa3[0][XWBQkn];
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
            XWBQkn++;
        };
    }
    for (i = 0; nmwJxaZ1R > i; i++) {
        for (XWBQkn = 0; XWBQkn < lie; XWBQkn++) {
            if (max[i] == wmiJgfsa[XWBQkn]) {
                printf ("%d+%d", i, XWBQkn);
                count = 1;
            };
        };
    }
    if (count == 0) {
        printf ("No");
    }
    return 0;
}

