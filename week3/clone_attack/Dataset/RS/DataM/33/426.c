int main () {
    int n;
    int i;
    int JHMCnmY;
    char zfcsz [N] [256];
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
    for (i = 0; n > i; i++) {
        scanf ("%s", &(zfcsz[i]));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = 0; i < n; i++) {
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
        for (JHMCnmY = 0; zfcsz[i][JHMCnmY] != '\0'; JHMCnmY++) {
            if (!('A' != zfcsz[i][JHMCnmY])) {
                zfcsz[i][JHMCnmY] = 'T';
            }
            else {
                if (!('T' != zfcsz[i][JHMCnmY])) {
                    zfcsz[i][JHMCnmY] = zfcsz[i][JHMCnmY] + 'A' - 'T';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
                else if (zfcsz[i][JHMCnmY] == 'C') {
                    zfcsz[i][JHMCnmY] = zfcsz[i][JHMCnmY] + 'G' - 'C';
                }
                else if (zfcsz[i][JHMCnmY] == 'G') {
                    zfcsz[i][JHMCnmY] = zfcsz[i][JHMCnmY] + 'C' - 'G';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    };
                };
            };
        };
    }
    {
        i = 0;
        while (i < n) {
            printf ("%s\n", zfcsz[i]);
            i++;
        };
    }
    return 0;
}

