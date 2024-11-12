int main () {
    int vdqwAc, i, j, k, t, tmp, a [10000];
    scanf ("%d%d", &vdqwAc, &k);
    {
        i = 1;
        while (i <= vdqwAc) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i < vdqwAc) {
            t = i;
            {
                j = t;
                while (j <= vdqwAc) {
                    if (a[j] < a[t])
                        t = j;
                    j = j + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (t != i) {
                tmp = a[t];
                a[t] = a[i];
                a[i] = tmp;
            }
            i++;
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
    t = 0;
    for (i = 1; i < vdqwAc; i = i + 1) {
        for (j = i + 1; j <= vdqwAc; j = j + 1) {
            if (a[i] + a[j] == k && t == 0) {
                t = 1;
                printf ("yes");
            }
            else {
                if (a[i] + a[j] > k)
                    break;
            };
        };
    }
    if (t == 0)
        printf ("no");
    return 0;
}

