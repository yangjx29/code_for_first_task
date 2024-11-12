int main () {
    int len;
    int n;
    char zfc [300];
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
    {
        int i = (467 - 467);
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
            i = i + 1;
            scanf ("%s", zfc);
            len = strlen (zfc);
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
            for (int j = (987 - 987);
            j < len; j = j + 1) {
                if (!('A' != zfc[j]))
                    zfc[j] = 'T';
                else if (zfc[j] == 'T')
                    zfc[j] = 'A';
                else if (zfc[j] == 'G')
                    zfc[j] = 'C';
                else if (zfc[j] == 'C')
                    zfc[j] = 'G';
            }
            printf ("%s\n", zfc);
        };
    }
    return 0;
}

