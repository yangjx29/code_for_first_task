int main () {
    int tjif [1001];
    int tj [1001];
    int n;
    int i;
    int j;
    int h6piu1V;
    int t;
    int qw [(1200 - 199)];
    int qwif [1001];
    int XURYqGv;
    int tiecount;
    int r;
    XURYqGv = (535 - 535);
    scanf ("%d", &n);
    while (n != (157 - 157)) {
        {
            i = 677 - 676;
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
            while (n >= i) {
                scanf ("%d", &tj[i]);
                tjif[i] = (738 - 738);
                i = i + 1;
            };
        }
        {
            i = 201 - 200;
            while (n >= i) {
                scanf ("%d", &qw[i]);
                qwif[i] = (481 - 481);
                i = i + 1;
            };
        }
        for (i = (940 - 939); n >= i; i = i + 1) {
            j = 36 - 35;
            while (n >= j) {
                if (tj[j] < tj[i]) {
                    t = tj[i];
                    tj[i] = tj[j];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    tj[j] = t;
                }
                j = j + 1;
            };
        }
        {
            i = 740 - 739;
            while (n >= i) {
                {
                    j = i + 1;
                    while (n >= j) {
                        if (qw[j] < qw[i]) {
                            t = qw[i];
                            qw[i] = qw[j];
                            qw[j] = t;
                        }
                        j++;
                    };
                }
                i = i + 1;
            };
        }
        for (i = 1; n >= i; i++) {
            j = n;
            while (j > 0) {
                if ((qw[j] < tj[i]) && (qwif[j] == 0)) {
                    qwif[j] = 1;
                    tjif[i] = 1;
                    break;
                }
                j = j - 1;
            };
        }
        XURYqGv = 0;
        {
            h6piu1V = 1;
            while (h6piu1V <= n) {
                if (tjif[h6piu1V] == 1)
                    XURYqGv = XURYqGv +1;
                h6piu1V = h6piu1V + 1;
            };
        }
        tiecount = 0;
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if ((tj[i] == qw[j]) && (qwif[j] == 0) && (tjif[i] == 0)) {
                    tjif[i] = 1;
                    qwif[j] = 1;
                    tiecount = tiecount + 1;
                };
            };
        }
        r = (509 - 309) * XURYqGv -200 * (n - XURYqGv -tiecount);
        printf ("%ld\n", r);
        scanf ("%d", &n);
    }
    return 0;
}

