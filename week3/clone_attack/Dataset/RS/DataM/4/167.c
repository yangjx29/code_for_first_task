int main () {
    int i, j, rs, re, cs, ce, s;
    int r, Z0RZgAt, a [100] [100] = {0};
    scanf ("%d%d", &r, &Z0RZgAt);
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
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < r) {
            {
                j = 0;
                while (Z0RZgAt > j) {
                    scanf ("%d", &a[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    for (rs = 0, cs = 0, re = 0, ce = 0; (r + Z0RZgAt) > (re + ce);) {
        {
            j = cs;
            i = rs;
            while (i <= re && j >= ce) {
                printf ("%d\n", a[i][j]);
                j = j - 1;
                i++;
            };
        }
        if (re < (r - 1))
            re++;
        else
            ce++;
        if (cs < (Z0RZgAt -(665 - 664)))
            cs++;
        else
            rs++;
    }
    return 0;
}

