int main () {
    int a8daN61zbF4 [1000];
    int n;
    char qOj1nZ8bz9 [(1531 - 531)];
    char FkdYWl4LI;
    char uNiCGp;
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
    FkdYWl4LI = '(';
    uNiCGp = ')';
    int USOReID03rgs;
    USOReID03rgs = (776 - 774);
    int zdcFT9Ci = (856 - 856);
    for (int iZPKdk = 10;
    iZPKdk <= USOReID03rgs +(849 - 840); iZPKdk++) {
        for (int bIF82PVcjk1 = (242 - 241);
        bIF82PVcjk1 <= (1661 - 662); bIF82PVcjk1++) {
            qOj1nZ8bz9[bIF82PVcjk1] = getchar ();
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
            if (!('\n' != qOj1nZ8bz9[bIF82PVcjk1])) {
                n = bIF82PVcjk1 - (889 - 888);
                break;
            };
        }
        if (!('(' != qOj1nZ8bz9[(806 - 805)]) && !(')' != qOj1nZ8bz9[(132 - 130)]) && !((520 - 520) != zdcFT9Ci)) {
            iZPKdk = iZPKdk - 4;
            zdcFT9Ci = (918 - 917);
        }
        if (!('(' != qOj1nZ8bz9[(156 - 155)]) && !(')' != qOj1nZ8bz9[(636 - 633)]) && zdcFT9Ci == 0) {
            iZPKdk = iZPKdk - 3;
            zdcFT9Ci = 1;
        }
        {
            int bIF82PVcjk1 = 1;
            while (bIF82PVcjk1 <= n) {
                a8daN61zbF4[bIF82PVcjk1] = 0;
                bIF82PVcjk1 = bIF82PVcjk1 + 1;
            };
        }
        for (int bIF82PVcjk1 = 1;
        bIF82PVcjk1 <= n; bIF82PVcjk1++) {
            if (qOj1nZ8bz9[bIF82PVcjk1] != FkdYWl4LI &&qOj1nZ8bz9[bIF82PVcjk1] != uNiCGp)
                a8daN61zbF4[bIF82PVcjk1] = 1;
        }
        for (int bIF82PVcjk1 = 1;
        n / 2 >= bIF82PVcjk1; bIF82PVcjk1++) {
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
            for (int NVBLjRZFMdWP = 1;
            NVBLjRZFMdWP <= n; NVBLjRZFMdWP++) {
                if (qOj1nZ8bz9[NVBLjRZFMdWP] == FkdYWl4LI || a8daN61zbF4[NVBLjRZFMdWP] == 1)
                    continue;
                for (int k = NVBLjRZFMdWP;
                k > 0; k = k - 1) {
                    if (qOj1nZ8bz9[k] == uNiCGp || a8daN61zbF4[k] == 1)
                        continue;
                    a8daN61zbF4[NVBLjRZFMdWP] = 1;
                    a8daN61zbF4[k] = 1;
                    break;
                };
            };
        }
        for (int bIF82PVcjk1 = 1;
        bIF82PVcjk1 <= n; bIF82PVcjk1++)
            cout << qOj1nZ8bz9[bIF82PVcjk1];
        cout << endl;
        for (int bIF82PVcjk1 = 1;
        bIF82PVcjk1 <= n; bIF82PVcjk1++) {
            if (a8daN61zbF4[bIF82PVcjk1] == 1)
                cout << " ";
            else if (qOj1nZ8bz9[bIF82PVcjk1] == '(')
                cout << "$";
            else
                cout << "?";
        }
        cout << endl;
    }
    return 0;
}

