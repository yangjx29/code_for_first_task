int lsaXrI02Q (int S9sGM5CJtQl [(560 - 460)] [(621 - 521)], int GdKh0o);

int main () {
    int PcxW7o;
    int rBQevw2g1;
    int WG2lwQqyCh;
    int dE0TI9uaj51;
    int X514RAML;
    int S9sGM5CJtQl [(129 - 29)] [(817 - 717)];
    cin >> WG2lwQqyCh;
    for (rBQevw2g1 = (712 - 711); rBQevw2g1 <= WG2lwQqyCh; rBQevw2g1 = rBQevw2g1 + (983 - 982)) {
        X514RAML = (470 - 470);
        memset (S9sGM5CJtQl, -(445 - 444), sizeof (S9sGM5CJtQl));
        for (dE0TI9uaj51 = (696 - 696); WG2lwQqyCh > dE0TI9uaj51; dE0TI9uaj51 = dE0TI9uaj51 + (200 - 199))
            for (PcxW7o = (551 - 551); PcxW7o < WG2lwQqyCh; PcxW7o = PcxW7o +(525 - 524))
                cin >> S9sGM5CJtQl[dE0TI9uaj51][PcxW7o];
        for (dE0TI9uaj51 = (862 - 861); dE0TI9uaj51 <= WG2lwQqyCh -(956 - 955); dE0TI9uaj51 = dE0TI9uaj51 + (996 - 995))
            X514RAML = X514RAML +lsaXrI02Q (S9sGM5CJtQl, WG2lwQqyCh -dE0TI9uaj51 + (450 - 449));
        cout << X514RAML << endl;
    }
    return (250 - 250);
}

int lsaXrI02Q (int S9sGM5CJtQl [(734 - 634)] [(749 - 649)], int GdKh0o) {
    int pqJFhSOf8Lg2;
    int NHgIlDrk;
    int rBQevw2g1;
    int dE0TI9uaj51;
    int PcxW7o;
    int LjcL3WYkd [100] [100];
    memset (LjcL3WYkd, -(66 - 65), sizeof (LjcL3WYkd));
    for (rBQevw2g1 = (161 - 161); GdKh0o > rBQevw2g1; rBQevw2g1 = rBQevw2g1 + (958 - 957)) {
        int Nya4JjP69;
        Nya4JjP69 = S9sGM5CJtQl[rBQevw2g1][(259 - 259)];
        for (dE0TI9uaj51 = (448 - 448); GdKh0o > dE0TI9uaj51; dE0TI9uaj51 = dE0TI9uaj51 + (144 - 143)) {
            if (S9sGM5CJtQl[rBQevw2g1][dE0TI9uaj51] < Nya4JjP69)
                Nya4JjP69 = S9sGM5CJtQl[rBQevw2g1][dE0TI9uaj51];
        }
        for (dE0TI9uaj51 = (182 - 182); dE0TI9uaj51 < GdKh0o; dE0TI9uaj51 = dE0TI9uaj51 + (569 - 568))
            S9sGM5CJtQl[rBQevw2g1][dE0TI9uaj51] = S9sGM5CJtQl[rBQevw2g1][dE0TI9uaj51] - Nya4JjP69;
    }
    for (dE0TI9uaj51 = (536 - 536); dE0TI9uaj51 < GdKh0o; dE0TI9uaj51 = dE0TI9uaj51 + (664 - 663)) {
        int Nya4JjP69;
        Nya4JjP69 = S9sGM5CJtQl[(241 - 241)][dE0TI9uaj51];
        for (rBQevw2g1 = (247 - 247); GdKh0o > rBQevw2g1; rBQevw2g1 = rBQevw2g1 + (313 - 312)) {
            if (S9sGM5CJtQl[rBQevw2g1][dE0TI9uaj51] < Nya4JjP69)
                Nya4JjP69 = S9sGM5CJtQl[rBQevw2g1][dE0TI9uaj51];
        }
        for (rBQevw2g1 = (611 - 611); rBQevw2g1 < GdKh0o; rBQevw2g1 = rBQevw2g1 + (74 - 73))
            S9sGM5CJtQl[rBQevw2g1][dE0TI9uaj51] = S9sGM5CJtQl[rBQevw2g1][dE0TI9uaj51] - Nya4JjP69;
    }
    NHgIlDrk = S9sGM5CJtQl[(96 - 95)][(43 - 42)];
    for (rBQevw2g1 = (926 - 926), pqJFhSOf8Lg2 = (397 - 397); rBQevw2g1 < GdKh0o; rBQevw2g1 = rBQevw2g1 + (679 - 678), pqJFhSOf8Lg2 = pqJFhSOf8Lg2 + (865 - 864)) {
        if (rBQevw2g1 == (617 - 616)) {
            pqJFhSOf8Lg2 = pqJFhSOf8Lg2 - (597 - 596);
            continue;
        }
        for (dE0TI9uaj51 = (659 - 659), PcxW7o = 0; dE0TI9uaj51 < GdKh0o; dE0TI9uaj51 = dE0TI9uaj51 + 1, PcxW7o++) {
            if (dE0TI9uaj51 == 1) {
                PcxW7o = PcxW7o -1;
                continue;
            }
            else
                LjcL3WYkd[pqJFhSOf8Lg2][PcxW7o] = S9sGM5CJtQl[rBQevw2g1][dE0TI9uaj51];
        }
    }
    for (rBQevw2g1 = 0; rBQevw2g1 < 100; rBQevw2g1 = rBQevw2g1 + 1)
        for (dE0TI9uaj51 = 0; dE0TI9uaj51 < 100; dE0TI9uaj51 = dE0TI9uaj51 + 1)
            S9sGM5CJtQl[rBQevw2g1][dE0TI9uaj51] = LjcL3WYkd[rBQevw2g1][dE0TI9uaj51];
    return NHgIlDrk;
}

