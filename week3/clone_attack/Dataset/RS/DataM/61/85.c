main () {
    int hC3Tns;
    int Y0GhZj;
    int a [(218 - 198)];
    int amHyBwoSEC;
    int lkACXDK8i [(483 - 462)];
    getchar ();
    getchar ();
    getchar ();
    getchar ();
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
    getchar ();
    lkACXDK8i[(843 - 842)] = (101 - 100);
    lkACXDK8i[2] = 1;
    {
        amHyBwoSEC = 3;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (amHyBwoSEC <= 20) {
            lkACXDK8i[amHyBwoSEC] = lkACXDK8i[amHyBwoSEC - 1] + lkACXDK8i[amHyBwoSEC - 2];
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
            amHyBwoSEC++;
        };
    }
    scanf ("%d\n", &hC3Tns);
    {
        Y0GhZj = 241 - 241;
        while (Y0GhZj < hC3Tns) {
            scanf ("%d", &a[Y0GhZj]);
            Y0GhZj++;
        };
    }
    {
        Y0GhZj = 0;
        while (Y0GhZj < hC3Tns) {
            printf ("%d\n", lkACXDK8i[a[Y0GhZj]]);
            Y0GhZj++;
        };
    }
    getchar ();
    getchar ();
    getchar ();
}

