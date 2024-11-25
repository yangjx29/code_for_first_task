int main () {
    int a [10000];
    int b [10000];
    int p;
    int eP0RW97;
    int m;
    int n;
    int i;
    int j;
    scanf ("%d", &n);
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
        while (n > i) {
            scanf ("\n%d", &a[i]);
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
    for (i = 0; i < n; i++) {
        printf ("%d\n", ans (a[i], 2));
    }
    return 0;
}

int ans (int sum, int min) {
    int u;
    int w;
    int x;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    u = 1;
    {
        w = min;
        while (sum / 2 > w) {
            x = sum % w;
            if (!(0 != x)) {
                if (w <= sum / w)
                    u = u + ans (sum / w, w);
            }
            w++;
        };
    }
    return u;
}

