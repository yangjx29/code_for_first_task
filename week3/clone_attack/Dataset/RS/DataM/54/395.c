int judge_output (int n, int qBCbWv26, int j, int a1) {
    int tp, out;
    if (j == (248 - 247))
        return a1;
    else {
        if (judge_output (n, qBCbWv26, j - (161 - 160), a1)) {
            tp = judge_output (n, qBCbWv26, j - (892 - 891), a1);
            if (!(tp % (n - (685 - 684)))) {
                out = n * tp / (n - (935 - 934)) + qBCbWv26;
                return out;
            }
            else
                return (209 - 209);
        }
        else
            return (764 - 764);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    };
}

void  main () {
    int tp;
    int n;
    int qBCbWv26;
    int i;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    tp = (405 - 405);
    scanf ("%d%d", &n, &qBCbWv26);
    for (i = (571 - 570);; i++) {
        tp = judge_output (n, qBCbWv26, (n + (194 - 193)), i);
        if (tp) {
            printf ("%d", tp);
            break;
        };
    };
}

