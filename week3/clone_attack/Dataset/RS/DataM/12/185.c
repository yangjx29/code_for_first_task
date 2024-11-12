int main () {
    int i;
    int zWPf7k;
    int c;
    int m;
    int a [17];
    while ((107 - 106)) {
        for (i = 1; i <= 16; i = i + 1) {
            m = 0;
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
            a[i] = 0;
        }
        for (i = 1; i <= 16; i = i + 1) {
            scanf ("%d", &a[i]);
            if (!(-1 != a[i]))
                return 0;
            if (a[i] == 0) {
                c = i;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            };
        }
        for (i = 1; i < c; i = i + 1)
            for (zWPf7k = i; zWPf7k < c; zWPf7k = zWPf7k + 1) {
                if (a[i] == 2 * a[zWPf7k] || a[zWPf7k] == 2 * a[i])
                    m = m + 1;
            }
        printf ("%d\n", m);
    }
    return 0;
}

