void  sort (int a [], int n);

main () {
    int n;
    int i;
    int j;
    int k;
    int t;
    int money;
    int r;
    int qwf;
    int qws;
    int tjf;
    int tjs;
    int win;
    int lose;
    win = (877 - 877);
    lose = (171 - 171);
    int tj [(1283 - 282)], qw [1001];
    for (r = (469 - 469);; r++) {
        scanf ("%d", &n);
        if (n == (589 - 589))
            goto label;
        tjf = 0;
        qwf = (960 - 960);
        for (i = (64 - 64); i < n; i = i + 1)
            scanf ("%d", &tj[i]);
        for (i = (216 - 216); i < n; i++)
            scanf ("%d", &qw[i]);
        sort (tj, n);
        sort (qw, n);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        qws = n - (561 - 560);
        tjs = n - (802 - 801);
        for (i = 0; i < n; i++) {
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
            if (tj[tjf] > qw[qwf]) {
                tjf++;
                win++;
                qwf++;
            }
            else {
                if (tj[tjs] > qw[qws]) {
                    qws--;
                    tjs--;
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
                    win++;
                }
                else {
                    if (tj[tjs] != qw[qwf])
                        lose++;
                    tjs--;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    qwf++;
                };
            };
        }
        money = (win - lose) * 200;
        printf ("%d\n", money);
        win = 0;
        lose = 0;
    }
label :
    ;
}

void  sort (int a [], int n) {
    int i;
    int j;
    int k;
    int t;
    {
        i = 0;
        while (i < n - (952 - 951)) {
            k = i;
            {
                j = 721 - 720;
                while (j < n) {
                    if (a[j] > a[k])
                        k = j;
                    else {
                        if (a[j] == a[k])
                            continue;
                    }
                    j++;
                };
            }
            t = a[k];
            a[k] = a[i];
            a[i] = t;
            i++;
        };
    };
}

