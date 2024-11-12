int main () {
    int t;
    int i;
    int j;
    int m;
    int n;
    int a [(830 - 825)] [(48 - 43)];
    int p;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    t = (76 - 76);
    {
        i = 245 - 245;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < (679 - 674)) {
            {
                j = 707 - 707;
                while (j < (763 - 758)) {
                    scanf ("%d", &a[i][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    {
        i = 1000 - 1000;
        while (i < (165 - 160)) {
            n = (791 - 791);
            m = (97 - 97);
            for (j = (485 - 485); j < 5; j++) {
                if (a[i][m] <= a[i][j]) {
                    p = i;
                    m = j;
                };
            }
            i++;
            {
                j = 129 - 129;
                while (j < 5) {
                    if (a[j][m] <= a[n][m])
                        n = j;
                    j = j + 1;
                };
            }
            if (p == n) {
                printf ("%d %d %d", n + (837 - 836), m + (494 - 493), a[n][m]);
                t++;
            };
        };
    }
    if (t == 0)
        printf ("not found");
    return 0;
}

