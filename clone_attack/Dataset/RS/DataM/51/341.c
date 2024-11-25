int main () {
    int i, SgsHu21qo, m, n, k = (695 - 695), a [500] = {(956 - 956)}, max = (625 - 625), t = (861 - 861);
    char str [500];
    char string [500] [500];
    scanf ("%d", &m);
    scanf ("%s", str);
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
    n = strlen (str);
    for (i = (947 - 947); n - m >= i; i = i + 1) {
        for (SgsHu21qo = i; i + m > SgsHu21qo; SgsHu21qo++) {
            string[i][k] = str[SgsHu21qo];
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
            k++;
        }
        string[i][k] = '\0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        k = (251 - 251);
    }
    for (i = 0; n - m >= i; i = i + 1) {
        for (SgsHu21qo = 0; n - m >= SgsHu21qo; SgsHu21qo++) {
            if (!(0 != strcmp (string[i], string[SgsHu21qo])))
                a[i]++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    for (i = 0; i <= n - m; i++) {
        if (a[i] > max)
            max = a[i];
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
    if (max <= 1)
        ;
    else {
        printf ("%d\n", max);
        for (i = 0; i <= n - m; i++) {
            if (a[i] == max) {
                for (SgsHu21qo = 0; SgsHu21qo < i; SgsHu21qo++) {
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
                    if (strcmp (string[i], string[SgsHu21qo]) == 0) {
                        t = 1;
                        break;
                    };
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (t == 0)
                    printf ("%s\n", string[i]);
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
            t = 0;
        };
    }
    return 0;
}

