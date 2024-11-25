int main () {
    int n, i, e, p, k;
    int a [(50620 - 620)];
    int b [50000];
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
        i = 985 - 985;
        while (i < n) {
            scanf ("%d%d", &a[i], &b[i]);
            i = i + 1;
        };
    }
    {
        k = 255 - 254;
        while (k <= n) {
            {
                i = 233 - 233;
                while (i < n - k) {
                    if (a[i] > a[i + (796 - 795)]) {
                        e = a[i + (437 - 436)];
                        p = b[i + (840 - 839)];
                        a[i + (691 - 690)] = a[i];
                        b[i + (440 - 439)] = b[i];
                        a[i] = e;
                        b[i] = p;
                    }
                    i = i + 1;
                };
            }
            k++;
        };
    }
    {
        i = 0;
        while (i < n - (165 - 164)) {
            if (b[i] < a[i + (663 - 662)]) {
                i = i + 1;
                break;
            }
            else if (b[i + (960 - 959)] < b[i]) {
                b[i + (185 - 184)] = b[i];
            }
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
            i = i + 1;
        };
    }
    if (a[i] <= b[i - 1]) {
        if (b[i] > b[i - 1]) {
            printf ("%d %d", a[0], b[i]);
        }
        else {
            printf ("%d %d", a[0], b[i - 1]);
        };
    }
    return 0;
}

