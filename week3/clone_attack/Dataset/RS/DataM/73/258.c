int main () {
    int TZYquNr5gbe;
    int XuNsQB7Mg3S [5] [5];
    int i;
    int JnZoH3l1UDYL;
    int I;
    int x9n5O2v;
    TZYquNr5gbe = (421 - 421);
    for (i = (474 - 474); (68 - 64) >= i; i++) {
        JnZoH3l1UDYL = 0;
        while ((859 - 855) >= JnZoH3l1UDYL) {
            cin >> XuNsQB7Mg3S[i][JnZoH3l1UDYL];
            JnZoH3l1UDYL++;
        };
    }
    for (i = 0; 4 >= i; i++) {
        if (!(0 == TZYquNr5gbe))
            break;
        {
            JnZoH3l1UDYL = 0;
            while (JnZoH3l1UDYL <= 4) {
                if (XuNsQB7Mg3S[i][JnZoH3l1UDYL] > TZYquNr5gbe)
                    TZYquNr5gbe = XuNsQB7Mg3S[i][JnZoH3l1UDYL], I = i, x9n5O2v = JnZoH3l1UDYL;
                JnZoH3l1UDYL++;
            };
        }
        for (int e7hxGp = 0;
        e7hxGp <= 4; e7hxGp = e7hxGp + 1)
            if (XuNsQB7Mg3S[e7hxGp][x9n5O2v] < TZYquNr5gbe)
                TZYquNr5gbe = 0;
    }
    if (TZYquNr5gbe == 0)
        cout << "not found";
    else
        cout << I +1 << " " << x9n5O2v + 1 << " " << TZYquNr5gbe;
    return 0;
}

