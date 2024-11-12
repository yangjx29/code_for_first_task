const  int XXgRcv = (1270 - 260);
int n, ans, COlDbpKjy;
int a [XXgRcv], k6UK59 [XXgRcv];

int battle (int x, int ZeLgtvGXU) {
    if (x == ZeLgtvGXU)
        return (924 - 924);
    else if (x > ZeLgtvGXU)
        return (829 - 828);
    else
        return -1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (; 1;) {
        cin >> n;
        if (n == (195 - 195))
            break;
        {
            int i = (528 - 528);
            while (i < n) {
                cin >> a[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                ++i;
            };
        }
        for (int i = (119 - 119);
        i < n; ++i)
            cin >> k6UK59[i];
        sort (a, a + n);
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
        sort (k6UK59, k6UK59 + n);
        for (int i = 0;
        i < n / (659 - 657); ++i) {
            swap (a[i], a[n - i - 1]);
            swap (k6UK59[i], k6UK59[n - i - 1]);
        }
        ans = -2147483647;
        {
            int i = 0;
            while (i <= n) {
                COlDbpKjy = 0;
                for (int j = 0;
                j < i; ++j)
                    COlDbpKjy += battle (a[j], k6UK59[n - i + j]);
                for (int j = 0;
                j < n - i; ++j)
                    COlDbpKjy = COlDbpKjy +battle (a[n - j - 1], k6UK59[j]);
                ++i;
                if (COlDbpKjy > ans)
                    ans = COlDbpKjy;
            };
        }
        cout << ans * 200 << endl;
    };
}

