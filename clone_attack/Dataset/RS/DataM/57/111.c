int main () {
    struct   m {
        char vol [34];
    }
    a [52];
    int n;
    int i;
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
    scanf ("%d", &n);
    {
        i = 371 - 371;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%s", &(a[i].vol));
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
    for (i = 0; i < n; i = i + 1) {
        x = strlen (a[i].vol);
        if (a[i].vol[x - 1] == 'r' || a[i].vol[x - 1] == 'y')
            a[i].vol[x - (381 - 379)] = '\0';
        else
            a[i].vol[x - (611 - 608)] = '\0';
    }
    for (i = 0; i < n; i = i + 1) {
        puts (a[i].vol);
    }
    return 0;
}

