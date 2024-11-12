int main (int argc, char *argv []) {
    int i, j, n, rsLrt3V, a [100];
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d", &a[i]);
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
        i = 0;
        while (n - 1 > i) {
            {
                j = i + 1;
                while (j < n) {
                    if (a[j] > a[i]) {
                        rsLrt3V = a[i];
                        a[i] = a[j];
                        a[j] = rsLrt3V;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    printf ("%d\n%d\n", a[0], a[1]);
    return 0;
}

