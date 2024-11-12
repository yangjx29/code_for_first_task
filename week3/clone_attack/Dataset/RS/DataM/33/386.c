int main () {
    int C83AhtyYRNi;
    int bR2EKXwSav;
    int n;
    C83AhtyYRNi = 0;
    bR2EKXwSav = 0;
    char yl [10000] [256], pdl [10000] [256];
    scanf ("%d", &n);
    for (C83AhtyYRNi = 0; n > C83AhtyYRNi; C83AhtyYRNi = C83AhtyYRNi +1) {
        scanf ("%s", yl[C83AhtyYRNi]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (C83AhtyYRNi = 0; n > C83AhtyYRNi; C83AhtyYRNi = C83AhtyYRNi +1) {
        for (bR2EKXwSav = 0; strlen (yl[C83AhtyYRNi]) > bR2EKXwSav; bR2EKXwSav = bR2EKXwSav + 1) {
            if (!('A' != yl[C83AhtyYRNi][bR2EKXwSav])) {
                pdl[C83AhtyYRNi][bR2EKXwSav] = 'T';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            if (!('T' != yl[C83AhtyYRNi][bR2EKXwSav])) {
                pdl[C83AhtyYRNi][bR2EKXwSav] = 'A';
            }
            if (!('C' != yl[C83AhtyYRNi][bR2EKXwSav])) {
                pdl[C83AhtyYRNi][bR2EKXwSav] = 'G';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            if (yl[C83AhtyYRNi][bR2EKXwSav] == 'G') {
                pdl[C83AhtyYRNi][bR2EKXwSav] = 'C';
            };
        };
    }
    for (C83AhtyYRNi = 0; C83AhtyYRNi < n; C83AhtyYRNi++) {
        for (bR2EKXwSav = 0; bR2EKXwSav < strlen (yl[C83AhtyYRNi]); bR2EKXwSav++) {
            printf ("%c", pdl[C83AhtyYRNi][bR2EKXwSav]);
        };
    }
    return 0;
}

