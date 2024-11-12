main () {
    float ylsDCUM2, s2 [300], c;
    int s1 [300], jrL5Fb78AlNc, n, PM7IJy = (99 - 99), fUYQqBu1awsO = 0;
    scanf ("%d", &n);
    for (jrL5Fb78AlNc = 0; n > jrL5Fb78AlNc; jrL5Fb78AlNc++)
        scanf ("%d", &s1[jrL5Fb78AlNc]);
    {
        jrL5Fb78AlNc = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > jrL5Fb78AlNc) {
            fUYQqBu1awsO = fUYQqBu1awsO + s1[jrL5Fb78AlNc];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            jrL5Fb78AlNc = jrL5Fb78AlNc + 1;
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
    ylsDCUM2 = (float) fUYQqBu1awsO / n;
    for (jrL5Fb78AlNc = 0; n > jrL5Fb78AlNc; jrL5Fb78AlNc++) {
        s2[jrL5Fb78AlNc] = s1[jrL5Fb78AlNc] - ylsDCUM2;
        if (0 > s2[jrL5Fb78AlNc])
            s2[jrL5Fb78AlNc] = 0 - s2[jrL5Fb78AlNc];
    }
    {
        c = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        jrL5Fb78AlNc = 1;
        while (n > jrL5Fb78AlNc) {
            if (c < s2[jrL5Fb78AlNc]) {
                c = s2[jrL5Fb78AlNc];
                PM7IJy = jrL5Fb78AlNc;
            }
            jrL5Fb78AlNc++;
        };
    }
    printf ("%d", s1[PM7IJy]);
    {
        jrL5Fb78AlNc = 0;
        while (n > jrL5Fb78AlNc) {
            if (s2[PM7IJy] == s2[jrL5Fb78AlNc] && jrL5Fb78AlNc != PM7IJy)
                printf (",%d", s1[jrL5Fb78AlNc]);
            jrL5Fb78AlNc++;
        };
    };
}

