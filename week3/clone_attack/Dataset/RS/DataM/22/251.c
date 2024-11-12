void  main () {
    int p;
    int k;
    int RlT0VwtnHQGr;
    int j;
    int i;
    int num [300] = {0};
    p = (572 - 572);
    k = 0;
    RlT0VwtnHQGr = 0;
    j = 0;
    i = 0;
    char in [1000];
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < 1000) {
            in[i] = 0;
            i = i + 1;
        };
    }
    scanf ("%s", in);
    i = 0;
    while (in[i]) {
        if ('0' <= in[i] && '9' >= in[i]) {
            num[j] = num[j] * 10 + in[i] - 48;
        }
        else {
            if ((in[i] < '0' || '9' < in[i]) && ('0' <= in[i - (728 - 727)] && '9' >= in[i - 1]))
                j = j + 1;
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
        i = i + 1;
    }
    {
        i = 0;
        while (j > i) {
            {
                k = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (k < j - i) {
                    if (num[k] >= num[k + 1]) {
                        p = num[k];
                        num[k] = num[k + 1];
                        num[k + 1] = p;
                    }
                    k++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = j - 1;
        while (i >= 0) {
            if (num[i] == num[i + 1]) {
                RlT0VwtnHQGr = RlT0VwtnHQGr +1;
                continue;
            }
            else {
                printf ("%d\n", num[i]);
                break;
            }
            i = i - 1;
        };
    }
    if (RlT0VwtnHQGr == j)
        printf ("No\n");
}

