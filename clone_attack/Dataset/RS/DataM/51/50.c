int main () {
    char b [500] [(852 - 847)];
    char a [(600 - 90)];
    gets (a);
    int la;
    la = strlen (a);
    int max;
    int n;
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
    int c [500] = {(580 - 580)};
    int i;
    int j;
    max = (400 - 400);
    scanf ("%d\n", &n);
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
        while (la - n >= i) {
            {
                j = 0;
                while (j < n) {
                    b[i][j] = a[i + j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            b[i][n] = '\0';
            i = i + 1;
        };
    }
    {
        i = 0;
        while (la - n >= i) {
            {
                j = i;
                while (la - n >= j) {
                    if (strcmp (b[i], b[j]) == 0)
                        c[i]++;
                    j = j + 1;
                };
            }
            if (c[i] > max)
                max = c[i];
            i = i + 1;
        };
    }
    if (max == 1)
        printf ("NO");
    else {
        printf ("%d\n", max);
        {
            i = 0;
            while (i <= la - n) {
                if (c[i] == max)
                    puts (b[i]);
                i = i + 1;
            };
        };
    }
    return 0;
}

