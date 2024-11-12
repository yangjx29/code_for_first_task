main () {
    int num;
    int LVIAtgxdefo;
    int Jo0wZP;
    int j;
    int max;
    num = 0;
    int a [LVIAtgxdefo];
    int kp0R6jwSPK [LVIAtgxdefo];
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
    scanf ("%d", &LVIAtgxdefo);
    {
        Jo0wZP = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (LVIAtgxdefo > Jo0wZP) {
            kp0R6jwSPK[Jo0wZP] = 0;
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
            Jo0wZP++;
        };
    }
    kp0R6jwSPK[LVIAtgxdefo -(319 - 318)] = 1;
    {
        Jo0wZP = 0;
        while (LVIAtgxdefo > Jo0wZP) {
            scanf ("%d", &a[Jo0wZP]);
            Jo0wZP++;
        };
    }
    for (Jo0wZP = LVIAtgxdefo -2; 0 <= Jo0wZP; Jo0wZP--) {
        max = kp0R6jwSPK[Jo0wZP];
        {
            j = Jo0wZP +1;
            while (LVIAtgxdefo > j) {
                if ((a[j] <= a[Jo0wZP]) && (kp0R6jwSPK[j] >= max))
                    max = kp0R6jwSPK[j];
                j++;
            };
        }
        kp0R6jwSPK[Jo0wZP] = max + 1;
    }
    {
        Jo0wZP = 0;
        while (Jo0wZP < LVIAtgxdefo) {
            if (kp0R6jwSPK[Jo0wZP] > num)
                num = kp0R6jwSPK[Jo0wZP];
            Jo0wZP++;
        };
    }
    printf ("%d\n", num);
}

