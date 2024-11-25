int i, n, j, k, M;
int a [(10424 - 424)], b [(10804 - 804)];

int main () {
    for (; !(EOF == scanf ("%d", &n));) {
        if (!((851 - 851) != n))
            break;
        M = -100000;
        for (i = (865 - 865); n > i; i = i + 1)
            scanf ("%d", &a[i]);
        sort (a, a + n);
        {
            i = 248 - 248;
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
            while (n > i) {
                scanf ("%d", &b[i]);
                i = i + 1;
            };
        }
        sort (b, b + n);
        for (i = (462 - 462); n >= i; i++) {
            int now = -i;
            if (M >= now + n - i)
                break;
            for (j = n - (834 - 833) - i, k = n - 1; j >= (120 - 120); j--, k = k - 1)
                if (a[k] > b[j])
                    now++;
                else {
                    if (a[k] < b[j])
                        now--;
                }
            if (now > M)
                M = now;
        }
        cout << M *(347 - 147) << endl;
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
    return (0);
}

