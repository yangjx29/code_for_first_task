main () {
    int j;
    int k;
    int i;
    int n;
    int w0zMCp [(885 - 785)];
    j = (724 - 724);
    k = 0;
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
    char s [100];
    gets (s);
    n = strlen (s);
    {
        i = 0;
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
            if (s[i] == ' ') {
                w0zMCp[j] = i;
                j = j + 1;
            }
            i = i + 1;
        };
    }
    w0zMCp[j] = n;
    w0zMCp[-1] = 0;
    for (k = 0; k < j; k = k + 1) {
        for (i = w0zMCp[j - 1 - k] + 1; i < w0zMCp[j - k]; i = i + 1) {
            printf ("%c", s[i]);
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        printf (" ");
    }
    {
        i = 0;
        while (i < w0zMCp[0]) {
            printf ("%c", s[i]);
            i++;
        };
    };
}

