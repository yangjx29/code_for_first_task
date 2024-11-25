int main () {
    char nk9R2u5XbQL [4] = {'z', 'q', 's', 'l'};
    char ZkUocaAG;
    int a [4] = {20, 40, 10, 50};
    int st7MvPbop0k;
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
    int GmMnsu5FN0;
    int t1;
    int max;
    for (st7MvPbop0k = 0; 4 > st7MvPbop0k; st7MvPbop0k = st7MvPbop0k + 1) {
        max = st7MvPbop0k;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (GmMnsu5FN0 = st7MvPbop0k; GmMnsu5FN0 < 4; GmMnsu5FN0++) {
            if (a[GmMnsu5FN0] > a[st7MvPbop0k])
                max = GmMnsu5FN0;
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
            {
                t1 = a[st7MvPbop0k];
                ZkUocaAG = nk9R2u5XbQL[st7MvPbop0k];
                a[st7MvPbop0k] = a[max];
                nk9R2u5XbQL[st7MvPbop0k] = nk9R2u5XbQL[max];
                a[max] = t1;
                nk9R2u5XbQL[max] = ZkUocaAG;
            };
        };
    }
    {
        st7MvPbop0k = 0;
        while (4 > st7MvPbop0k) {
            printf ("%c %d\n", nk9R2u5XbQL[st7MvPbop0k], a[st7MvPbop0k]);
            st7MvPbop0k = st7MvPbop0k + 1;
        };
    };
}

