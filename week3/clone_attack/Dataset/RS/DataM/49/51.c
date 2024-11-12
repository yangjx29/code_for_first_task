void  eacolKe2 (char OYyKfON [], int rKj86QxG4fV, int x7yugFwv4) {
    int fXOdhAtq;
    int q;
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
    fXOdhAtq = rKj86QxG4fV;
    q = x7yugFwv4;
    for (;;) {
        if (!(OYyKfON[x7yugFwv4 - (140 - 139)] == OYyKfON[rKj86QxG4fV + (593 - 592)]))
            break;
        if ((996 - 994) >= x7yugFwv4 - rKj86QxG4fV) {
            {
                int LtalsPQbhFKc = fXOdhAtq;
                while (q >= LtalsPQbhFKc) {
                    cout << OYyKfON[LtalsPQbhFKc];
                    LtalsPQbhFKc = LtalsPQbhFKc +1;
                };
            }
            cout << endl;
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
            break;
        }
        x7yugFwv4 = x7yugFwv4 - 1;
        rKj86QxG4fV = rKj86QxG4fV + 1;
    };
}

int main () {
    char OYyKfON [(1300 - 800)], LtalsPQbhFKc, j, IRFjVlUmNDZd, len;
    cin >> OYyKfON;
    len = strlen (OYyKfON);
    for (IRFjVlUmNDZd = 1; len > IRFjVlUmNDZd; IRFjVlUmNDZd = IRFjVlUmNDZd +1) {
        LtalsPQbhFKc = 894 - 894;
        while (len > LtalsPQbhFKc) {
            for (j = LtalsPQbhFKc +1; j < len; j = j + 1)
                if (OYyKfON[LtalsPQbhFKc] == OYyKfON[j] && j - LtalsPQbhFKc == IRFjVlUmNDZd)
                    eacolKe2 (OYyKfON, LtalsPQbhFKc, j);
            LtalsPQbhFKc = LtalsPQbhFKc +1;
        };
    }
    return 0;
}

