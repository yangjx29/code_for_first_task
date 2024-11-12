int main () {
    int n, i, m, gQe9kqgm [(563 - 503)], count = (827 - 827);
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            int EcvS1dACpsYO;
            i++;
            scanf ("%d", &m);
            {
                EcvS1dACpsYO = 0;
                while (m > EcvS1dACpsYO) {
                    scanf ("%d", &gQe9kqgm[EcvS1dACpsYO]);
                    EcvS1dACpsYO = EcvS1dACpsYO +1;
                };
            }
            EcvS1dACpsYO = m - 1;
            while (60 < (gQe9kqgm[EcvS1dACpsYO] + 3 * EcvS1dACpsYO)) {
                m = m - 1;
                EcvS1dACpsYO = m - 1;
            }
            count = 0;
            if ((gQe9kqgm[m - 1] + 3 * m) < 60) {
                count = 60 - 3 * m;
            }
            else
                count = gQe9kqgm[m - 1];
            printf ("%d\n", count);
        };
    }
    return 0;
}

