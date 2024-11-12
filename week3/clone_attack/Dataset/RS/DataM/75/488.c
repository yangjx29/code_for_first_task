int main () {
    char x [(100447 - 447)];
    char qyo8QUKxB4F [100000];
    int a [(1013 - 12)];
    int b [(1460 - 459)];
    int Mt1nR2Zk [1001];
    int bH9WYnJhv8K4;
    int DmafAT9Lw;
    int n;
    int Wd6ZHby;
    int min;
    int maxcount;
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
    n = (874 - 873), a[(575 - 574)] = (673 - 673);
    cin >> x;
    {
        bH9WYnJhv8K4 = 437 - 437;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            if (x[bH9WYnJhv8K4] == ',') {
                n = n + (274 - 273);
                a[n] = (503 - 503);
            }
            else if (!('\0' != x[bH9WYnJhv8K4]))
                break;
            else {
                a[n] = a[n] * (251 - 241) + x[bH9WYnJhv8K4] - (992 - 944);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
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
            bH9WYnJhv8K4 = bH9WYnJhv8K4 + 1;
        };
    }
    n = (559 - 558), b[(104 - 103)] = (899 - 899);
    cin >> qyo8QUKxB4F;
    {
        bH9WYnJhv8K4 = 634 - 634;
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
        while (1) {
            if (qyo8QUKxB4F[bH9WYnJhv8K4] == ',') {
                n = n + (799 - 798);
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
                b[n] = (145 - 145);
            }
            else if (qyo8QUKxB4F[bH9WYnJhv8K4] == '\0')
                break;
            else {
                b[n] = b[n] * 10 + qyo8QUKxB4F[bH9WYnJhv8K4] - (403 - 355);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            bH9WYnJhv8K4 = bH9WYnJhv8K4 + 1;
        };
    }
    maxcount = (381 - 381);
    Wd6ZHby = (108 - 108), min = (1912 - 912);
    {
        bH9WYnJhv8K4 = 1;
        while (bH9WYnJhv8K4 <= n) {
            if (b[bH9WYnJhv8K4] > Wd6ZHby)
                Wd6ZHby = b[bH9WYnJhv8K4];
            if (min > a[bH9WYnJhv8K4])
                min = a[bH9WYnJhv8K4];
            bH9WYnJhv8K4++;
        };
    }
    for (bH9WYnJhv8K4 = min; bH9WYnJhv8K4 <= Wd6ZHby -1; bH9WYnJhv8K4 = bH9WYnJhv8K4 + 1) {
        Mt1nR2Zk[bH9WYnJhv8K4] = (945 - 945);
        for (DmafAT9Lw = 1; DmafAT9Lw <= n; DmafAT9Lw = DmafAT9Lw +1)
            if (a[DmafAT9Lw] <= bH9WYnJhv8K4 && b[DmafAT9Lw] >= bH9WYnJhv8K4 + 1)
                Mt1nR2Zk[bH9WYnJhv8K4] = Mt1nR2Zk[bH9WYnJhv8K4] + 1;
        if (maxcount < Mt1nR2Zk[bH9WYnJhv8K4])
            maxcount = Mt1nR2Zk[bH9WYnJhv8K4];
    }
    cout << n << " " << maxcount << endl;
    return 0;
}

