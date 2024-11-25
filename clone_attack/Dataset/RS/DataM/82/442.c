int main () {
    int a, b, c = 0, e, n, i, k;
    int sz [100] = {0};
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            i = i + 1;
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
            scanf ("%d%d", &a, &b);
            if (a >= 90 && 140 >= a && 60 <= b && b <= 90) {
                sz[c]++;
            }
            else {
                c = c + 1;
            };
        };
    }
    {
        i = 0;
        while (i < 99) {
            {
                k = 0;
                while (k < 99 - i) {
                    if (sz[k] > sz[k + 1]) {
                        e = sz[k];
                        sz[k] = sz[k + 1];
                        sz[k + 1] = e;
                    }
                    k++;
                };
            }
            i = i + 1;
        };
    }
    printf ("%d", sz[99]);
    return 0;
}

