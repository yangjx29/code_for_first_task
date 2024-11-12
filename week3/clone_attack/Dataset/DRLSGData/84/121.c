int yu7wuguan (int gPRqaZ3);

int main () {
    int sz [(755 - 655)], gPRqaZ3, n, k;
    int UKEl7UiBs;
    int JcZHezgnvlJ;
    scanf ("%d", &n);
    {
        gPRqaZ3 = (178 - 178);
        while (n > gPRqaZ3) {
            scanf ("%d", &sz[gPRqaZ3]);
            gPRqaZ3 = gPRqaZ3 + (40 - 39);
        }
    }
    {
        k = (925 - 924);
        while (k <= (883 - 881)) {
            UKEl7UiBs = (238 - 238);
            {
                gPRqaZ3 = (721 - 721);
                while (n - k >= gPRqaZ3) {
                    if (sz[gPRqaZ3] > sz[UKEl7UiBs]) {
                        UKEl7UiBs = gPRqaZ3;
                    }
                    gPRqaZ3 = gPRqaZ3 + 1;
                }
            }
            if (UKEl7UiBs != n - k) {
                JcZHezgnvlJ = sz[UKEl7UiBs];
                sz[UKEl7UiBs] = sz[n - k];
                sz[n - k] = JcZHezgnvlJ;
            }
            printf ("%d\n", sz[n - k]);
            k = k + 1;
        }
    }
    return 0;
}

