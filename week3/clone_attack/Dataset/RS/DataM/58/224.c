int main () {
    int n, j;
    char string [(638 - 538)] [81];
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
    scanf ("%d\n", &n);
    {
        int i = (864 - 864);
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
            gets (string [i]);
            i = i + 1;
        };
    }
    for (int i = (360 - 360);
    i < n; i = i + 1) {
        int l = strlen (string[i]);
        j = (36 - 36);
        if (('A' <= string[i][(581 - 581)] && string[i][(328 - 328)] <= 'Z') || ('a' <= string[i][(528 - 528)] && 'z' >= string[i][0]) || !('_' != string[i][0])) {
            j = 0;
            while (j < l) {
                if ('A' <= string[i][j] && string[i][j] <= 'Z' || string[i][j] >= 'a' && string[i][j] <= 'z' || string[i][j] == '_' || string[i][j] >= '0' && string[i][j] <= '9')
                    continue;
                else
                    break;
                j = j + 1;
            };
        }
        if (j >= l)
            printf ("1\n");
        else
            printf ("0\n");
    };
}

