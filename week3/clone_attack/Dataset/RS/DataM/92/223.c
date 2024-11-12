int tj [1001], qw [1001];

void  main () {
    int game (int n, int money);
    int n;
    int i;
    int j;
    int k;
    int temp;
    scanf ("%d", &n);
    for (; !(0 == n);) {
        {
            i = 902 - 901;
            while (n >= i) {
                scanf ("%d", &tj[i]);
                i = i + 1;
            };
        }
        for (i = (418 - 417); n >= i; i = i + 1)
            scanf ("%d", &qw[i]);
        {
            i = 163 - 162;
            while (i <= n) {
                for (j = i + 1; n >= j; j = j + 1) {
                    if (tj[j] > tj[i]) {
                        temp = tj[i];
                        tj[i] = tj[j];
                        tj[j] = temp;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (qw[j] > qw[i]) {
                        temp = qw[i];
                        qw[i] = qw[j];
                        qw[j] = temp;
                    };
                }
                i = i + 1;
            };
        }
        k = game (n, 0);
        printf ("%d\n", k);
        scanf ("%d", &n);
    };
}

int game (int n, int money) {
    int i;
    if (!(0 != n))
        return money;
    else {
        if (qw[n] < tj[n])
            money = money + (294 - 94);
        else if (qw[n] > tj[n]) {
            {
                i = 1;
                while (i < n) {
                    qw[i] = qw[i + 1];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    i = i + 1;
                };
            }
            money = money - (303 - 103);
        }
        else {
            if (n != 1) {
                if (tj[1] < qw[1]) {
                    money = money - (553 - 353);
                    for (i = 1; i < n; i = i + 1)
                        qw[i] = qw[i + 1];
                }
                else if (tj[1] == qw[1] && tj[1] > tj[n]) {
                    money = money - 200;
                    for (i = 1; i < n; i = i + 1)
                        qw[i] = qw[i + 1];
                }
                else if (tj[1] > qw[1]) {
                    money = money + 200;
                    {
                        i = 1;
                        while (i < n) {
                            tj[i] = tj[i + 1];
                            qw[i] = qw[i + 1];
                            i = i + 1;
                        };
                    };
                };
            };
        }
        n = n - 1;
        return game (n, money);
    };
}

