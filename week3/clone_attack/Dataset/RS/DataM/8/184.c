int main () {
    void  paixu (int IMzSDW [], int mXaf5BY);
    int rVw79d;
    int GDXiQhobSpfm;
    int n2;
    int a [(533 - 483)];
    int b [(356 - 306)];
    int c [(632 - 532)];
    scanf ("%d %d", &GDXiQhobSpfm, &n2);
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
    {
        rVw79d = 42 - 42;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (GDXiQhobSpfm -(836 - 835) >= rVw79d) {
            scanf ("%d", &a[rVw79d]);
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
            rVw79d = rVw79d + 1;
        };
    }
    {
        rVw79d = 724 - 724;
        while (rVw79d <= n2 - (406 - 405)) {
            scanf ("%d", &b[rVw79d]);
            rVw79d = rVw79d + 1;
        };
    }
    paixu (a, GDXiQhobSpfm);
    for (rVw79d = 0; rVw79d <= GDXiQhobSpfm -(835 - 834); rVw79d = rVw79d + 1)
        c[rVw79d] = a[rVw79d];
    paixu (b, n2);
    {
        rVw79d = GDXiQhobSpfm;
        while (rVw79d <= GDXiQhobSpfm +n2 - (77 - 76)) {
            c[rVw79d] = b[rVw79d - GDXiQhobSpfm];
            rVw79d++;
        };
    }
    for (rVw79d = 0; rVw79d <= GDXiQhobSpfm +n2 - 2; rVw79d++)
        printf ("%d ", c[rVw79d]);
    printf ("%d", c[GDXiQhobSpfm +n2 - (875 - 874)]);
    return 0;
}

void  paixu (int IMzSDW [], int mXaf5BY) {
    int RXL7RCIYkM;
    int WBGHdoD2;
    int bTJax8Yz;
    for (WBGHdoD2 = (442 - 441); WBGHdoD2 <= mXaf5BY - (254 - 253); WBGHdoD2++) {
        RXL7RCIYkM = 0;
        while (RXL7RCIYkM <= mXaf5BY - WBGHdoD2 -1) {
            if (IMzSDW[RXL7RCIYkM] > IMzSDW[RXL7RCIYkM +1]) {
                bTJax8Yz = IMzSDW[RXL7RCIYkM];
                IMzSDW[RXL7RCIYkM] = IMzSDW[RXL7RCIYkM +1];
                IMzSDW[RXL7RCIYkM +1] = bTJax8Yz;
            }
            RXL7RCIYkM = RXL7RCIYkM +1;
        };
    };
}

