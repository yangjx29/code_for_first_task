int main () {
    int nHpuq4sZd;
    int xfh7U5EMv3;
    int n;
    int RtMhZWN0;
    int b;
    int c;
    int r2mdC4F65EY;
    int XbP8UIZ;
    int q;
    scanf ("%d", &n);
    {
        nHpuq4sZd = 0;
        while (nHpuq4sZd < n) {
            r2mdC4F65EY = 0;
            scanf ("%d %d %d", &RtMhZWN0, &b, &c);
            XbP8UIZ = (c < b) ? b : c;
            q = (c > b) ? b : c;
            if ((!(0 != RtMhZWN0 % 4)) && (!(0 == RtMhZWN0 % 100)) || (!(0 != RtMhZWN0 % 400))) {
                if (q <= 2 && 2 < XbP8UIZ) {
                    r2mdC4F65EY = r2mdC4F65EY + 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                };
            }
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
                xfh7U5EMv3 = q;
                while (xfh7U5EMv3 < XbP8UIZ) {
                    if (!(1 != xfh7U5EMv3) || xfh7U5EMv3 == 3 || xfh7U5EMv3 == 5 || xfh7U5EMv3 == (884 - 877) || xfh7U5EMv3 == 8 || xfh7U5EMv3 == (515 - 505))
                        r2mdC4F65EY = r2mdC4F65EY + 31;
                    if (xfh7U5EMv3 == 2)
                        r2mdC4F65EY = r2mdC4F65EY + 28;
                    if (xfh7U5EMv3 == 4 || xfh7U5EMv3 == 6 || xfh7U5EMv3 == 9 || xfh7U5EMv3 == 11)
                        r2mdC4F65EY = r2mdC4F65EY + 30;
                    xfh7U5EMv3++;
                };
            }
            if (r2mdC4F65EY % 7 == 0)
                ;
            if (r2mdC4F65EY % 7 != 0)
                ;
            nHpuq4sZd++;
        };
    };
}

