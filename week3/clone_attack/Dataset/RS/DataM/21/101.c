void  main () {
    float a;
    float X8UW6tEs;
    int i;
    int AL8zjfTk;
    int r;
    int ii6LfC [201];
    int QmLxYT5WeFfw [201];
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
    scanf ("%d", &AL8zjfTk);
    for (i = 1; AL8zjfTk >= i; i++)
        scanf ("%d", &ii6LfC[i]);
    r = 0;
    a = 0;
    X8UW6tEs = 0;
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= AL8zjfTk) {
            X8UW6tEs = (X8UW6tEs +ii6LfC[i]);
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
    X8UW6tEs = X8UW6tEs / AL8zjfTk;
    {
        i = 1;
        while (i <= AL8zjfTk) {
            if (a < (X8UW6tEs < ii6LfC[i] ? (ii6LfC[i] - X8UW6tEs) : (X8UW6tEs -ii6LfC[i]))) {
                r = 1;
                a = (ii6LfC[i] > X8UW6tEs ? (ii6LfC[i] - X8UW6tEs) : (X8UW6tEs -ii6LfC[i]));
                QmLxYT5WeFfw[1] = ii6LfC[i];
            }
            else {
                if ((ii6LfC[i] > X8UW6tEs ? (ii6LfC[i] - X8UW6tEs) : (X8UW6tEs -ii6LfC[i])) == a) {
                    r = r + 1;
                    QmLxYT5WeFfw[r] = ii6LfC[i];
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    {
        i = 1;
        while (i <= r) {
            printf ("%d", QmLxYT5WeFfw[i]);
            if (i != r)
                printf (",");
            i++;
        };
    }
    printf ("\n");
}

