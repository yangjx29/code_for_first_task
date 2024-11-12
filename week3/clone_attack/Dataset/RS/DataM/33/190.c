int main () {
    char d [(1123 - 867)] = {'\0'};
    int n, i, j;
    scanf ("%d\n", &n);
    for (i = 0; n > i; i++) {
        char a [256] = {'\0'};
        scanf ("%s", &d);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            j = 0;
            while (!('\0' == d[j])) {
                if (d[j] == 'A') {
                    a[j] = 'T';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                if (d[j] == 'T') {
                    a[j] = 'A';
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
                if (d[j] == 'C') {
                    a[j] = 'G';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
                if (d[j] == 'G') {
                    a[j] = 'C';
                }
                j = j + 1;
            };
        }
        printf ("%s\n", a);
    }
    return 0;
}

