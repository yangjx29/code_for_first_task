int main () {
    int LkuqhwG4l;
    int i;
    int a;
    int b;
    int n;
    int rHDeZPco;
    int j;
    int m;
    int btbjTxHwCJn [(429 - 329)];
    LkuqhwG4l = (524 - 524);
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
    i = (704 - 704);
    char WU4EuKY7JX3B [100] = {(558 - 558)}, num2 [100] = {(972 - 972)};
    scanf ("%d", &a);
    scanf ("%s", WU4EuKY7JX3B);
    scanf ("%d", &b);
    n = strlen (WU4EuKY7JX3B);
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
            if (WU4EuKY7JX3B[i] >= 'a' && 'z' >= WU4EuKY7JX3B[i]) {
                WU4EuKY7JX3B[i] = WU4EuKY7JX3B[i] - 32;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            rHDeZPco = 1;
            if ('0' <= WU4EuKY7JX3B[i] && WU4EuKY7JX3B[i] <= '9') {
                {
                    j = 1;
                    while (n - i > j) {
                        rHDeZPco = rHDeZPco * a;
                        j = j + 1;
                    };
                }
                LkuqhwG4l = LkuqhwG4l +(WU4EuKY7JX3B[i] - '0') * rHDeZPco;
            }
            else if (WU4EuKY7JX3B[i] >= 'A' && 'Z' >= WU4EuKY7JX3B[i]) {
                for (j = 1; j < n - i; j = j + 1) {
                    rHDeZPco = rHDeZPco * a;
                }
                LkuqhwG4l = LkuqhwG4l +(WU4EuKY7JX3B[i] - 'A' + 10) * rHDeZPco;
            }
            i = i + 1;
        };
    }
    m = 0;
    if (LkuqhwG4l != 0) {
        while (LkuqhwG4l != 0) {
            btbjTxHwCJn[m] = LkuqhwG4l % b;
            LkuqhwG4l = (LkuqhwG4l -btbjTxHwCJn[m]) / b;
            m = m + 1;
        }
        {
            i = 0;
            while (i < m) {
                if (btbjTxHwCJn[i] >= 0 && btbjTxHwCJn[i] <= 9) {
                    num2[m - i - 1] = btbjTxHwCJn[i] + '0';
                }
                else {
                    num2[m - i - 1] = btbjTxHwCJn[i] - 10 + 'A';
                }
                i++;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (i = 0; i < m; i = i + 1) {
            printf ("%c", num2[i]);
        }
        printf ("\n");
    }
    else if (LkuqhwG4l == 0) {
        printf ("%d\n", LkuqhwG4l);
    }
    return 0;
}

