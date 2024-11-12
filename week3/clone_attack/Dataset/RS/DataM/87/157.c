int main () {
    int a [100], b [100], c [100], d [100], e [100], f [100], i, t [100], n = 0;
    for (i = 0; i < 100; i++) {
        scanf ("%d%d%d%d%d%d", &a[i], &b[i], &c[i], &d[i], &e[i], &f[i]);
        if (a[i] + b[i] + c[i] + d[i] + e[i] + f[i] != 0) {
            n++;
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
            t[i] = (12 - a[i] + d[i]) * 3600 + (e[i] - b[i]) * 60 + (f[i] - c[i]);
        }
        else {
            break;
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
    for (i = 0; i < n; i++) {
        printf ("%d\n", t[i]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    return 0;
}

