int main () {
    double  dnpSlP = 0, b = 0, BwRNtaJVgQ6s = 0, VjFMYs0 = 0;
    int sz [100];
    int gASKBGWw;
    int pICA4E6JKP;
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
    scanf ("%d", &pICA4E6JKP);
    for (gASKBGWw = 0; pICA4E6JKP > gASKBGWw; gASKBGWw = gASKBGWw + 1) {
        scanf ("%d", &sz[gASKBGWw]);
    }
    for (gASKBGWw = 0; pICA4E6JKP > gASKBGWw; gASKBGWw = gASKBGWw + 1) {
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
        if (1 <= sz[gASKBGWw] && 18 >= sz[gASKBGWw])
            dnpSlP += 1;
        else {
            if (19 <= sz[gASKBGWw] && sz[gASKBGWw] <= 35)
                b += 1;
            else {
                if (sz[gASKBGWw] >= 36 && sz[gASKBGWw] <= 60)
                    BwRNtaJVgQ6s += 1;
                else {
                    if (sz[gASKBGWw] > 60)
                        VjFMYs0 += 1;
                };
            };
        };
    }
    printf ("1-18: %.2lf%\n19-35: %.2lf%\n36-60: %.2lf%\nOver60: %.2lf%\n", dnpSlP / pICA4E6JKP * 100, b / pICA4E6JKP * 100, BwRNtaJVgQ6s / pICA4E6JKP * 100, VjFMYs0 / pICA4E6JKP * 100);
    return 0;
}

