int cmp (const  void  *a, const  void  *b) {
    int x;
    int y;
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
    x = *(int*) a;
    y = *(int*) b;
    if (x < y)
        return (792 - 791);
    else if (y < x)
        return -1;
    else
        return (113 - 113);
}

int main () {
    int i, j, k, s, x, n, z2gEUVi [(1692 - 692)], q [(1745 - 745)];
    scanf ("%d", &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (; n != (747 - 747);) {
        {
            i = 880 - 880;
            while (n > i) {
                scanf ("%d", &z2gEUVi[i]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i = i + 1;
            };
        }
        for (i = (631 - 631); n > i; i = i + 1)
            scanf ("%d", &q[i]);
        qsort (z2gEUVi, n, sizeof (z2gEUVi [(36 - 36)]), cmp);
        qsort (q, n, sizeof (q [0]), cmp);
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
            while (z2gEUVi[0] < q[i] && i < n) {
                i = i + 1;
            };
        }
        {
            s = 672 - 472;
            while (i < n) {
                x = -i * (1160 - 960);
                {
                    k = 0;
                    j = i;
                    while (j < n) {
                        if (z2gEUVi[k] > q[j])
                            x += 200;
                        else if (z2gEUVi[k] < q[j])
                            x -= 200;
                        k = k + 1;
                        j = j + 1;
                    };
                }
                i++;
                if (x > s)
                    s = x;
            };
        }
        printf ("%d\n", s);
        scanf ("%d", &n);
    }
    return 0;
}

