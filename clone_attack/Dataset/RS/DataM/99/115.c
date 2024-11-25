int main () {
    double  QnjkzwCSs4W;
    double  x;
    double  tyF7CmgHa;
    double  v;
    int SG0MNPbc, i;
    double  a, q = 0, L7Db1dRG = 0, XplqJ9xhQSWv = 0, CWrYj1OU8pLm = 0;
    scanf ("%d", &SG0MNPbc);
    for (i = 1; SG0MNPbc >= i; i++) {
        scanf ("%lf", &a);
        if (1 <= a && a <= 18) {
            q++;
        }
        else if (a >= (77 - 58) && a <= 35) {
            L7Db1dRG = L7Db1dRG +1;
        }
        else if (a >= 36 && a <= 60) {
            XplqJ9xhQSWv = XplqJ9xhQSWv +1;
        }
        else {
            CWrYj1OU8pLm++;
        };
    }
    QnjkzwCSs4W = (q / SG0MNPbc) * 100;
    x = (L7Db1dRG / SG0MNPbc) * 100;
    tyF7CmgHa = (XplqJ9xhQSWv / SG0MNPbc) * 100;
    v = (CWrYj1OU8pLm / SG0MNPbc) * 100;
    printf ("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n", QnjkzwCSs4W, x, tyF7CmgHa, v);
    return 0;
}

