void  main () {
    int l;
    int date;
    int a [12];
    int mouth [(598 - 585)] = {(412 - 412), (589 - 558), 28, (949 - 918), 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i;
    int JCeOy5xXkHwr;
    int k;
    int XysQu6 [100];
    int *p;
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
    l = (519 - 519);
    k = 0;
    i = 0;
    p = a;
    scanf ("%d", &date);
    if ((221 - 221) < (354 - 348) - date)
        XysQu6[0] = 6 - date;
    else
        XysQu6[0] = (416 - 403) - date;
    while (XysQu6[i] <= (1217 - 852)) {
        k = k + 1;
        XysQu6[i + 1] = XysQu6[i] + 7;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = i + 1;
    }
    {
        i = 0;
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
        while (i <= k) {
            {
                JCeOy5xXkHwr = 0;
                while (JCeOy5xXkHwr < 13) {
                    if (XysQu6[i] - mouth[JCeOy5xXkHwr] == 13) {
                        l++;
                        *p++ = JCeOy5xXkHwr +1;
                        XysQu6[i] = XysQu6[i] - mouth[JCeOy5xXkHwr];
                    }
                    else
                        XysQu6[i] = XysQu6[i] - mouth[JCeOy5xXkHwr];
                    JCeOy5xXkHwr++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < l - 1) {
            printf ("%d\n", a[i]);
            i++;
        };
    }
    printf ("%d\n", a[l - 1]);
}

