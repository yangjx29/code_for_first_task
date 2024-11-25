int main () {
    int i;
    int j;
    int height;
    int a [(606 - 505)] [101];
    int b [101] [101];
    int c [101] [101];
    int k;
    int l;
    int a1;
    int a2;
    int UsB0qmT4;
    int OEb6nqTHl8;
    scanf ("%d %d", &a1, &a2);
    {
        i = 131 - 130;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (a1 >= i) {
            {
                j = 112 - 111;
                while (a2 >= j) {
                    scanf ("%d", &a[i][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
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
    scanf ("%d %d", &UsB0qmT4, &OEb6nqTHl8);
    {
        i = 265 - 264;
        while (UsB0qmT4 >= i) {
            {
                j = 219 - 218;
                while (j <= OEb6nqTHl8) {
                    scanf ("%d", &b[i][j]);
                    j++;
                };
            }
            i++;
        };
    }
    {
        k = 552 - 551;
        while (k <= a1) {
            {
                l = 1;
                while (l <= OEb6nqTHl8) {
                    {
                        i = 1;
                        while (i <= UsB0qmT4) {
                            c[k][l] += a[k][i] * b[i][l];
                            i++;
                        };
                    }
                    if (l < OEb6nqTHl8)
                        printf ("%d ", c[k][l]);
                    else
                        printf ("%d", c[k][l]);
                    l = l + 1;
                };
            }
            k = k + 1;
            printf ("\n");
        };
    };
}

