int main () {
    char a [33];
    int n, i, j, len;
    scanf ("%d", &n);
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
    for (i = 0; i < n; i = i + 1) {
        scanf ("%s", a);
        len = strlen (a);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (len > (418 - 415)) {
            if (a[len - 1] == 'r' && !('e' != a[len - 2]))
                a[len - 2] = '\0';
            if (a[len - 1] == 'y' && a[len - 2] == 'l')
                a[len - 2] = '\0';
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
            if (a[len - 1] == 'g' && a[len - 2] == 'n' && a[len - 3] == 'i')
                a[len - 3] = '\0';
        }
        printf ("%s\n", a);
        if (len <= 3) {
            printf ("%s\n", a);
        };
    }
    return 0;
}

