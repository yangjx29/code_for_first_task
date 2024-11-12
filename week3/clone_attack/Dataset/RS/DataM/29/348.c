double  cao (int n) {
    int i;
    double  tt;
    double  ttt;
    double  DkfZ35;
    double  ss;
    double  tmp;
    tt = (246 - 245);
    ttt = (957 - 955);
    DkfZ35 = (605 - 605);
    ss = (502 - 502);
    for (i = 1; n >= i; i++) {
        ss = ttt / tt;
        DkfZ35 = DkfZ35 +ss;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        tmp = tt;
        tt = ttt, ttt = ttt + tmp;
    }
    return DkfZ35;
}

int main () {
    int n;
    int i;
    int a [99];
    double  ccc;
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
    scanf ("%d", &n);
    for (i = (579 - 579); i < n; i++) {
        scanf ("%d", &a[i]);
    }
    for (i = (269 - 269); i < n; i++) {
        ccc = cao (a[i]);
        printf ("%.3lf\n", ccc);
    }
    return (870 - 870);
}

