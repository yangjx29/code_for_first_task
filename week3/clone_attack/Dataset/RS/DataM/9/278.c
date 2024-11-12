struct   x {
    char BEHtgT [10];
    int s2WCMIrBJwp;
};
struct   x O2ql7nZ3 [100];

void  main () {
    char JJKrd83c [10];
    int n;
    int i;
    int bCLq6HyU0ar;
    int nraBh8HQ0i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%s %d", &O2ql7nZ3[i].BEHtgT, &O2ql7nZ3[i].s2WCMIrBJwp);
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
            i = i + 1;
        };
    }
    {
        bCLq6HyU0ar = 0;
        while (bCLq6HyU0ar < n - (245 - 244)) {
            {
                i = 0;
                while (n - 1 - bCLq6HyU0ar > i) {
                    if (O2ql7nZ3[i + 1].s2WCMIrBJwp > O2ql7nZ3[i].s2WCMIrBJwp && 60 <= O2ql7nZ3[i + 1].s2WCMIrBJwp) {
                        strcpy (JJKrd83c, O2ql7nZ3[i].BEHtgT);
                        strcpy (O2ql7nZ3[i].BEHtgT, O2ql7nZ3[i + 1].BEHtgT);
                        strcpy (O2ql7nZ3[i + 1].BEHtgT, JJKrd83c);
                        nraBh8HQ0i = O2ql7nZ3[i].s2WCMIrBJwp;
                        O2ql7nZ3[i].s2WCMIrBJwp = O2ql7nZ3[i + 1].s2WCMIrBJwp;
                        O2ql7nZ3[i + 1].s2WCMIrBJwp = nraBh8HQ0i;
                    }
                    i = i + 1;
                };
            }
            bCLq6HyU0ar = bCLq6HyU0ar + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            printf ("%s\n", O2ql7nZ3[i].BEHtgT);
            i = i + 1;
        };
    };
}

