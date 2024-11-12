main () {
    void  hYtGNs8Q (int, int);
    int p4Y1rA, NX5zvQNsMLK;
    hYtGNs8Q (p4Y1rA, NX5zvQNsMLK);
    return 0;
}

void  hYtGNs8Q (int p4Y1rA, int NX5zvQNsMLK) {
    int Hxw8lHCvbEgf [o6niHa] = {0}, b [o6niHa];
    int i;
    int SVHo7D;
    int uLaj9lGE;
    int MvZDa2uVMtq;
    int T;
    scanf ("%d %d", &p4Y1rA, &NX5zvQNsMLK);
    {
        i = 0;
        while (i < p4Y1rA) {
            scanf ("%d", &Hxw8lHCvbEgf[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < NX5zvQNsMLK) {
            scanf ("%d", &b[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < p4Y1rA - 1) {
            for (SVHo7D = i + 1; p4Y1rA > SVHo7D; SVHo7D = SVHo7D +1) {
                if (Hxw8lHCvbEgf[i] > Hxw8lHCvbEgf[SVHo7D]) {
                    MvZDa2uVMtq = Hxw8lHCvbEgf[SVHo7D];
                    Hxw8lHCvbEgf[SVHo7D] = Hxw8lHCvbEgf[i];
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
                    Hxw8lHCvbEgf[i] = MvZDa2uVMtq;
                };
            }
            i = i + 1;
        };
    }
    printf ("%d", Hxw8lHCvbEgf[0]);
    {
        i = 0;
        while (i < NX5zvQNsMLK -1) {
            for (SVHo7D = i + 1; SVHo7D < NX5zvQNsMLK; SVHo7D++) {
                if (b[SVHo7D] < b[i]) {
                    T = b[SVHo7D];
                    b[SVHo7D] = b[i];
                    b[i] = T;
                };
            }
            i++;
        };
    }
    {
        SVHo7D = 1;
        while (SVHo7D < p4Y1rA) {
            printf (" %d", Hxw8lHCvbEgf[SVHo7D]);
            SVHo7D = SVHo7D +1;
        };
    }
    {
        SVHo7D = 0;
        while (SVHo7D < NX5zvQNsMLK) {
            printf (" %d", b[SVHo7D]);
            SVHo7D = SVHo7D +1;
        };
    };
}

