int main () {
    struct   bookst {
        int Num;
        char AQeOGay [26];
    };
    struct   bookst *book;
    int cnt [26], num, i, DhLpCZFq1, bT8dSm = (796 - 796), sv64OraW5yo = (829 - 829);
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
        while (i < 26) {
            cnt[i] = 0;
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
            i++;
        };
    }
    scanf ("%d", &num);
    book = (struct   bookst *) malloc (num * sizeof (struct   bookst));
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
    for (i = 0; num > i; i++) {
        scanf ("%d%s", &book[i].Num, book[i].AQeOGay);
        {
            DhLpCZFq1 = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (book[i].AQeOGay[DhLpCZFq1] != 0) {
                cnt[book[i].AQeOGay[DhLpCZFq1] - 'A']++;
                DhLpCZFq1++;
            };
        };
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < 26) {
            if (bT8dSm < cnt[i]) {
                bT8dSm = cnt[i];
                sv64OraW5yo = i;
            }
            i++;
        };
    }
    printf ("%c\n%d\n", 'A' + sv64OraW5yo, bT8dSm);
    {
        i = 0;
        while (i < num) {
            {
                DhLpCZFq1 = 0;
                while (book[i].AQeOGay[DhLpCZFq1] != 0) {
                    if (book[i].AQeOGay[DhLpCZFq1] == 'A' + sv64OraW5yo)
                        printf ("%d\n", book[i].Num);
                    DhLpCZFq1++;
                };
            }
            i++;
        };
    }
    return 0;
}

