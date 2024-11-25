struct   string {
    char cha;
    int Tvc2yNKhXC6l;
};
int main () {
    int gxJUYWqG2dV;
    int aXVJrYgi7Ec;
    int n;
    int QvlEd7VwrJO;
    int UAzOgKCl;
    gxJUYWqG2dV = (585 - 585);
    struct   string bub68NWHf [52];
    struct   string temp;
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
    char PaR4On [310];
    scanf ("%s", PaR4On);
    UAzOgKCl = strlen (PaR4On);
    for (aXVJrYgi7Ec = (886 - 886); aXVJrYgi7Ec < UAzOgKCl; aXVJrYgi7Ec++) {
        n = (476 - 475);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (PaR4On[aXVJrYgi7Ec] >= 'a' && 'z' >= PaR4On[aXVJrYgi7Ec] || 'A' <= PaR4On[aXVJrYgi7Ec] && 'Z' >= PaR4On[aXVJrYgi7Ec]) {
            for (QvlEd7VwrJO = aXVJrYgi7Ec + 1; QvlEd7VwrJO < UAzOgKCl; QvlEd7VwrJO++) {
                if (!(PaR4On[aXVJrYgi7Ec] != PaR4On[QvlEd7VwrJO])) {
                    PaR4On[QvlEd7VwrJO] = '.';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    n++;
                }
                else
                    continue;
            }
            bub68NWHf[gxJUYWqG2dV].cha = PaR4On[aXVJrYgi7Ec];
            bub68NWHf[gxJUYWqG2dV].Tvc2yNKhXC6l = n;
            gxJUYWqG2dV++;
        };
    }
    for (aXVJrYgi7Ec = 0; aXVJrYgi7Ec < gxJUYWqG2dV - 1; aXVJrYgi7Ec++) {
        n = aXVJrYgi7Ec;
        {
            QvlEd7VwrJO = aXVJrYgi7Ec + 1;
            while (QvlEd7VwrJO < gxJUYWqG2dV) {
                if (bub68NWHf[QvlEd7VwrJO].cha < bub68NWHf[n].cha)
                    n = QvlEd7VwrJO;
                QvlEd7VwrJO = QvlEd7VwrJO +1;
            };
        }
        temp = bub68NWHf[aXVJrYgi7Ec];
        bub68NWHf[aXVJrYgi7Ec] = bub68NWHf[n];
        bub68NWHf[n] = temp;
    }
    for (aXVJrYgi7Ec = 0; aXVJrYgi7Ec < gxJUYWqG2dV; aXVJrYgi7Ec++)
        printf ("%c=%d\n", bub68NWHf[aXVJrYgi7Ec].cha, bub68NWHf[aXVJrYgi7Ec].Tvc2yNKhXC6l);
    if (gxJUYWqG2dV == 0) {
        printf ("No\n");
        return 0;
    }
    return 0;
}

