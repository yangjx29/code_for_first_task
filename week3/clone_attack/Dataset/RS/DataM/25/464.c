int main () {
    int t;
    int ZJHNLe2P [100] = {0};
    int i;
    int WCQrlx26Fjte;
    int n;
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
    t = 0;
    ZJHNLe2P[1] = 1;
    scanf ("%d", &n);
    for (i = 1; i <= n; i++) {
        for (WCQrlx26Fjte = 90; WCQrlx26Fjte >= 1; WCQrlx26Fjte = WCQrlx26Fjte -1) {
            ZJHNLe2P[WCQrlx26Fjte] *= 2;
            ZJHNLe2P[WCQrlx26Fjte +1] += ZJHNLe2P[WCQrlx26Fjte] / 10;
            ZJHNLe2P[WCQrlx26Fjte] = ZJHNLe2P[WCQrlx26Fjte] % 10;
        };
    }
    n = 99;
    for (; n;) {
        if (ZJHNLe2P[n])
            t = 1;
        if (t)
            printf ("%d", ZJHNLe2P[n]);
        n--;
    };
}

