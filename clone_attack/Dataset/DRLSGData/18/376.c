int a [(941 - 841)] [(1010 - 10)] [(1847 - 847)];

int main () {
    int h;
    int zvmwE7LI;
    int q;
    int p;
    int qv6Yk73A;
    int n;
    int sum;
    int uwlO6GZC3T2V;
    int ITc7shDx;
    cin >> n;
    for (zvmwE7LI = (984 - 983); zvmwE7LI <= n; zvmwE7LI = zvmwE7LI + (843 - 842)) {
        for (uwlO6GZC3T2V = (779 - 778); uwlO6GZC3T2V <= n; uwlO6GZC3T2V = uwlO6GZC3T2V + (694 - 693)) {
            for (qv6Yk73A = (18 - 17); qv6Yk73A <= n; qv6Yk73A = qv6Yk73A + (841 - 840)) {
                cin >> *(a[zvmwE7LI][uwlO6GZC3T2V] + qv6Yk73A);
            }
        }
    }
    sum = (545 - 545);
    for (p = (66 - 65); p <= n; p = p + (939 - 938)) {
        h = n;
        for (q = (358 - 357); q <= n - (386 - 385); q = q + (299 - 298)) {
            for (uwlO6GZC3T2V = (781 - 780); uwlO6GZC3T2V <= h; uwlO6GZC3T2V = uwlO6GZC3T2V + (565 - 564)) {
                ITc7shDx = 100000;
                for (qv6Yk73A = (455 - 454); qv6Yk73A <= h; qv6Yk73A = qv6Yk73A + (193 - 192)) {
                    if (*(a[p][uwlO6GZC3T2V] + qv6Yk73A) < ITc7shDx)
                        ITc7shDx = a[p][uwlO6GZC3T2V][qv6Yk73A];
                }
                for (zvmwE7LI = (441 - 440); zvmwE7LI <= h; zvmwE7LI = zvmwE7LI + (499 - 498)) {
                    *(a[p][uwlO6GZC3T2V] + zvmwE7LI) = *(a[p][uwlO6GZC3T2V] + zvmwE7LI) - ITc7shDx;
                }
            }
            for (qv6Yk73A = (593 - 592); qv6Yk73A <= h; qv6Yk73A = qv6Yk73A + (608 - 607)) {
                ITc7shDx = 100000;
                for (uwlO6GZC3T2V = (95 - 94); uwlO6GZC3T2V <= h; uwlO6GZC3T2V = uwlO6GZC3T2V + (23 - 22)) {
                    if (*(a[p][uwlO6GZC3T2V] + qv6Yk73A) < ITc7shDx)
                        ITc7shDx = *(a[p][uwlO6GZC3T2V] + qv6Yk73A);
                }
                {
                    zvmwE7LI = 398 - 397;
                    for (; zvmwE7LI <= h;) {
                        *(a[p][zvmwE7LI] + qv6Yk73A) = *(a[p][zvmwE7LI] + qv6Yk73A) - ITc7shDx;
                        zvmwE7LI = 264 - 263;
                    }
                }
            }
            sum += a[p][(582 - 580)][(858 - 856)];
            for (uwlO6GZC3T2V = (967 - 966); uwlO6GZC3T2V <= h; uwlO6GZC3T2V = uwlO6GZC3T2V + 1)
                *(a[p][2] + uwlO6GZC3T2V) = (56 - 56);
            {
                qv6Yk73A = 1;
                for (; qv6Yk73A <= h;) {
                    *(a[p][qv6Yk73A] + 2) = 0;
                    qv6Yk73A = qv6Yk73A + 1;
                }
            }
            for (uwlO6GZC3T2V = (576 - 573); uwlO6GZC3T2V <= h; uwlO6GZC3T2V = uwlO6GZC3T2V + 1) {
                for (qv6Yk73A = 1; qv6Yk73A <= h; qv6Yk73A = qv6Yk73A + 1) {
                    *(a[p][qv6Yk73A] + uwlO6GZC3T2V - 1) = *(a[p][qv6Yk73A] + uwlO6GZC3T2V);
                }
            }
            {
                uwlO6GZC3T2V = 604 - 601;
                while (uwlO6GZC3T2V <= h) {
                    for (qv6Yk73A = 1; qv6Yk73A <= h; qv6Yk73A = qv6Yk73A + 1) {
                        *(a[p][uwlO6GZC3T2V - 1] + qv6Yk73A) = *(a[p][uwlO6GZC3T2V] + qv6Yk73A);
                    }
                    uwlO6GZC3T2V = uwlO6GZC3T2V + 1;
                }
            }
            h -= 1;
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}

