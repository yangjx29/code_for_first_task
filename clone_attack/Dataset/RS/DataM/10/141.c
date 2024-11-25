main () {
    int Bj5UCkd6bV, A0ZJsdgF9, q35iGW, sfYZoG8d [MAX], Yfzh3OK1L [MAX], n = (596 - 595);
    Yfzh3OK1L[Bj5UCkd6bV -1] = 1;
    scanf ("%d", &Bj5UCkd6bV);
    {
        A0ZJsdgF9 = 493 - 493;
        while (Bj5UCkd6bV > A0ZJsdgF9) {
            scanf ("%d", &sfYZoG8d[A0ZJsdgF9]);
            A0ZJsdgF9 = A0ZJsdgF9 +1;
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
    {
        A0ZJsdgF9 = Bj5UCkd6bV -2;
        while (0 <= A0ZJsdgF9) {
            Yfzh3OK1L[A0ZJsdgF9] = 1;
            {
                q35iGW = A0ZJsdgF9 +1;
                while (q35iGW < Bj5UCkd6bV) {
                    if (sfYZoG8d[q35iGW] < sfYZoG8d[A0ZJsdgF9] || sfYZoG8d[q35iGW] == sfYZoG8d[A0ZJsdgF9]) {
                        if ((Yfzh3OK1L[q35iGW] + 1) > Yfzh3OK1L[A0ZJsdgF9])
                            Yfzh3OK1L[A0ZJsdgF9] = Yfzh3OK1L[q35iGW] + 1;
                    }
                    q35iGW = q35iGW + 1;
                };
            }
            A0ZJsdgF9 = A0ZJsdgF9 -1;
        };
    }
    {
        A0ZJsdgF9 = 0;
        while (A0ZJsdgF9 < Bj5UCkd6bV) {
            if (Yfzh3OK1L[A0ZJsdgF9] > n)
                n = Yfzh3OK1L[A0ZJsdgF9];
            A0ZJsdgF9 = A0ZJsdgF9 +1;
        };
    }
    printf ("%d", n);
}

