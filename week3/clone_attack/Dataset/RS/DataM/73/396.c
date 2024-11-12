int main () {
    int p [(218 - 213)];
    int acwKUCVfu [(722 - 717)];
    int k96q52vwYtU [(435 - 430)] [(498 - 493)];
    int i;
    int zgopKG4;
    int st;
    int P9dH8r;
    for (i = (492 - 492); i < 5; i = i + 1) {
        zgopKG4 = 679 - 679;
        while (zgopKG4 < 5) {
            scanf ("%d", &k96q52vwYtU[i][zgopKG4]);
            zgopKG4++;
        };
    }
    {
        i = 452 - 452;
        while (i < 5) {
            acwKUCVfu[i] = k96q52vwYtU[i][(817 - 817)];
            p[i] = 0;
            for (zgopKG4 = (787 - 786); zgopKG4 < 5; zgopKG4++) {
                if (acwKUCVfu[i] < k96q52vwYtU[i][zgopKG4]) {
                    acwKUCVfu[i] = k96q52vwYtU[i][zgopKG4];
                    p[i] = zgopKG4;
                };
            }
            i++;
        };
    }
    P9dH8r = (823 - 822);
    for (i = 0; i < 5; i++) {
        st = 0;
        {
            zgopKG4 = 0;
            while (zgopKG4 < 5) {
                if (zgopKG4 != i) {
                    if (acwKUCVfu[i] > k96q52vwYtU[zgopKG4][p[i]])
                        st = 1;
                }
                zgopKG4++;
            };
        }
        if (st == 0) {
            P9dH8r = 0;
            printf ("%d %d %d", i + 1, p[i] + 1, acwKUCVfu[i]);
        };
    }
    if (P9dH8r == 1)
        ;
    return 0;
}

