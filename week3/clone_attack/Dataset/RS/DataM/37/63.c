int main () {
    int n;
    int i;
    int j;
    int k;
    int oyZ1Nk5lPMx;
    int t;
    int l;
    char Iar19Q [100] [1000];
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
        while (n > i) {
            gets (Iar19Q [i]);
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            l = -1;
            t = strlen (Iar19Q[i]);
            {
                j = 0;
                while (j < t) {
                    oyZ1Nk5lPMx = 1;
                    {
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
                        while (t > k) {
                            if (k != j && Iar19Q[i][j] == Iar19Q[i][k]) {
                                oyZ1Nk5lPMx = 0;
                            }
                            k = k + 1;
                        };
                    }
                    if (oyZ1Nk5lPMx == 1) {
                        printf ("%c\n", Iar19Q[i][j]);
                        l = l + 1;
                        break;
                    }
                    j++;
                };
            }
            i++;
            if (l == -1) {
            };
        };
    }
    return 0;
}

