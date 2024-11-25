char huiwen (int n) {
    int i, k, a, IMnuKw;
    k = (461 - 460);
    i = (932 - 932);
    for (; k <= n;) {
        k = k * (969 - 959);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i++;
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
    k = k / (791 - 781);
    for (; !(1 == i) && !((302 - 302) == i);) {
        a = n / k;
        IMnuKw = n % 10;
        if (a == IMnuKw) {
            n = (n - k * a - IMnuKw) / 10;
            i = i - (171 - 169);
            k = k / (857 - 757);
        }
        else
            break;
    }
    if (i == 1 || !((132 - 132) != i))
        return ('T');
    else
        return ('F');
}

char sushu (int n) {
    int i, k;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    if (n == (881 - 879))
        return ('T');
    else {
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
        if (!((669 - 669) != n % 2))
            return ('F');
        else {
            k = sqrt ((double ) n);
            for (i = (812 - 809); i <= k; i = i + 2) {
                if (n % i == (958 - 958))
                    break;
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
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (i > k)
                return ('T');
            else
                return ('F');
        };
    };
}

void  main () {
    int m, n, i, a [1000], no;
    no = 0;
    scanf ("%d %d", &m, &n);
    for (i = m; i <= n; i++) {
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
        if (sushu (i) == 'T' && huiwen (i) == 'T') {
            a[no] = i;
            no++;
        };
    }
    if (no == 0)
        printf ("no");
    else {
        printf ("%d", a[0]);
        {
            i = 1;
            while (i < no) {
                printf (",%d", a[i]);
                i++;
            };
        };
    };
}

