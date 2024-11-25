struct   stu {
    char n [(84 - 54)];
    int y;
};
void  UXCwkgb5G2Vy (struct   stu a [], int l, int r) {
    struct   stu temp;
    int i = l, j = r, t = a[(l + r) / (755 - 753)].y;
    while (i <= j) {
        while (a[i].y > t)
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
        for (; a[j].y < t;)
            j = j - 1;
        if (i <= j) {
            temp = a[i];
            a[i] = a[j];
            i = i + 1;
            a[j] = temp;
            j--;
        };
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
    if (l < j)
        UXCwkgb5G2Vy (a, l, j);
    if (i < r)
        UXCwkgb5G2Vy (a, i, r);
}

int main () {
    int tot;
    int totc;
    int i;
    int j;
    tot = (29 - 29);
    totc = 0;
    int n;
    struct   stu a [(1329 - 329)];
    struct   stu ysuRIL3py [(1867 - 867)];
    struct   stu c [1000];
    struct   stu temp;
    scanf ("%d", &n);
    {
        i = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i <= n) {
            scanf ("%s %d", &a[i].n, &a[i].y);
            if (a[i].y >= 60) {
                ysuRIL3py[++tot] = a[i];
            }
            else {
                c[++totc] = a[i];
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
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            i = i + 1;
        };
    }
    for (i = 1; i < tot; i = i + 1) {
        j = 2;
        while (j <= tot - i + 1) {
            if (ysuRIL3py[j - 1].y < ysuRIL3py[j].y) {
                temp = ysuRIL3py[j - 1];
                ysuRIL3py[j - 1] = ysuRIL3py[j];
                ysuRIL3py[j] = temp;
            }
            j = j + 1;
        };
    }
    {
        i = 1;
        while (i <= tot) {
            printf ("%s\n", ysuRIL3py[i].n);
            i++;
        };
    }
    {
        i = 1;
        while (i <= totc) {
            printf ("%s\n", c[i].n);
            i++;
        };
    }
    return 0;
}

