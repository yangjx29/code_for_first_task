int main () {
    int n;
    char mulian [257];
    char zilian [1000] [257];
    int i;
    int j;
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
    int k;
    scanf ("%d", &n);
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
            scanf ("%s", mulian);
            for (j = 0; mulian[j] != '\0'; j++) {
                if (!('A' != mulian[j]))
                    zilian[i][j] = 'T';
                else {
                    if (mulian[j] == 'T')
                        zilian[i][j] = 'A';
                    else {
                        if (mulian[j] == 'G')
                            zilian[i][j] = 'C';
                        else
                            zilian[i][j] = 'G';
                    };
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
            zilian[i][j] = '\0';
            i = i + 1;
        };
    }
    for (k = 0; k < n; k++) {
        printf ("%s\n", zilian[k]);
    }
    return 0;
}

