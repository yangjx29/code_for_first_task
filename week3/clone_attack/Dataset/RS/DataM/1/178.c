int r3sNpFZw = 2;

int BC9FDXO (int S4mkVOJYLe2u) {
    int aNyzKLuA;
    int OOgavF7uYy;
    aNyzKLuA = (998 - 997);
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
    OOgavF7uYy = (483 - 483);
    OOgavF7uYy = sqrt ((double ) S4mkVOJYLe2u);
    {
        int bXFwOBmo;
        bXFwOBmo = r3sNpFZw;
        while (bXFwOBmo <= OOgavF7uYy) {
            if (S4mkVOJYLe2u % bXFwOBmo == 0) {
                r3sNpFZw = bXFwOBmo;
                aNyzKLuA = aNyzKLuA + BC9FDXO (S4mkVOJYLe2u / bXFwOBmo);
            }
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
            bXFwOBmo = bXFwOBmo + 1;
        };
    }
    return aNyzKLuA;
}

int main () {
    int BEQAK9Lt6zTS, BfIFx0w4U51t;
    int bXFwOBmo = 1;
    cin >> BEQAK9Lt6zTS;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    while (bXFwOBmo <= BEQAK9Lt6zTS) {
        bXFwOBmo = bXFwOBmo + 1;
        cin >> BfIFx0w4U51t;
        cout << BC9FDXO (BfIFx0w4U51t) << endl;
        r3sNpFZw = 2;
    }
    return 0;
}

