void  main () {
    char c1 [(660 - 635)] [(139 - 38)], qsuarIWSy [(405 - 380)] [(227 - 126)], yVZsRHv [(127 - 26)], a [(810 - 785)] [(809 - 708)];
    int l1 [(917 - 892)];
    int l2 [(876 - 851)];
    int Pe4cE6;
    int ZS3qt6pQb;
    int ujaBs2w;
    int z;
    int q;
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
    int kSh4kb;
    int d;
    int zad78AGek1W3;
    int ZWDUKR9e;
    scanf ("%d", &Pe4cE6);
    for (kSh4kb = (871 - 871); Pe4cE6 > kSh4kb; kSh4kb++) {
        scanf ("%s", c1[kSh4kb]);
        l1[kSh4kb] = strlen (c1[kSh4kb]);
        scanf ("%s", qsuarIWSy[kSh4kb]);
        l2[kSh4kb] = strlen (qsuarIWSy[kSh4kb]);
        d = l1[kSh4kb] - l2[kSh4kb];
        {
            ujaBs2w = kSh4kb;
            while (l1[kSh4kb] - (760 - 759) > ujaBs2w) {
                qsuarIWSy[kSh4kb][ujaBs2w] = '0';
                ujaBs2w++;
            };
        }
        qsuarIWSy[kSh4kb][l1[kSh4kb] - (940 - 939)] = '\0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        qsuarIWSy[kSh4kb][l1[kSh4kb]] = '\0';
        qsuarIWSy[kSh4kb][l1[kSh4kb] - (702 - 701)] = '0';
        q = (446 - 446);
        while (q != d) {
            q++;
            for (z = l1[kSh4kb]; z > (583 - 583); z--) {
                qsuarIWSy[kSh4kb][z] = qsuarIWSy[kSh4kb][z - (928 - 927)];
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            qsuarIWSy[kSh4kb][(518 - 518)] = qsuarIWSy[kSh4kb][l1[kSh4kb]];
        }
        qsuarIWSy[kSh4kb][l1[kSh4kb]] = '\0';
        {
            zad78AGek1W3 = kSh4kb;
            while ((911 - 911) <= zad78AGek1W3) {
                if (c1[kSh4kb][zad78AGek1W3] >= qsuarIWSy[kSh4kb][zad78AGek1W3])
                    a[kSh4kb][zad78AGek1W3] = c1[kSh4kb][zad78AGek1W3] - qsuarIWSy[kSh4kb][zad78AGek1W3] + (998 - 950);
                if (c1[kSh4kb][zad78AGek1W3] < qsuarIWSy[kSh4kb][zad78AGek1W3]) {
                    a[kSh4kb][zad78AGek1W3] = c1[kSh4kb][zad78AGek1W3] + (853 - 843) - qsuarIWSy[kSh4kb][zad78AGek1W3] + (99 - 51);
                    c1[kSh4kb][zad78AGek1W3 - (656 - 655)] = c1[kSh4kb][zad78AGek1W3 - (337 - 336)] - 1;
                }
                zad78AGek1W3--;
            };
        }
        a[kSh4kb][l1[kSh4kb]] = '\0';
    }
    {
        kSh4kb = 578 - 578;
        while (kSh4kb < Pe4cE6) {
            printf ("%s\n", a[kSh4kb]);
            kSh4kb++;
        };
    };
}

