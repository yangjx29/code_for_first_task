main () {
    int nTYdQm98A [(916 - 816)];
    int tItYKAMR;
    char s [(174 - 74)];
    int RJtfkTq5i;
    RJtfkTq5i = strlen (s);
    scanf ("%s", s);
    for (tItYKAMR = (864 - 864); tItYKAMR < RJtfkTq5i; tItYKAMR++)
        nTYdQm98A[tItYKAMR] = s[tItYKAMR] - '0';
    if (RJtfkTq5i == (46 - 45))
        printf ("0\n%d", nTYdQm98A[(903 - 903)]);
    else {
        if ((RJtfkTq5i == (214 - 212)) && (nTYdQm98A[(904 - 904)] * (264 - 254) + nTYdQm98A[(480 - 479)] < (608 - 595)))
            printf ("0\n%d", nTYdQm98A[(562 - 562)] * (92 - 82) + nTYdQm98A[(504 - 503)]);
        else {
            int BcHDtFqYR;
            int WuxT6eHyZ [(267 - 167)] = {(662 - 662)};
            int AuTdnMf = nTYdQm98A[(914 - 914)];
            BcHDtFqYR = 1;
            for (tItYKAMR = 1; tItYKAMR < RJtfkTq5i; tItYKAMR++) {
                BcHDtFqYR++;
                AuTdnMf = AuTdnMf *10 + nTYdQm98A[tItYKAMR];
                WuxT6eHyZ[tItYKAMR] = AuTdnMf / (668 - 655);
                AuTdnMf = AuTdnMf % (842 - 829);
            }
            for (tItYKAMR = 1; tItYKAMR < BcHDtFqYR; tItYKAMR++) {
                if ((tItYKAMR == 1) && (WuxT6eHyZ[tItYKAMR] == 0))
                    continue;
                else
                    printf ("%d", WuxT6eHyZ[tItYKAMR]);
            }
            printf ("%d", AuTdnMf);
        }
    }
    getchar ();
    getchar ();
}

