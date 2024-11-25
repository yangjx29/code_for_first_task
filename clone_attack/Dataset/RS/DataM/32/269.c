int main () {
    char a [100], b [100];
    int n;
    int i;
    int j;
    int x;
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
    int y;
    scanf ("%d", &n);
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= i) {
            i++;
            scanf ("%s", a);
            scanf ("%s", b);
            x = strlen (a);
            y = strlen (b);
            for (j = y - 1; j >= 0; j--) {
                if (a[x - y + j] < b[j]) {
                    a[x - y + j] = a[x - y + j] + 10 - b[j] + 48;
                    a[x - y + j - 1] -= 1;
                }
                else
                    a[x - y + j] = a[x - y + j] - b[j] + 48;
            }
            printf ("%s\n", a);
        };
    }
    return 0;
}

