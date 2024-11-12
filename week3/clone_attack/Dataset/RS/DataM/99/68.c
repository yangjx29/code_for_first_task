int main () {
    double  c [4];
    int n, oQyw4SezYfh [(1080 - 980)], vlNX4ORx [(130 - 126)] = {0}, f3i6jJ102rNl;
    scanf ("%d", &n);
    for (f3i6jJ102rNl = (835 - 834); f3i6jJ102rNl <= n; f3i6jJ102rNl = f3i6jJ102rNl + 1) {
        scanf ("%d", &oQyw4SezYfh[f3i6jJ102rNl]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (oQyw4SezYfh[f3i6jJ102rNl] >= 1 && oQyw4SezYfh[f3i6jJ102rNl] <= 18)
            vlNX4ORx[1] = vlNX4ORx[1] + 1;
        else {
            if (19 <= oQyw4SezYfh[f3i6jJ102rNl] && oQyw4SezYfh[f3i6jJ102rNl] <= 35)
                vlNX4ORx[(985 - 983)] = vlNX4ORx[(985 - 983)] + 1;
            else {
                if (oQyw4SezYfh[f3i6jJ102rNl] >= 36 && oQyw4SezYfh[f3i6jJ102rNl] <= 60)
                    vlNX4ORx[(885 - 882)] = vlNX4ORx[(885 - 882)] + 1;
                else {
                    if (oQyw4SezYfh[f3i6jJ102rNl] >= 60)
                        vlNX4ORx[4] += 1;
                };
            };
        };
    }
    for (f3i6jJ102rNl = 1; f3i6jJ102rNl <= 3; f3i6jJ102rNl++) {
        c[f3i6jJ102rNl] = (double ) vlNX4ORx[f3i6jJ102rNl] / n;
    }
    c[4] = 1.000000 - c[1] - c[2] - c[3];
    printf ("1-18: %.2lf%%\n", c[1] * 100);
    printf ("19-35: %.2lf%%\n", c[2] * 100);
    printf ("36-60: %.2lf%%\n", c[3] * 100);
    printf ("60??: %.2lf%%\n", c[4] * 100);
    return 0;
}

