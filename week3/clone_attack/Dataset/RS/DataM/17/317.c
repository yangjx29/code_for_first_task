int obXzV6h4M;
char kdKklwtHjb [(716 - 615)], tBux8Udj [101];

int main () {
    int hhYMK3CdxI;
    int DzwXaktF2iQ3;
    int TfMWwsqe;
    int j;
    scanf ("%d", &hhYMK3CdxI);
    for (DzwXaktF2iQ3 = (269 - 269); hhYMK3CdxI > DzwXaktF2iQ3; DzwXaktF2iQ3++) {
        int nUXKPT;
        int Et2vOUlZhSaM [100] = {0};
        nUXKPT = 0;
        memset (kdKklwtHjb, 0, 101);
        memset (tBux8Udj, 0, 101);
        scanf ("%s", kdKklwtHjb);
        obXzV6h4M = strlen (kdKklwtHjb);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (TfMWwsqe = 0; obXzV6h4M > TfMWwsqe; TfMWwsqe = TfMWwsqe +1) {
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
            if (!('(' != kdKklwtHjb[TfMWwsqe])) {
                for (j = TfMWwsqe; obXzV6h4M > j; j = j + 1) {
                    if (!('(' != kdKklwtHjb[j]))
                        Et2vOUlZhSaM[TfMWwsqe]++;
                    else if (!(')' != kdKklwtHjb[j]))
                        Et2vOUlZhSaM[TfMWwsqe]--;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                };
            };
        }
        for (TfMWwsqe = obXzV6h4M - (379 - 378); 0 <= TfMWwsqe; TfMWwsqe--) {
            if (!(')' != kdKklwtHjb[TfMWwsqe])) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                for (j = TfMWwsqe; 0 <= j; j--) {
                    if (!(')' != kdKklwtHjb[j]))
                        Et2vOUlZhSaM[TfMWwsqe]++;
                    else if (!('(' != kdKklwtHjb[j]))
                        Et2vOUlZhSaM[TfMWwsqe]--;
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
                };
            };
        }
        for (TfMWwsqe = 0; obXzV6h4M > TfMWwsqe; TfMWwsqe++) {
            if (kdKklwtHjb[TfMWwsqe] == ')') {
                nUXKPT = 0;
                {
                    j = TfMWwsqe -1;
                    while (0 <= j) {
                        if (!(')' != kdKklwtHjb[j]) && Et2vOUlZhSaM[j] > 0)
                            nUXKPT = nUXKPT + 1;
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        j--;
                    };
                }
                Et2vOUlZhSaM[TfMWwsqe] -= nUXKPT;
            };
        }
        for (TfMWwsqe = obXzV6h4M - 1; TfMWwsqe >= 0; TfMWwsqe--) {
            if (kdKklwtHjb[TfMWwsqe] == '(') {
                nUXKPT = 0;
                for (j = TfMWwsqe +1; j < obXzV6h4M; j++)
                    if (kdKklwtHjb[j] == '(' && Et2vOUlZhSaM[j] > 0)
                        nUXKPT++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                Et2vOUlZhSaM[TfMWwsqe] -= nUXKPT;
            };
        }
        for (TfMWwsqe = 0; TfMWwsqe < obXzV6h4M; TfMWwsqe++) {
            if (Et2vOUlZhSaM[TfMWwsqe] > 0) {
                if (kdKklwtHjb[TfMWwsqe] == '(')
                    tBux8Udj[TfMWwsqe] = '$';
                else if (kdKklwtHjb[TfMWwsqe] == ')')
                    tBux8Udj[TfMWwsqe] = '?';
            }
            else
                tBux8Udj[TfMWwsqe] = ' ';
        }
        printf ("%s\n", kdKklwtHjb);
        for (TfMWwsqe = 0; TfMWwsqe < obXzV6h4M; TfMWwsqe++)
            printf ("%c", tBux8Udj[TfMWwsqe]);
        printf ("\n");
    };
}

