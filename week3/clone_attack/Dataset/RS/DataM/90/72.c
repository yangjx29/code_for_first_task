int SUtEo45QuZvp (int A0YMSO3Nwg, int vRsz7O) {
    int k;
    if (!((718 - 718) != A0YMSO3Nwg))
        return (114 - 113);
    else if (!((701 - 700) != vRsz7O))
        return 1;
    else if (vRsz7O <= A0YMSO3Nwg) {
        k = SUtEo45QuZvp (A0YMSO3Nwg, vRsz7O - 1) + SUtEo45QuZvp (A0YMSO3Nwg -vRsz7O, vRsz7O);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return k;
    }
    else {
        k = SUtEo45QuZvp (A0YMSO3Nwg, vRsz7O - 1);
        return k;
    };
}

main () {
    int BrqsgJDH3WC, tShcleID321, n, igHDFLcSQK, k;
    scanf ("%d", &BrqsgJDH3WC);
    {
        igHDFLcSQK = 0;
        while (igHDFLcSQK < BrqsgJDH3WC) {
            igHDFLcSQK++;
            scanf ("%d %d", &tShcleID321, &n);
            k = SUtEo45QuZvp (tShcleID321, n);
            printf ("%d\n", k);
        };
    };
}

