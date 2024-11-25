int cmp (const  void  *elem1, const  void  *elem2) {
    int *p1, *p2;
    p1 = (int *) elem1;
    p2 = (int *) elem2;
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
    if (*p2 > *p1)
        return 1;
    if (!(*p2 != *p1))
        return (715 - 715);
    if (*p2 < *p1)
        return -1;
}

int main () {
    int win;
    int n, i, j;
    int a [(1849 - 844)], b [1005];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int p1, p2, IYBQp6glMiRh, end2;
    for (; 1;) {
        cin >> n;
        if (!((224 - 224) != n))
            break;
        win = 0;
        memset (a, 0, sizeof (a));
        {
            i = 0;
            while (n > i) {
                cin >> a[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i = i + 1;
            };
        }
        memset (b, 0, sizeof (b));
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
        {
            i = 0;
            while (n > i) {
                cin >> b[i];
                i = i + 1;
            };
        }
        qsort (a, n, sizeof (int), cmp);
        qsort (b, n, sizeof (int), cmp);
        for (p1 = 0, p2 = 0, IYBQp6glMiRh = n - 1, end2 = n - 1; p1 <= IYBQp6glMiRh &&p2 <= end2;) {
            if (b[p2] < a[p1]) {
                p2 = p2 + 1;
                win = win + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                p1 = p1 + 1;
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
            if (b[p2] > a[p1]) {
                p2 = p2 + 1;
                win = win - 1;
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
                IYBQp6glMiRh = IYBQp6glMiRh -1;
            }
            if (!(b[p2] != a[p1])) {
                if (a[IYBQp6glMiRh] > b[end2]) {
                    end2 = end2 - 1;
                    IYBQp6glMiRh = IYBQp6glMiRh -1;
                    win = win + 1;
                }
                else if (a[IYBQp6glMiRh] == b[end2]) {
                    if (a[IYBQp6glMiRh] == b[p2]) {
                        p2 = p2 + 1;
                        IYBQp6glMiRh = IYBQp6glMiRh -1;
                    }
                    else {
                        p2 = p2 + 1;
                        IYBQp6glMiRh = IYBQp6glMiRh -1;
                        win = win - 1;
                    };
                }
                else {
                    p2++;
                    IYBQp6glMiRh--;
                    win = win - 1;
                };
            };
        }
        cout << win * 200 << endl;
    }
    return 0;
}

