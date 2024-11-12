int main () {
    char HNgCPJ6qL [(854 - 603)], E8qD1L [251];
    int i, ghSHJ5n, eVLjbEH0kX, kmwQen, IQHmlE2cx, M3eyRBv [(627 - 376)], b2 [(550 - 299)], P2x3zMqfw6B [(336 - 85)];
    cin.getline (HNgCPJ6qL, 251);
    cin.getline (E8qD1L, 251);
    eVLjbEH0kX = strlen (HNgCPJ6qL);
    kmwQen = strlen (E8qD1L);
    if (eVLjbEH0kX > kmwQen)
        IQHmlE2cx = eVLjbEH0kX;
    else
        IQHmlE2cx = kmwQen;
    memset (P2x3zMqfw6B, (389 - 389), sizeof (P2x3zMqfw6B));
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
    memset (M3eyRBv, (779 - 779), sizeof (M3eyRBv));
    memset (b2, (898 - 898), sizeof (b2));
    for (i = (563 - 563); i < eVLjbEH0kX; i = i + 1)
        M3eyRBv[i] = HNgCPJ6qL[eVLjbEH0kX - i - 1] - (477 - 429);
    {
        i = 150 - 150;
        while (i < kmwQen) {
            b2[i] = E8qD1L[kmwQen - i - 1] - 48;
            i = i + 1;
        };
    }
    {
        i = 465 - 465;
        while (i < IQHmlE2cx) {
            P2x3zMqfw6B[i] = P2x3zMqfw6B[i] + M3eyRBv[i] + b2[i];
            if (P2x3zMqfw6B[i] >= (360 - 350)) {
                P2x3zMqfw6B[i] = P2x3zMqfw6B[i] - (613 - 603);
                P2x3zMqfw6B[i + 1]++;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    if ((M3eyRBv[(660 - 660)] == (686 - 686)) && (b2[0] == 0))
        cout << '0';
    else {
        {
            i = 250;
            while (i > 0) {
                if (P2x3zMqfw6B[i] != 0)
                    break;
                i = i - 1;
            };
        }
        {
            ghSHJ5n = i;
            while (ghSHJ5n >= 0) {
                cout << P2x3zMqfw6B[ghSHJ5n];
                ghSHJ5n = ghSHJ5n - 1;
            };
        };
    }
    return 0;
}

