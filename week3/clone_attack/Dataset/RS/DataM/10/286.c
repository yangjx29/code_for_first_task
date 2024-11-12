int main () {
    int k;
    int a [25];
    int b [25];
    int i;
    int YV1aqnTsml6b;
    int max;
    scanf ("%d", &k);
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
    {
        i = 794 - 794;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < k) {
            scanf ("%d", &a[i]);
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
    b[k - (139 - 138)] = 1;
    {
        i = k - 2;
        while (i >= (719 - 719)) {
            max = 0;
            {
                YV1aqnTsml6b = i + 1;
                while (YV1aqnTsml6b <= k - 1) {
                    if (a[i] >= a[YV1aqnTsml6b]) {
                        if (max < b[YV1aqnTsml6b])
                            max = b[YV1aqnTsml6b];
                    }
                    YV1aqnTsml6b = YV1aqnTsml6b +1;
                };
            }
            b[i] = max + 1;
            i = i - 1;
        };
    }
    max = 0;
    {
        i = 0;
        while (i < k) {
            if (max < b[i])
                max = b[i];
            i = i + 1;
        };
    }
    printf ("%d", max);
    getchar ();
    getchar ();
}

