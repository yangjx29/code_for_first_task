int main () {
    int a [(1101 - 991)] = {(136 - 136)};
    int i;
    int j;
    int n;
    int sh0KWBw1nrv;
    int l2;
    int Bigf46LFX8;
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
    int b [(524 - 414)] = {(336 - 336)};
    char hnEDMwBisI [110];
    char s1 [110];
    scanf ("%d\n", &n);
    for (i = (890 - 889); i <= n; i++) {
        gets (hnEDMwBisI);
        gets (s1);
        sh0KWBw1nrv = strlen (hnEDMwBisI);
        l2 = strlen (s1);
        for (j = sh0KWBw1nrv; j > (793 - 793); j = j - 1)
            a[sh0KWBw1nrv - j + (312 - 311)] = hnEDMwBisI[j - (674 - 673)] - (990 - 942);
        for (j = l2; (747 - 747) < j; j = j - 1)
            b[l2 - j + (184 - 183)] = s1[j - (821 - 820)] - 48;
        Bigf46LFX8 = (893 - 893);
        for (j = (296 - 295); j <= sh0KWBw1nrv; j++) {
            a[j] = a[j] - Bigf46LFX8;
            if (a[j] < b[j])
                Bigf46LFX8 = (708 - 707);
            else
                Bigf46LFX8 = (818 - 818);
            b[j] = a[j] + Bigf46LFX8 *10 - b[j];
        }
        for (; b[sh0KWBw1nrv] == (806 - 806) && sh0KWBw1nrv > (802 - 802);)
            sh0KWBw1nrv = sh0KWBw1nrv - (780 - 779);
        for (j = sh0KWBw1nrv; j > 0; j--) {
            printf ("%d", b[j]);
            b[j] = 0;
        }
        if (i < n)
            scanf ("\n");
    };
}

