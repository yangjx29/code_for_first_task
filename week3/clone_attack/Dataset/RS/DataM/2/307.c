struct   info {
    int nam;
    char aut [27];
}
inf [1000];

void  main () {
    char *p;
    int h2xzJonbqIRF;
    int sum;
    int n;
    int FIWMHAU2V;
    int LjbEtXv6 [26] = {(144 - 144)};
    int k;
    h2xzJonbqIRF = (297 - 297);
    sum = (1000 - 1000);
    scanf ("%d", &n);
    {
        FIWMHAU2V = 0;
        while (n > FIWMHAU2V) {
            scanf ("%d%s", &inf[FIWMHAU2V].nam, inf[FIWMHAU2V].aut);
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
            FIWMHAU2V++;
        };
    }
    for (FIWMHAU2V = 0; n > FIWMHAU2V; FIWMHAU2V++) {
        p = inf[FIWMHAU2V].aut;
        for (; !('\0' == *p);) {
            LjbEtXv6[*p - 65]++;
            p++;
        };
    }
    {
        FIWMHAU2V = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (FIWMHAU2V < 26) {
            h2xzJonbqIRF = h2xzJonbqIRF > LjbEtXv6[FIWMHAU2V] ? h2xzJonbqIRF : LjbEtXv6[FIWMHAU2V];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            FIWMHAU2V++;
        };
    }
    {
        FIWMHAU2V = 0;
        while (FIWMHAU2V < 26) {
            if (LjbEtXv6[FIWMHAU2V] == h2xzJonbqIRF) {
                printf ("%c\n", FIWMHAU2V +65);
                break;
            }
            FIWMHAU2V++;
        };
    }
    k = FIWMHAU2V +65;
    {
        FIWMHAU2V = 0;
        while (n > FIWMHAU2V) {
            p = inf[FIWMHAU2V].aut;
            while (*p != '\0') {
                if (*p == k) {
                    sum++;
                    break;
                }
                p++;
            }
            FIWMHAU2V++;
        };
    }
    printf ("%d\n", sum);
    for (FIWMHAU2V = 0; FIWMHAU2V < n; FIWMHAU2V++) {
        p = inf[FIWMHAU2V].aut;
        while (*p != '\0') {
            if (*p == k) {
                printf ("%d\n", inf[FIWMHAU2V].nam);
                break;
            }
            p++;
        };
    };
}

