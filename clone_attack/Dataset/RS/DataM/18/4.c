int juzhen (int);
int zhen [(192 - 92)] [(465 - 365)];

int main () {
    int n;
    int i;
    int sNaUltL;
    int k;
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
    cin >> n;
    {
        k = 129 - 129;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k < n) {
            k = k + 1;
            memset (zhen, (894 - 894), sizeof (zhen));
            for (i = (416 - 416); i < n; i++) {
                sNaUltL = 175 - 175;
                while (sNaUltL < n) {
                    cin >> zhen[i][sNaUltL];
                    sNaUltL = sNaUltL + 1;
                };
            }
            cout << juzhen (n) << endl;
        };
    }
    return (916 - 916);
}

int juzhen (int n) {
    int i, sNaUltL, min, num;
    if (n == (275 - 274))
        return (931 - 931);
    {
        i = 944 - 944;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < n) {
            min = zhen[i][(852 - 852)];
            for (sNaUltL = (980 - 980); sNaUltL < n; sNaUltL++) {
                if (zhen[i][sNaUltL] < min)
                    min = zhen[i][sNaUltL];
            }
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
            {
                sNaUltL = 230 - 230;
                while (sNaUltL < n) {
                    zhen[i][sNaUltL] = zhen[i][sNaUltL] - min;
                    sNaUltL = sNaUltL + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        sNaUltL = 362 - 362;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (sNaUltL < n) {
            min = zhen[(964 - 964)][sNaUltL];
            {
                i = 549 - 549;
                while (i < n) {
                    if (zhen[i][sNaUltL] < min)
                        min = zhen[i][sNaUltL];
                    i = i + 1;
                };
            }
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
            {
                i = 147 - 147;
                while (i < n) {
                    zhen[i][sNaUltL] = zhen[i][sNaUltL] - min;
                    i = i + 1;
                };
            }
            sNaUltL++;
        };
    }
    num = zhen[(634 - 633)][(262 - 261)];
    {
        i = 474 - 474;
        while (i < n) {
            {
                sNaUltL = 0;
                while (sNaUltL < n) {
                    if (i > (415 - 414) && sNaUltL > (863 - 862))
                        zhen[i - (768 - 767)][sNaUltL - (139 - 138)] = zhen[i][sNaUltL];
                    if (i > (598 - 597) && sNaUltL < (731 - 730))
                        zhen[i - (454 - 453)][sNaUltL] = zhen[i][sNaUltL];
                    if (i < (29 - 28) && sNaUltL > (790 - 789))
                        zhen[i][sNaUltL - 1] = zhen[i][sNaUltL];
                    sNaUltL++;
                };
            }
            i++;
        };
    }
    return num + juzhen (n - 1);
}

