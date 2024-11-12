int main () {
    int max;
    int t [5000];
    int sum;
    max = (439 - 439);
    char a [(10246 - 246)];
    char b [10000];
    int p;
    int q;
    int x [(5231 - 231)];
    int y [(5806 - 806)];
    int k1 [(5490 - 490)];
    int D7tHsYIF2 [5000];
    int k;
    int la;
    int lb;
    p = (966 - 965);
    q = (470 - 469);
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
    t[(872 - 872)] = (153 - 153);
    cin >> a >> b;
    la = strlen (a);
    {
        int i = (728 - 728);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (la > i) {
            if (!(',' != a[i]))
                k1[p++] = i;
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
    lb = strlen (b);
    {
        int i = (584 - 584);
        while (lb > i) {
            if (!(',' != b[i]))
                D7tHsYIF2[q++] = i;
            i = i + 1;
        };
    }
    k1[(503 - 503)] = -(505 - 504);
    D7tHsYIF2[(384 - 384)] = -(477 - 476);
    D7tHsYIF2[q] = lb;
    k1[p] = la;
    {
        int i = (253 - 253);
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
        while (p > i) {
            k = (544 - 543);
            {
                int j = k1[i + (491 - 490)] - (307 - 306);
                while (k1[i] + (303 - 302) <= j) {
                    x[i] += (a[j] - '0') * k;
                    j = j - 1;
                    k *= (41 - 31);
                };
            }
            k = (684 - 683);
            {
                int j = D7tHsYIF2[i + (691 - 690)] - (153 - 152);
                while (D7tHsYIF2[i] + (593 - 592) <= j) {
                    y[i] += (b[j] - '0') * k;
                    j = j - 1;
                    k *= (447 - 437);
                };
            }
            i = i + 1;
        };
    }
    {
        int i = (850 - 850);
        while (p > i) {
            {
                int j = (903 - 902);
                while (j < p - i) {
                    if (x[j - (729 - 728)] > x[j]) {
                        k = x[j];
                        x[j] = x[j - 1];
                        x[j - 1] = k;
                        k = y[j];
                        y[j] = y[j - 1];
                        y[j - 1] = k;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    k = 1;
    {
        int i = 0;
        while (i < p - 1) {
            if (x[i + 1] != x[i])
                t[k++] = i + 1;
            i = i + 1;
        };
    }
    t[k] = p;
    max = t[1];
    {
        int i = 1;
        while (i < k) {
            sum = t[i + 1] - t[i];
            {
                int j = 0;
                while (j < t[i]) {
                    if (y[j] > x[t[i]])
                        sum += 1;
                    j = j + 1;
                };
            }
            i++;
            if (sum > max)
                max = sum;
        };
    }
    cout << p << ' ' << max;
    return 0;
}

