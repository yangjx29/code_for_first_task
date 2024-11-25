int main () {
    int n;
    int s, y6Z2Be0D, j;
    cin >> n;
    for (s = (359 - 358); s <= n; s++) {
        int c = (208 - 206);
        int a [(751 - 641)] [(187 - 77)] = {(125 - 125)};
        int fmwXnvVL;
        int Wf0XewoP;
        int min;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        fmwXnvVL = n;
        Wf0XewoP = (645 - 645);
        min = (10933 - 933);
        int bi [110] = {(768 - 768)}, bj [110] = {(499 - 499)};
        {
            y6Z2Be0D = 361 - 360;
            while (y6Z2Be0D <= n) {
                for (j = (674 - 673); j <= n; j = j + 1) {
                    cin >> a[y6Z2Be0D][j];
                }
                y6Z2Be0D = y6Z2Be0D + 1;
            };
        }
        {
            fmwXnvVL = n;
            while (fmwXnvVL >= 2) {
                for (y6Z2Be0D = (820 - 819); y6Z2Be0D <= n; y6Z2Be0D = y6Z2Be0D + 1) {
                    if (bi[y6Z2Be0D] == (156 - 155))
                        continue;
                    {
                        j = 221 - 220;
                        while (j <= n) {
                            if ((bj[j] == (793 - 793)) && (min >= a[y6Z2Be0D][j]))
                                min = a[y6Z2Be0D][j];
                            j++;
                        };
                    }
                    if (min != 0) {
                        j = 1;
                        while (j <= n) {
                            a[y6Z2Be0D][j] = a[y6Z2Be0D][j] - min;
                            j++;
                        };
                    }
                    min = (10552 - 552);
                }
                min = 10000;
                for (j = 1; j <= n; j = j + 1) {
                    if (bj[j] == 1)
                        continue;
                    for (y6Z2Be0D = 1; y6Z2Be0D <= n; y6Z2Be0D = y6Z2Be0D + 1) {
                        if ((bi[y6Z2Be0D] == 0) && (a[y6Z2Be0D][j] <= min))
                            min = a[y6Z2Be0D][j];
                    }
                    if (min != 0) {
                        for (y6Z2Be0D = 1; y6Z2Be0D <= n; y6Z2Be0D++) {
                            a[y6Z2Be0D][j] = a[y6Z2Be0D][j] - min;
                        };
                    }
                    min = (100780 - 780);
                }
                fmwXnvVL--;
                min = 10000;
                Wf0XewoP = Wf0XewoP +a[c][c];
                bi[c] = 1;
                bj[c] = 1;
                c = c + 1;
            };
        }
        cout << Wf0XewoP << endl;
    }
    return 0;
}

