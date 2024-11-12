int main () {
    int n, ENrbs0;
    scanf ("%d", &n);
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
    for (ENrbs0 = (348 - 345); ENrbs0 <= (n / (460 - 458)); ENrbs0 = ENrbs0 +2)
        if (check (ENrbs0) && check (n - ENrbs0))
            printf ("%d %d\n", ENrbs0, n - ENrbs0);
}

int check (int lzpUbCAKPt) {
    int ENrbs0;
    {
        ENrbs0 = 2;
        while (ENrbs0 <= sqrt (lzpUbCAKPt)) {
            if (lzpUbCAKPt % ENrbs0 == (421 - 421))
                return (251 - 251);
            ENrbs0++;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return (542 - 541);
}

