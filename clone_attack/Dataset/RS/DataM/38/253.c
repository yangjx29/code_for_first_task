int main () {
    double  a [1000], ave, n7oxgE61TGP4 [100] = {0}, QHjalL [100] = {0}, HwRJiheucZ [100] = {0};
    int GKJxwqySG6R, sM3q0akrZTQo, xNewCd63, Uf74LudEJk;
    scanf ("%d", &sM3q0akrZTQo);
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
        xNewCd63 = 0;
        while (sM3q0akrZTQo > xNewCd63) {
            scanf ("%d", &GKJxwqySG6R);
            {
                Uf74LudEJk = 0;
                while (GKJxwqySG6R > Uf74LudEJk) {
                    scanf ("%lf", &a[Uf74LudEJk]);
                    n7oxgE61TGP4[xNewCd63] += a[Uf74LudEJk];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    Uf74LudEJk++;
                };
            }
            ave = n7oxgE61TGP4[xNewCd63] / GKJxwqySG6R;
            {
                Uf74LudEJk = 0;
                while (GKJxwqySG6R > Uf74LudEJk) {
                    QHjalL[xNewCd63] += (a[Uf74LudEJk] - ave) * (a[Uf74LudEJk] - ave);
                    Uf74LudEJk++;
                };
            }
            HwRJiheucZ[xNewCd63] = sqrt (QHjalL[xNewCd63] / GKJxwqySG6R);
            xNewCd63 = xNewCd63 + 1;
        };
    }
    {
        xNewCd63 = 0;
        while (sM3q0akrZTQo > xNewCd63) {
            printf ("%.5lf\n", HwRJiheucZ[xNewCd63]);
            xNewCd63++;
        };
    }
    return 0;
}

