main () {
    int m;
    int x;
    int y;
    int n;
    int q;
    int kK4V7E0cX;
    m = 0;
    x = 0;
    y = 0;
    struct   person {
        char sex [7];
        float height;
    };
    struct   person people [n];
    struct   person eDTpq8Co69x [m];
    struct   person female [n - m];
    struct   person b;
    scanf ("%d", &n);
    {
        int i = 0;
        while (i <= n - (134 - 133)) {
            scanf ("%s %f", people[i].sex, &people[i].height);
            i = i + 1;
        };
    }
    {
        int j = 0;
        while (j <= n - 1) {
            if (people[j].sex[0] == 'm')
                m = m + 1;
            j++;
        };
    }
    {
        int k = 0;
        while (n - 1 >= k) {
            if (people[k].sex[0] == 'm') {
                eDTpq8Co69x[x] = people[k];
                x++;
            }
            else {
                female[y] = people[k];
                y = y + 1;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            k = k + 1;
        };
    }
    {
        int p = 0;
        while (p <= m - 2) {
            for (q = 0; q <= m - 2 - p; q = q + 1) {
                if (eDTpq8Co69x[q + 1].height < eDTpq8Co69x[q].height) {
                    b = eDTpq8Co69x[q + 1];
                    eDTpq8Co69x[q + 1] = eDTpq8Co69x[q];
                    eDTpq8Co69x[q] = b;
                };
            }
            p = p + 1;
        };
    }
    for (int r = 0;
    r <= y - 2; r++) {
        kK4V7E0cX = 0;
        while (kK4V7E0cX <= y - 2 - r) {
            if (female[kK4V7E0cX + 1].height > female[kK4V7E0cX].height) {
                b = female[kK4V7E0cX + 1];
                female[kK4V7E0cX + 1] = female[kK4V7E0cX];
                female[kK4V7E0cX] = b;
            }
            kK4V7E0cX = kK4V7E0cX + 1;
        };
    }
    {
        int N1DHWFcrl = 0;
        while (N1DHWFcrl <= m - 1) {
            printf ("%.2f ", eDTpq8Co69x[N1DHWFcrl].height);
            N1DHWFcrl = N1DHWFcrl +1;
        };
    }
    for (int u = 0;
    u <= y - 2; u = u + 1) {
        printf ("%.2f ", female[u].height);
    }
    printf ("%.2f", female[y - 1].height);
}

