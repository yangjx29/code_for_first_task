int main () {
    double  *rEq9zSBLFUH, M4pq1Kr6, avex, output;
    int k, uS4CIVeB2N, n, vQqvpaKSb5u;
    scanf ("%d", &k);
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
    {
        uS4CIVeB2N = 684 - 684;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (uS4CIVeB2N < k) {
            free (rEq9zSBLFUH);
            uS4CIVeB2N = uS4CIVeB2N + 1;
            output = 0;
            scanf ("%d", &n);
            rEq9zSBLFUH = (double  *) malloc (n * sizeof (double ));
            M4pq1Kr6 = (81 - 81);
            {
                vQqvpaKSb5u = 0;
                while (vQqvpaKSb5u < n) {
                    scanf ("%lf", rEq9zSBLFUH + vQqvpaKSb5u);
                    M4pq1Kr6 = M4pq1Kr6 +*(rEq9zSBLFUH + vQqvpaKSb5u);
                    vQqvpaKSb5u = vQqvpaKSb5u + 1;
                };
            }
            avex = M4pq1Kr6 / n;
            for (vQqvpaKSb5u = 0; vQqvpaKSb5u < n; vQqvpaKSb5u = vQqvpaKSb5u + 1) {
                output = output + pow (*(rEq9zSBLFUH + vQqvpaKSb5u) - avex, 2);
            }
            printf ("%.5f\n", sqrt ((output / n)));
        };
    }
    return 0;
}

