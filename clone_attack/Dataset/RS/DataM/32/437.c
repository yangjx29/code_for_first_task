void  c (char a [], int h, char b [], int k) {
    char c [252];
    int w;
    int y;
    int i;
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
    int j;
    w = 0;
    y = 0;
    {
        i = h - 1;
        j = k - 1;
        while (0 <= i) {
            if (0 <= j) {
                c[i + 1] = a[i] + 48 - b[j];
                if (48 > c[i + 1]) {
                    c[i + 1] = c[i + 1] + 10;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    a[i - 1] = a[i - 1] - 1;
                };
            }
            else {
                if (48 > a[i]) {
                    c[i + 1] = a[i] + 10;
                    a[i - 1] = a[i - 1] - 1;
                }
                else
                    c[i + 1] = a[i];
            }
            i = i - 1;
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
            j--;
        };
    }
    {
        i = 1;
        while (h + 1 > i) {
            if (!('0' == c[i])) {
                y = y + 1;
                w = 1;
            }
            if (!(2 != h + 1) || y != 0) {
                printf ("%c", c[i]);
            }
            i = i + 1;
        };
    };
}

int main () {
    char a [251];
    char b [251];
    int h;
    int k;
    int n;
    int i;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            i = i + 1;
            scanf ("%s%s\n", a, b);
            h = strlen (a);
            k = strlen (b);
            if (h >= k)
                c (a, h, b, k);
            else {
                if (k > h)
                    c (b, k, a, h);
            };
        };
    }
    return 0;
}

