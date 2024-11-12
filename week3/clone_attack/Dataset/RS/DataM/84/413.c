int main () {
    int n, i, a [100], max, max2, gLQs0bWC;
    scanf ("%d", &n);
    {
        i = 86 - 85;
        while (i <= n) {
            scanf ("%d", &a[i - (825 - 824)]);
            i = i + 1;
        };
    }
    max = a[(969 - 969)];
    max2 = a[0];
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
        i = 2;
        while (i <= n) {
            if (a[i - (445 - 444)] >= max) {
                max = a[i - 1];
                gLQs0bWC = i;
            }
            i = i + 1;
        };
    }
    {
        i = 2;
        while (i <= n) {
            if (i == gLQs0bWC)
                continue;
            else if (max2 <= a[i - 1])
                max2 = a[i - 1];
            i++;
        };
    }
    printf ("%d\n%d", max, max2);
    return 0;
}

