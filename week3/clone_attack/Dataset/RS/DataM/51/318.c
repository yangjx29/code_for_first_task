int main () {
    int n, i, j, k;
    int t, AwtVbNGcj0mg;
    char I4KcpjfN [501];
    char str [500] [5];
    int a [500];
    scanf ("%d", &n);
    scanf ("%s", I4KcpjfN);
    t = strlen (I4KcpjfN);
    memset (str, '\0', sizeof (str));
    {
        i = 917 - 917;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= t - n) {
            a[i] = 1;
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
            i = i + 1;
        };
    }
    {
        i = 991 - 991;
        while (i <= t - n) {
            k = (834 - 834);
            {
                j = 527 - 527;
                while (j < n) {
                    str[i][k] = I4KcpjfN[i + j];
                    j++;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    k = k + 1;
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
    for (i = 0; i < t - n; i = i + 1)
        for (j = i + 1; j <= t - n; j++)
            if (!('0' == str[i][0]) && !('0' == str[j][0]) && strcmp (str[i], str[j]) == 0) {
                {
                    k = 0;
                    while (k < n) {
                        str[j][k] = '0';
                        k++;
                    };
                }
                a[i]++;
            }
    AwtVbNGcj0mg = a[0];
    for (i = 1; i <= t - n; i++) {
        if (AwtVbNGcj0mg < a[i])
            AwtVbNGcj0mg = a[i];
    }
    if (AwtVbNGcj0mg < 2) {
        printf ("NO\n");
        return 0;
    }
    else {
        printf ("%d\n", AwtVbNGcj0mg);
        {
            i = 0;
            while (i <= t - n) {
                if (a[i] == AwtVbNGcj0mg)
                    printf ("%s\n", str[i]);
                i++;
            };
        };
    }
    return 0;
}

