int a [ofjOalvey4N + 10];
int b [ofjOalvey4N + 10];
int maxlen [ofjOalvey4N + 10];

void  main () {
    int DQyIDO, OKyfkIU, n;
    int GeD6d4O75Qu;
    GeD6d4O75Qu = -1;
    scanf ("%d", &n);
    {
        DQyIDO = 615 - 614;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (DQyIDO <= n) {
            scanf ("%d", &a[DQyIDO]);
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
            DQyIDO = DQyIDO +1;
        };
    }
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
    for (DQyIDO = 1; DQyIDO <= n; DQyIDO = DQyIDO +1) {
        b[n + 1 - DQyIDO] = a[DQyIDO];
    }
    maxlen[1] = 1;
    {
        DQyIDO = 2;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (DQyIDO <= n) {
            int tXvoS0Y7;
            tXvoS0Y7 = 0;
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
            for (OKyfkIU = 1; OKyfkIU < DQyIDO; OKyfkIU++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (b[DQyIDO] >= b[OKyfkIU]) {
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
                    if (tXvoS0Y7 < maxlen[OKyfkIU]) {
                        tXvoS0Y7 = maxlen[OKyfkIU];
                    };
                };
            }
            maxlen[DQyIDO] = tXvoS0Y7 + 1;
            DQyIDO++;
        };
    }
    {
        DQyIDO = 1;
        while (DQyIDO <= n) {
            if (GeD6d4O75Qu < maxlen[DQyIDO]) {
                GeD6d4O75Qu = maxlen[DQyIDO];
            }
            DQyIDO++;
        };
    }
    printf ("%d", GeD6d4O75Qu);
}

