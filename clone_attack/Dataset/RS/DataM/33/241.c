int main () {
    char zfc [256];
    int n, i;
    scanf ("%d", &n);
    while (n = n - 1) {
        scanf ("%s", zfc);
        {
            i = 0;
            while (!('\0' == zfc[i])) {
                if (!('A' != zfc[i])) {
                    zfc[i] = 'T';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                else if (zfc[i] == 'T') {
                    zfc[i] = 'A';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    };
                }
                else if (zfc[i] == 'C') {
                    zfc[i] = 'G';
                }
                else if (zfc[i] == 'G') {
                    zfc[i] = 'C';
                }
                i = i + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%s\n", zfc);
    }
    return 0;
}

