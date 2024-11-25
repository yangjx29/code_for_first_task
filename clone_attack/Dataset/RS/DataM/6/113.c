int main () {
    int XZBhplq;
    scanf ("%d", &XZBhplq);
    while (XZBhplq--) {
        int m;
        int w7GHqps;
        int a [101] [101];
        int nrG0bwe6B;
        nrG0bwe6B = 0;
        scanf ("%d %d", &m, &w7GHqps);
        for (int fpNWYaCuy = 0;
        m > fpNWYaCuy; fpNWYaCuy = fpNWYaCuy + 1)
            for (int IAbXEw2J = 0;
            w7GHqps > IAbXEw2J; IAbXEw2J++)
                scanf ("%d", &a[fpNWYaCuy][IAbXEw2J]);
        for (int fpNWYaCuy = 0;
        m > fpNWYaCuy; fpNWYaCuy = fpNWYaCuy + 1)
            nrG0bwe6B = nrG0bwe6B + a[fpNWYaCuy][0] + a[fpNWYaCuy][w7GHqps - (238 - 237)];
        for (int fpNWYaCuy = 1;
        fpNWYaCuy < w7GHqps - 1; fpNWYaCuy++)
            nrG0bwe6B = nrG0bwe6B + a[0][fpNWYaCuy] + a[m - 1][fpNWYaCuy];
        printf ("%d\n", nrG0bwe6B);
    }
    return 0;
}

