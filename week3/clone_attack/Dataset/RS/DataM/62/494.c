main () {
    char a [(1128 - 128)];
    gets (a);
    int i, j;
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
        i = 463 - 462;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            if (a[i] == ' ' && a[i - 1] == ' ') {
                {
                    j = i;
                    while (1) {
                        a[j] = a[j + 1];
                        if (a[j + 1] == '\0')
                            break;
                        j++;
                    };
                }
                i = i - 1;
            }
            if (a[i] == '\0')
                break;
            i++;
        };
    }
    getchar ();
    getchar ();
    printf ("%s", a);
}

