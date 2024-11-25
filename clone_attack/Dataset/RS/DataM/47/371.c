void  f (int *x, int n) {
    int m;
    int *p;
    int temp;
    int *i;
    int *wJ4ctbmUXGW3;
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
    m = (n - 1) / 2;
    i = x;
    wJ4ctbmUXGW3 = x + n - 1;
    p = x + m;
    for (; p >= i; i = i + 1, wJ4ctbmUXGW3--) {
        temp = *i;
        *i = *wJ4ctbmUXGW3;
        *wJ4ctbmUXGW3 = temp;
    }
    return;
}

int main () {
    int n;
    int i;
    int a [100];
    scanf ("%d", &n);
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
        while (i < n) {
            scanf ("%d", &a[i]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    f (a, n);
    {
        i = 0;
        while (i < n) {
            if (i == 0)
                printf ("%d", a[i]);
            else
                printf (" %d", a[i]);
            i++;
        };
    }
    return 0;
}

