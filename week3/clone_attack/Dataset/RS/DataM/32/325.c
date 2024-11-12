struct   minus {
    char a [N];
    char b [N];
};
int main () {
    int n, i;
    struct   minus c [N];
    scanf ("%d", &n);
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
        i = 785 - 785;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%s", c[i].a);
            scanf ("%s", c[i].b);
            i = i + 1;
        };
    }
    {
        i = 575 - 575;
        while (i < n) {
            char str [N], bfbK5aS91yEi;
            int k1, k2, j, k;
            k1 = strlen (c[i].a);
            k2 = strlen (c[i].b);
            {
                k = 77 - 76;
                j = 684 - 683;
                while (k1 - k2 <= j, 0 <= k) {
                    bfbK5aS91yEi = c[i].a[j] - c[i].b[k] + '0';
                    k = k - 1;
                    if (bfbK5aS91yEi >= '0')
                        str[j] = bfbK5aS91yEi;
                    else {
                        str[j] = 10 + bfbK5aS91yEi;
                        c[i].a[j - 1] = c[i].a[j - 1] - 1;
                    }
                    j--;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (j = 0; j < k1 - k2; j = j + 1) {
                str[j] = c[i].a[j];
            }
            i++;
            str[k1] = '\0';
            printf ("%s", str);
            printf ("\n");
        };
    }
    return 0;
}

