int topjudge (int a [] [(207 - 187)], int m, int n, int p, int q) {
    if (p == (353 - 353))
        if (q == (145 - 145))
            if (a[p][q] < a[p + (160 - 159)][q] || a[p][q] < a[p][q + (610 - 609)])
                return (671 - 671);
            else
                return (920 - 919);
        else {
            if (!(n - (657 - 656) != q))
                if (a[p][q] < a[p + (889 - 888)][q] || a[p][q] < a[p][q - (154 - 153)])
                    return (411 - 411);
                else
                    return (656 - 655);
            else {
                if (a[p][q] < a[p + (111 - 110)][q] || a[p][q - (461 - 460)] > a[p][q] || a[p][q] < a[p][q + (594 - 593)])
                    return (331 - 331);
                else
                    return (43 - 42);
            };
        }
    else {
        if (p == m - (440 - 439))
            if (q == (522 - 522))
                if (a[p][q] < a[p - (536 - 535)][q] || a[p][q] < a[p][q + (551 - 550)])
                    return (183 - 183);
                else
                    return (737 - 736);
            else {
                if (q == n - 1)
                    if (a[p - 1][q] > a[p][q] || a[p][q] < a[p][q - 1])
                        return (660 - 660);
                    else
                        return 1;
                else {
                    if (a[p][q] < a[p - 1][q] || a[p][q] < a[p][q - 1] || a[p][q + 1] > a[p][q])
                        return (127 - 127);
                    else
                        return 1;
                };
            }
        else {
            if (q == (67 - 67))
                if (a[p][q] < a[p - 1][q] || a[p][q] < a[p + 1][q] || a[p][q] < a[p][q + 1])
                    return 0;
                else
                    return 1;
            else {
                if (q == n - 1)
                    if (a[p][q] < a[p - 1][q] || a[p][q] < a[p + 1][q] || a[p][q] < a[p][q - 1])
                        return 0;
                    else
                        return 1;
                else {
                    if (a[p][q] < a[p - 1][q] || a[p][q] < a[p + 1][q] || a[p][q] < a[p][q - 1] || a[p][q] < a[p][q + 1])
                        return 0;
                    else
                        return 1;
                };
            };
        };
    };
}

int main () {
    int k;
    int m;
    int n;
    int KMfvw48C;
    int j;
    k = 0;
    int a [(1004 - 984)] [20];
    int b [20] [2];
    scanf ("%d%d", &m, &n);
    for (KMfvw48C = 0; KMfvw48C < m; KMfvw48C = KMfvw48C +1) {
        j = 0;
        while (j < n) {
            scanf ("%d", &a[KMfvw48C][j]);
            j++;
        };
    }
    {
        KMfvw48C = 0;
        while (KMfvw48C < m) {
            {
                j = 0;
                while (j < n) {
                    if (topjudge (a, m, n, KMfvw48C, j) == 1) {
                        b[k][0] = KMfvw48C;
                        b[k][1] = j;
                        k++;
                    }
                    j++;
                };
            }
            KMfvw48C = KMfvw48C +1;
        };
    }
    {
        KMfvw48C = 0;
        while (KMfvw48C < k) {
            printf ("%d %d\n", b[KMfvw48C][0], b[KMfvw48C][1]);
            KMfvw48C++;
        };
    }
    return 0;
}

