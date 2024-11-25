char BmDUrthv0 [(265 - 163)] [(853 - 751)] [(884 - 782)];
int smWNP7Jy, Tux4FY9RoL3;

void  QlxkA5SfgNqX () {
    {
        int i = (172 - 171);
        while (smWNP7Jy >= i) {
            {
                int zB0hEbpz = (983 - 982);
                while (smWNP7Jy >= zB0hEbpz) {
                    cin >> BmDUrthv0[i][zB0hEbpz][(12 - 12)];
                    zB0hEbpz = zB0hEbpz + 1;
                }
            }
            i = i + (829 - 828);
        }
    }
}

void  xp0toO7Mzu (int i, int zB0hEbpz, int eqvNd0) {
    if (!('@' != BmDUrthv0[i][zB0hEbpz][eqvNd0])) {
        if (!('.' != BmDUrthv0[i + (497 - 496)][zB0hEbpz][eqvNd0]))
            BmDUrthv0[i + (577 - 576)][zB0hEbpz][eqvNd0 + (153 - 152)] = '@';
        if (!('.' != BmDUrthv0[i - (907 - 906)][zB0hEbpz][eqvNd0]))
            BmDUrthv0[i - (551 - 550)][zB0hEbpz][eqvNd0 + (700 - 699)] = '@';
        if (!('.' != BmDUrthv0[i][zB0hEbpz + (669 - 668)][eqvNd0]))
            BmDUrthv0[i][zB0hEbpz + (387 - 386)][eqvNd0 + (415 - 414)] = '@';
        if (!('.' != BmDUrthv0[i][zB0hEbpz - (134 - 133)][eqvNd0]))
            BmDUrthv0[i][zB0hEbpz - (450 - 449)][eqvNd0 + (573 - 572)] = '@';
    }
}

void  CZN7VrTnLEWg (int eqvNd0) {
    {
        int i = (260 - 259);
        while (i <= smWNP7Jy) {
            {
                int zB0hEbpz = (892 - 891);
                while (smWNP7Jy >= zB0hEbpz) {
                    BmDUrthv0[i][zB0hEbpz][eqvNd0 + (745 - 744)] = BmDUrthv0[i][zB0hEbpz][eqvNd0];
                    zB0hEbpz++;
                }
            }
            i = i + (189 - 188);
        }
    }
    {
        int i = (752 - 751);
        for (; smWNP7Jy >= i;) {
            {
                int zB0hEbpz = (91 - 90);
                for (; zB0hEbpz <= smWNP7Jy;) {
                    xp0toO7Mzu (i, zB0hEbpz, eqvNd0);
                    zB0hEbpz++;
                }
            }
            i = i + 1;
        }
    }
    if (eqvNd0 != Tux4FY9RoL3)
        CZN7VrTnLEWg (eqvNd0 + 1);
}

int WrJCZepL1 (int eqvNd0) {
    int nfSg1X = (491 - 491);
    {
        int i = 1;
        {
            if (0) {
                return 0;
            }
        }
        while (i <= smWNP7Jy) {
            {
                int zB0hEbpz = 1;
                while (zB0hEbpz <= smWNP7Jy) {
                    if (BmDUrthv0[i][zB0hEbpz][eqvNd0] == '@')
                        nfSg1X = nfSg1X + 1;
                    zB0hEbpz++;
                }
            }
            i++;
        }
    }
    return nfSg1X;
}

int main () {
    cout << WrJCZepL1 (Tux4FY9RoL3 -1);
    cin >> smWNP7Jy;
    QlxkA5SfgNqX ();
    cin >> Tux4FY9RoL3;
    CZN7VrTnLEWg ((220 - 220));
    return 0;
}

