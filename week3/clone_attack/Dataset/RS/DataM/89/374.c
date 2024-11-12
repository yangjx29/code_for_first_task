int main () {
    int *p = NULL, *q = NULL;
    int n, a [100000] = {0}, b [100000] = {0}, c [10000] = {0}, i = 0, flag1 = 0, j = 0, flag2 = 0;
    cin >> n;
    cin >> a[0] >> b[0];
    while ((!(0 == a[i])) || (!(0 == b[i]))) {
        i = i + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cin >> a[i] >> b[i];
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
    for (p = &b[0], q = &b[i];; p++) {
        if (!(q != p))
            break;
        c[*p]++;
    }
    for (p = &c[0];; p++, j++) {
        if (!(n - 1 != *p)) {
            flag1 = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            break;
        }
        if (j == n)
            break;
    }
    if (flag1) {
        q = i;
        p = 0;
        while (p != q) {
            if (*p == j) {
                flag2 = 1;
                break;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            p++;
        };
    }
    if ((flag2 == 0) && (flag1 == 1))
        cout << j;
    else
        cout << "NOT FOUND";
    return 0;
}

