int main () {
    int UozXPjyS;
    int k;
    int PATPatuXO;
    int kLJKfIp;
    int c;
    int d;
    scanf ("%d", &UozXPjyS);
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
    PATPatuXO = (UozXPjyS -UozXPjyS % 1000) / 1000;
    kLJKfIp = (UozXPjyS % 1000 - UozXPjyS % 100) / 100;
    c = (UozXPjyS % 100 - UozXPjyS % 10) / 10;
    d = UozXPjyS % 10;
    k = d * 1000 + c * 100 + kLJKfIp * 10 + PATPatuXO;
    if (!(0 != PATPatuXO))
        if (kLJKfIp == 0)
            if (c == 0)
                printf ("%d", d);
            else
                printf ("%d%d", d, c);
        else
            printf ("%d%d%d", d, c, kLJKfIp);
    else
        printf ("%d%d%d%d", d, c, kLJKfIp, PATPatuXO);
    return 0;
}

