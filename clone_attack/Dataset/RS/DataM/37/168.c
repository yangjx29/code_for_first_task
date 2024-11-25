int main () {
    int n, s;
    char zfc [1000] [1000];
    scanf ("%d\n", &n);
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
    for (int i = 0;
    n > i; i = i + 1) {
        gets (zfc [i]);
    }
    {
        int i = 0;
        while (n > i) {
            int m = strlen (zfc[i]);
            {
                int j = 0;
                while (j < m) {
                    s = 0;
                    {
                        int k = 0;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        while (k < m) {
                            if (zfc[i][j] == zfc[i][k]) {
                                s = s + 1;
                            }
                            k = k + 1;
                        };
                    }
                    if (s == 1) {
                        printf ("%c\n", zfc[i][j]);
                        break;
                    }
                    if (j == m - 1) {
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%d", &n);
    return 0;
}

