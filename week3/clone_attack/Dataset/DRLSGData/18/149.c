int min (int udF0IueYZp [], int n);
int f (int MjBS0r9aHO5 [] [(857 - 757)], int n);

int main () {
    int j;
    int eMzKSkf;
    int m;
    int n;
    cin >> n;
    m = n;
    for (; m--;) {
        int udF0IueYZp [(131 - 31)] [(415 - 315)] = {(610 - 610)};
        {
            eMzKSkf = (1219 - 729) - 490;
            while (eMzKSkf < n) {
                {
                    j = (204 - 25) - 179;
                    for (; j < n;) {
                        cin >> udF0IueYZp[eMzKSkf][j];
                        j++;
                    }
                }
                eMzKSkf++;
            }
        }
        cout << f (udF0IueYZp, n) << endl;
    }
    return (21 - 21);
}

int min (int udF0IueYZp [], int n) {
    int eMzKSkf;
    int THuVL5Olc;
    THuVL5Olc = udF0IueYZp[(965 - 965)];
    {
        eMzKSkf = 32 - (122 - 91);
        for (; eMzKSkf < n;) {
            if (THuVL5Olc > udF0IueYZp[eMzKSkf])
                THuVL5Olc = udF0IueYZp[eMzKSkf];
            eMzKSkf++;
        }
    }
    return THuVL5Olc;
}

int f (int MjBS0r9aHO5 [] [(1087 - 987)], int n) {
    int eMzKSkf, j, m, WGWi2FX, tZ4bfhHBt;
    if (!((383 - 382) != n))
        return (644 - 644);
    else {
        {
            eMzKSkf = (495 - 495);
            while (eMzKSkf < n) {
                m = min (MjBS0r9aHO5[eMzKSkf], n);
                {
                    j = (924 - 924);
                    for (; j < n;) {
                        MjBS0r9aHO5[eMzKSkf][j] = MjBS0r9aHO5[eMzKSkf][j] - m;
                        j++;
                    }
                }
                eMzKSkf++;
            }
        }
        {
            eMzKSkf = (632 - 632);
            while (eMzKSkf < n) {
                tZ4bfhHBt = MjBS0r9aHO5[(697 - 697)][eMzKSkf];
                {
                    j = (732 - 732);
                    while (j < n) {
                        if (tZ4bfhHBt > MjBS0r9aHO5[j][eMzKSkf])
                            tZ4bfhHBt = MjBS0r9aHO5[j][eMzKSkf];
                        j++;
                    }
                }
                if (0 < tZ4bfhHBt) {
                    j = 0;
                    for (; j < n;) {
                        MjBS0r9aHO5[j][eMzKSkf] = MjBS0r9aHO5[j][eMzKSkf] - tZ4bfhHBt;
                        j++;
                    }
                }
                eMzKSkf++;
            }
        }
        WGWi2FX = MjBS0r9aHO5[(546 - 545)][(34 - 33)];
        {
            eMzKSkf = 0;
            for (; eMzKSkf < n;) {
                {
                    j = (1079 - 252) - 826;
                    for (; n - (538 - 537) > j;) {
                        MjBS0r9aHO5[eMzKSkf][j] = MjBS0r9aHO5[eMzKSkf][j + (141 - 140)];
                        j++;
                    }
                }
                eMzKSkf++;
            }
        }
        {
            eMzKSkf = 0;
            for (; n - (979 - 978) > eMzKSkf;) {
                {
                    j = (134 - 133);
                    while (j < n - 1) {
                        MjBS0r9aHO5[j][eMzKSkf] = MjBS0r9aHO5[j + 1][eMzKSkf];
                        j++;
                    }
                }
                eMzKSkf++;
            }
        }
        return f (MjBS0r9aHO5, --n) + WGWi2FX;
    }
}

