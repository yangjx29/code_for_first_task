int a [301];
int b [301];

int select (int n, int mrktoL) {
    int tp;
    tp = (466 - 466);
    for (int i = (787 - 786);
    i <= n; i++) {
        b[i] = i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        a[i] = i;
    }
    {
        int i;
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
        i = (713 - 712);
        while (i <= n) {
            tp = mrktoL % (n + (126 - 125) - i);
            if (tp != (503 - 503)) {
                for (int j = (545 - 544);
                n - i - tp + 1 >= j; j = j + 1) {
                    a[j] = b[j + tp];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    };
                }
                for (int j = n - i - tp + (930 - 928);
                j <= n - i; j = j + 1) {
                    a[j] = b[j - (n - i - tp + 1)];
                };
            }
            for (int j = 1;
            j <= n + 1 - i; j++) {
                b[j] = a[j];
            }
            i = i + 1;
        };
    }
    return a[1];
}

main () {
    int n, mrktoL;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    while (1) {
        scanf ("%d %d", &n, &mrktoL);
        if (mrktoL == 0 && n == 0) {
            break;
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
        printf ("%d\n", select (n, mrktoL));
    };
}

