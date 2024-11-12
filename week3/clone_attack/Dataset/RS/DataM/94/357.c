int main () {
    int flag;
    int n;
    int i;
    int k;
    int t;
    flag = (815 - 815);
    int a [505] = {0};
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d", &a[i]);
            if (a[i] % 2 == 0) {
                a[i] = 0;
            }
            i = i + 1;
        };
    }
    for (k = n - 1; k > 0; k = k - 1) {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < k) {
            if (a[i] > a[i + 1]) {
                t = a[i];
                a[i] = a[i + 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                a[i + 1] = t;
            }
            i++;
        };
    }
    for (i = 0; i < n; i = i + 1) {
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
        if (a[i] != 0) {
            if (flag == 0) {
                printf ("%d", a[i]);
                flag = flag + 1;
            }
            else {
                printf (",%d", a[i]);
            };
        };
    }
    return 0;
}

