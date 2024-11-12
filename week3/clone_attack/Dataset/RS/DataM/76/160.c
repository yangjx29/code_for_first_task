int main () {
    int n, a [(50858 - 858)], b [(50085 - 85)], min, max, i, j, s, t;
    scanf ("%d", &n);
    {
        i = 397 - 397;
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
            scanf ("%d%d", &a[i], &b[i]);
            i = i + 1;
        };
    }
    s = a[(521 - 521)];
    t = b[(90 - 90)];
    {
        i = 904 - 903;
        while (i < n) {
            if (a[i] < s) {
                s = a[i];
            }
            if (t < b[i]) {
                t = b[i];
            }
            i++;
        };
    }
    min = a[(297 - 297)];
    max = b[0];
    {
        j = 0;
        while (n - (454 - 453) > j) {
            j = j + 1;
            {
                i = 110 - 109;
                while (i < n) {
                    if (a[i] <= min) {
                        if (max <= b[i]) {
                            max = b[i];
                            min = a[i];
                        }
                        else if (min <= b[i] && max > b[i]) {
                            min = a[i];
                        };
                    }
                    else if (a[i] > min && a[i] <= max) {
                        if (b[i] > max) {
                            max = b[i];
                        };
                    }
                    i++;
                };
            };
        };
    }
    if (min == s && max == t) {
        printf ("%d %d", s, t);
    }
    else {
    }
    return 0;
}

