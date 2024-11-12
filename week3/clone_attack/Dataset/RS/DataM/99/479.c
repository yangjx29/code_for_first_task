int main (int IPqznSjf, char *argv []) {
    int i;
    int n;
    int ewNKO0nzCh [(215 - 115)];
    int rDBA7ML;
    int b3aynY;
    int SlbqMVeg1US;
    int N62gWHTJ;
    rDBA7ML = 0;
    b3aynY = 0;
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
    SlbqMVeg1US = 0;
    N62gWHTJ = 0;
    int ZLO7IqUuz4;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d", &ewNKO0nzCh[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((ewNKO0nzCh[i] >= 1) && (ewNKO0nzCh[i] <= 18))
            rDBA7ML = rDBA7ML + 1;
        else if ((ewNKO0nzCh[i] >= 19) && (ewNKO0nzCh[i] <= 35))
            b3aynY = b3aynY + 1;
        else if ((ewNKO0nzCh[i] >= 36) && (ewNKO0nzCh[i] <= 60))
            SlbqMVeg1US = SlbqMVeg1US +1;
        else
            N62gWHTJ = N62gWHTJ +1;
    }
    ZLO7IqUuz4 = rDBA7ML + b3aynY + SlbqMVeg1US +N62gWHTJ;
    printf ("1-18: %.2lf%%\n", (double ) rDBA7ML * 100 / ZLO7IqUuz4);
    printf ("19-35: %.2lf%%\n", (double ) b3aynY * 100 / ZLO7IqUuz4);
    printf ("36-60: %.2lf%%\n", (double ) SlbqMVeg1US *100 / ZLO7IqUuz4);
    printf ("60??: %.2lf%%\n", (double ) N62gWHTJ *100 / ZLO7IqUuz4);
    return 0;
}

