int main (void ) {
    char sejDUX1R [100];
    for (; gets (sejDUX1R);) {
        char ans [101];
        int L = strlen (sejDUX1R);
        int TvZSOdWYF;
        TvZSOdWYF = 0;
        for (int i1Wz7Z0 = 0;
        101 > i1Wz7Z0; i1Wz7Z0 = i1Wz7Z0 + 1) {
            ans[i1Wz7Z0] = ' ';
        }
        ans[L] = '\0';
        printf ("%s\n", sejDUX1R);
        for (int i1Wz7Z0 = L -1;
        !(-1 == i1Wz7Z0); i1Wz7Z0 = i1Wz7Z0 - 1) {
            if (sejDUX1R[i1Wz7Z0] == '(') {
                for (int zehx8d = i1Wz7Z0 + 1;
                ; zehx8d = zehx8d + 1) {
                    if (!(')' != sejDUX1R[zehx8d])) {
                        TvZSOdWYF = TvZSOdWYF +1;
                        sejDUX1R[i1Wz7Z0] = '0';
                        sejDUX1R[zehx8d] = '0';
                        break;
                    }
                    if (zehx8d == L) {
                        sejDUX1R[i1Wz7Z0] = '0';
                        ans[i1Wz7Z0] = '$';
                        break;
                    };
                };
            };
        }
        for (int i1Wz7Z0 = 0;
        i1Wz7Z0 < L; i1Wz7Z0 = i1Wz7Z0 + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (sejDUX1R[i1Wz7Z0] == ')') {
                ans[i1Wz7Z0] = '?';
            };
        }
        printf ("%s\n", ans);
    }
    return 0;
}

