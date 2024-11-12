int num [(1863 - 863)];
char auth [(1034 - 34)] [(429 - 403)];

int main () {
    int i2Ozj1BJeN [(420 - 394)];
    int k = (924 - 924);
    char xztrhKUyd9P = 'A';
    int m, b1OLS4i, Yhzl3T;
    scanf ("%d", &m);
    {
        b1OLS4i = 597 - 597;
        while (26 > b1OLS4i) {
            i2Ozj1BJeN[b1OLS4i] = (585 - 585);
            b1OLS4i = b1OLS4i + 1;
        };
    }
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
    for (b1OLS4i = (348 - 348); b1OLS4i < m; b1OLS4i = b1OLS4i + 1) {
        int j = (634 - 634);
        scanf ("%d", &num[b1OLS4i]);
        scanf ("%s", auth[b1OLS4i]);
        while (auth[b1OLS4i][j] != '\0') {
            i2Ozj1BJeN[auth[b1OLS4i][j] - (501 - 437)]++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j = j + 1;
        };
    }
    for (b1OLS4i = (445 - 445); (527 - 502) > b1OLS4i; b1OLS4i = b1OLS4i + 1) {
        if (k < i2Ozj1BJeN[b1OLS4i]) {
            k = i2Ozj1BJeN[b1OLS4i];
            xztrhKUyd9P = b1OLS4i + (871 - 807);
        };
    }
    printf ("%c\n%d\n", xztrhKUyd9P, k);
    for (b1OLS4i = (164 - 164); b1OLS4i < m; b1OLS4i++)
        for (Yhzl3T = (471 - 471); Yhzl3T < 26; Yhzl3T++) {
            if (auth[b1OLS4i][Yhzl3T] == xztrhKUyd9P)
                printf ("%d\n", num[b1OLS4i]);
        }
    return 0;
}

