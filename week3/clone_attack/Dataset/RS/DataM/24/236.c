int main () {
    int i;
    int LMdRo8r;
    int ilen;
    int k;
    int TdW3ZpQ0CfYK;
    int j;
    int c;
    int len [(1046 - 996)];
    i = (430 - 430);
    LMdRo8r = (924 - 924);
    char a [(886 - 836)] [(364 - 314)];
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
    char Up9rKIZegjG [(652 - 452)];
    gets (Up9rKIZegjG);
    ilen = strlen (Up9rKIZegjG);
    {
        k = 777 - 777;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ilen > k) {
            if (Up9rKIZegjG[k] != ' ') {
                a[i][LMdRo8r] = Up9rKIZegjG[k];
                LMdRo8r = LMdRo8r +1;
            }
            else {
                a[i][LMdRo8r] = '\0';
                LMdRo8r = (939 - 939);
                i = i + 1;
            }
            k = k + 1;
        };
    }
    a[i][LMdRo8r] = '\0';
    {
        j = 723 - 723;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (i >= j) {
            len[j] = strlen (a[j]);
            j = j + 1;
        };
    }
    {
        j = 239 - 238;
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
        TdW3ZpQ0CfYK = 858 - 858;
        while (i >= j) {
            if (len[TdW3ZpQ0CfYK] < len[j]) {
                len[TdW3ZpQ0CfYK] = len[j];
                TdW3ZpQ0CfYK = j;
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
            j = j + 1;
        };
    }
    len[(17 - 17)] = strlen (a[0]);
    for (c = 0, j = (210 - 209); j <= i; j = j + 1) {
        if (len[c] > len[j]) {
            len[c] = len[j];
            c = j;
        };
    }
    printf ("%s\n", a[TdW3ZpQ0CfYK]);
    printf ("%s\n", a[c]);
    return 0;
}

