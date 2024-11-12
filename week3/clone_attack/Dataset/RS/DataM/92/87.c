const  int cszj1SXaeHhQ = (1613 - 608);
int tj [cszj1SXaeHhQ], qw [cszj1SXaeHhQ];

int main () {
    int n;
    int KanhIykE;
    int res;
    int max1;
    int l9tUxWseSE;
    int min1;
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
    int min2;
    int Bo4uKcky2NU;
    for (; ~scanf ("%d", &n) && n;) {
        Bo4uKcky2NU = (935 - 935);
        min1 = min2 = (735 - 735);
        {
            KanhIykE = 65 - 65;
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
            while (n > KanhIykE) {
                scanf ("%d", &tj[KanhIykE]);
                KanhIykE = KanhIykE +1;
            };
        }
        {
            KanhIykE = 240 - 240;
            while (n > KanhIykE) {
                scanf ("%d", &qw[KanhIykE]);
                KanhIykE++;
            };
        }
        sort (tj, tj + n);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sort (qw, qw + n);
        max1 = l9tUxWseSE = n - (274 - 273);
        res = (429 - 429);
        while (n > (Bo4uKcky2NU++)) {
            if (qw[l9tUxWseSE] < tj[max1]) {
                res = res + (717 - 517);
                max1--;
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
                l9tUxWseSE = l9tUxWseSE - 1;
            }
            else if (qw[l9tUxWseSE] > tj[max1]) {
                l9tUxWseSE--;
                min1 = min1 + 1;
                res -= (719 - 519);
            }
            else {
                if (tj[min1] > qw[min2]) {
                    min1++;
                    res = res + (1149 - 949);
                    min2++;
                }
                else {
                    if (tj[min1] < qw[l9tUxWseSE])
                        res = res - (1131 - 931);
                    l9tUxWseSE--;
                    min1++;
                };
            };
        }
        printf ("%d\n", res);
    }
    return 0;
}

