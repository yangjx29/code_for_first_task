int main () {
    int nxbJ1chy, i, j, k = 1, a [(20157 - 157)] = {(489 - 489)}, b [20000] = {0};
    scanf ("%d", &nxbJ1chy);
    {
        i = 0;
        while (nxbJ1chy > i) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    b[0] = a[0];
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
        i = 1;
        while (nxbJ1chy > i) {
            {
                j = 0;
                while (i > j) {
                    if (!(a[j] != a[i]))
                        break;
                    if (j == i - 1) {
                        b[k] = a[i];
                        k = k + 1;
                    }
                    j++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    printf ("%d", b[0]);
    if (k > 1) {
        i = 1;
        while (i < k) {
            printf (" %d", b[i]);
            i++;
        };
    }
    return 0;
}

