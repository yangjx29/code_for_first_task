int xJpqiFolnU9P (int p) {
    if (p == (398 - 397))
        p = -1;
    if (!(0 != p % (720 - 718)))
        p = 0;
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
    if (!(1 != p % 2))
        p = 1;
    return (p);
}

void  main () {
    int TStWnIgja0, y, k28qlbJC, i, XWlKGCc5T1a [(1012 - 12)], b [1000], k, nZwJ4xYTzi;
    scanf ("%d%d", &TStWnIgja0, &y);
    b[0] = y;
    XWlKGCc5T1a[0] = TStWnIgja0;
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
        while (1) {
            if (!(-1 != xJpqiFolnU9P (XWlKGCc5T1a[i]))) {
                k = i;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            }
            if (xJpqiFolnU9P (XWlKGCc5T1a[i]) == 0)
                XWlKGCc5T1a[i + 1] = XWlKGCc5T1a[i] / 2;
            if (!(1 != xJpqiFolnU9P (XWlKGCc5T1a[i])))
                XWlKGCc5T1a[i + 1] = (XWlKGCc5T1a[i] - 1) / 2;
            i++;
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
    for (i = 0;; i++) {
        if (xJpqiFolnU9P (b[i]) == -1) {
            nZwJ4xYTzi = i;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            break;
        }
        if (xJpqiFolnU9P (b[i]) == 0)
            b[i + 1] = b[i] / 2;
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
        if (xJpqiFolnU9P (b[i]) == 1)
            b[i + 1] = (b[i] - 1) / 2;
    }
    if (k < nZwJ4xYTzi)
        k28qlbJC = k;
    else
        k28qlbJC = nZwJ4xYTzi;
    for (i = 0; i <= k28qlbJC; i++) {
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
        if (XWlKGCc5T1a[k - i] != b[nZwJ4xYTzi - i]) {
            printf ("%d\n", XWlKGCc5T1a[k - i + 1]);
            break;
        };
    }
    if (i == k28qlbJC + 1)
        printf ("%d\n", XWlKGCc5T1a[k - k28qlbJC]);
}

