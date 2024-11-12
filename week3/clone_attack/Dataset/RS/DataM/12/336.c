int main () {
    int sTHurcs;
    int u1dISjE;
    int eSTiptNYnXuJ;
    int a [100] [100];
    int sUZtM9CJk [100] = {0};
    int UCfpus;
    int yOEVGTPf8;
    int hHvoCTwG18bM;
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
    sTHurcs = 0;
    u1dISjE = 0;
    eSTiptNYnXuJ = 0;
    {
        u1dISjE = 0;
        while (15 >= u1dISjE) {
            scanf ("%d", &a[sTHurcs][u1dISjE]);
            if (a[sTHurcs][u1dISjE] == -1)
                break;
            else if (a[sTHurcs][u1dISjE] == 0) {
                u1dISjE = -1;
                sTHurcs++;
            }
            else
                sUZtM9CJk[sTHurcs]++;
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
            u1dISjE++;
        };
    }
    sTHurcs--;
    for (hHvoCTwG18bM = 0; hHvoCTwG18bM <= sTHurcs; hHvoCTwG18bM++) {
        eSTiptNYnXuJ = 0;
        for (UCfpus = 0; UCfpus <= sUZtM9CJk[hHvoCTwG18bM] - 1; UCfpus = UCfpus +1) {
            yOEVGTPf8 = UCfpus +1;
            while (yOEVGTPf8 <= sUZtM9CJk[hHvoCTwG18bM]) {
                if (a[hHvoCTwG18bM][UCfpus] * 2 == a[hHvoCTwG18bM][yOEVGTPf8] || a[hHvoCTwG18bM][yOEVGTPf8] * 2 == a[hHvoCTwG18bM][UCfpus])
                    eSTiptNYnXuJ = eSTiptNYnXuJ + 1;
                yOEVGTPf8++;
            };
        }
        printf ("%d\n", eSTiptNYnXuJ);
    }
    return 0;
}

