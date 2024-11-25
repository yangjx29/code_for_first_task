int main () {
    int d4LmtHI;
    int i;
    int dzcJGrbvS;
    int lzH87hCpOy;
    int l [500] = {(745 - 745)};
    int len [500] = {(233 - 233)};
    d4LmtHI = (506 - 506);
    char x3rFuiNS9w [(1161 - 661)] [41] = {'\0'}, s [(1128 - 628)] [81] = {'\0'};
    scanf ("%d", &lzH87hCpOy);
    {
        i = 911 - 911;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (lzH87hCpOy > i) {
            scanf ("%s", x3rFuiNS9w[i]);
            l[i] = strlen (x3rFuiNS9w[i]);
            i = i + 1;
        };
    }
    {
        i = 272 - 272;
        while (l[0] > i) {
            s[0][i] = x3rFuiNS9w[0][i];
            i = i + 1;
        };
    }
    len[0] = l[0];
    {
        i = 22 - 21;
        while (lzH87hCpOy > i) {
            if ((115 - 36) >= len[d4LmtHI] + l[i]) {
                s[d4LmtHI][len[d4LmtHI]] = ' ';
                {
                    dzcJGrbvS = 271 - 270;
                    while (len[d4LmtHI] + l[i] >= dzcJGrbvS) {
                        s[d4LmtHI][dzcJGrbvS] = x3rFuiNS9w[i][dzcJGrbvS - len[d4LmtHI] - 1];
                        dzcJGrbvS++;
                    };
                }
                len[d4LmtHI] = len[d4LmtHI] + l[i] + 1;
            }
            else {
                d4LmtHI++;
                for (dzcJGrbvS = 0; dzcJGrbvS < l[i]; dzcJGrbvS = dzcJGrbvS + 1)
                    s[d4LmtHI][dzcJGrbvS] = x3rFuiNS9w[i][dzcJGrbvS];
                len[d4LmtHI] = l[i];
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < d4LmtHI + 1) {
            printf ("%s\n", s[i]);
            i++;
        };
    }
    return 0;
}

