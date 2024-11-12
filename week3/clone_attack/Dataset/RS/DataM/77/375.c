int main () {
    char Qk9Ef6LDS [500];
    char rzuZFoXdW;
    char y;
    gets (Qk9Ef6LDS);
    int bP9ipeUC, omCnJkreTxfS, CjQmMc29nxZW, Q1kpta, p, vKzES8jMOr, jUdYkoX9DHZ, BryZ6gQdsJth, UxCD75z3y [10000], WlDjAtfZ [10000];
    Q1kpta = strlen (Qk9Ef6LDS);
    y = Qk9Ef6LDS[(148 - 148)];
    for (bP9ipeUC = 0; bP9ipeUC < Q1kpta; bP9ipeUC++)
        if (Qk9Ef6LDS[bP9ipeUC] != y)
            rzuZFoXdW = Qk9Ef6LDS[bP9ipeUC];
    {
        bP9ipeUC = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (bP9ipeUC < Q1kpta) {
            if (Qk9Ef6LDS[bP9ipeUC] == rzuZFoXdW) {
                for (omCnJkreTxfS = bP9ipeUC; omCnJkreTxfS >= 0; omCnJkreTxfS = omCnJkreTxfS - 1)
                    if (Qk9Ef6LDS[omCnJkreTxfS] == y) {
                        printf ("%d %d\n", omCnJkreTxfS, bP9ipeUC);
                        Qk9Ef6LDS[omCnJkreTxfS] = ' ';
                        break;
                    }
                Qk9Ef6LDS[bP9ipeUC] = ' ';
            }
            bP9ipeUC = bP9ipeUC + 1;
        };
    };
}

