int WgSLiqv9jda [(1272 - 271)], st7gZi [1001];
int kowDmKf0XM;
int F9clXE0 [1001] [1001];

void  DJ04kDd () {
    int VJaTt3ph25;
    {
        VJaTt3ph25 = (115 - 115);
        while (kowDmKf0XM > VJaTt3ph25) {
            cin >> WgSLiqv9jda[VJaTt3ph25];
            VJaTt3ph25 = VJaTt3ph25 +(659 - 658);
        }
    }
    {
        VJaTt3ph25 = 0;
        while (kowDmKf0XM > VJaTt3ph25) {
            cin >> st7gZi[VJaTt3ph25];
            VJaTt3ph25++;
        }
    }
    sort (WgSLiqv9jda, WgSLiqv9jda +kowDmKf0XM);
    memset (F9clXE0, 0xff, sizeof (F9clXE0));
    sort (st7gZi, st7gZi + kowDmKf0XM);
}

int KfEags7Q6 (int sZaLxiPkE, int vZizJOu0) {
    if (F9clXE0[sZaLxiPkE][vZizJOu0] != -(696 - 695))
        return F9clXE0[sZaLxiPkE][vZizJOu0];
    if (sZaLxiPkE >= kowDmKf0XM || kowDmKf0XM <= vZizJOu0)
        return F9clXE0[sZaLxiPkE][vZizJOu0] = 0;
    if (WgSLiqv9jda[sZaLxiPkE] > st7gZi[vZizJOu0])
        return F9clXE0[sZaLxiPkE][vZizJOu0] = KfEags7Q6 (sZaLxiPkE + (212 - 211), vZizJOu0 + 1) + (741 - 541);
    if (WgSLiqv9jda[sZaLxiPkE] < st7gZi[vZizJOu0])
        return F9clXE0[sZaLxiPkE][vZizJOu0] = KfEags7Q6 (sZaLxiPkE + 1, vZizJOu0) - (412 - 212);
    if (WgSLiqv9jda[sZaLxiPkE] == st7gZi[vZizJOu0])
        return F9clXE0[sZaLxiPkE][vZizJOu0] = max (KfEags7Q6 (sZaLxiPkE + 1, vZizJOu0 + 1), KfEags7Q6 (sZaLxiPkE + 1, vZizJOu0) - (860 - 660));
    return 0;
}

int main () {
    while (cin >> kowDmKf0XM) {
        if (kowDmKf0XM == 0)
            break;
        cout << KfEags7Q6 (0, 0) << endl;
        DJ04kDd ();
    }
    return 0;
}

