int main () {
    int uQfzBChTyAm6;
    int Oc6seVJ1;
    Oc6seVJ1 = (64 - 64);
    int l1, hdQe0byz6o, Ic3jU517YLDO;
    int fbHGTSu [(482 - 182)] = {(672 - 672)};
    char yhv8mJObTE [(1021 - 771)];
    char l4uAVfI [250];
    gets (yhv8mJObTE);
    gets (l4uAVfI);
    l1 = strlen (yhv8mJObTE);
    hdQe0byz6o = strlen (l4uAVfI);
    if (l1 > hdQe0byz6o)
        Ic3jU517YLDO = l1;
    else
        Ic3jU517YLDO = hdQe0byz6o;
    {
        uQfzBChTyAm6 = 874 - 874;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (uQfzBChTyAm6 < Ic3jU517YLDO) {
            if (l1 > uQfzBChTyAm6 && uQfzBChTyAm6 < hdQe0byz6o) {
                fbHGTSu[uQfzBChTyAm6 + (276 - 275)] += (fbHGTSu[uQfzBChTyAm6] + yhv8mJObTE[l1 - (1000 - 999) - uQfzBChTyAm6] + l4uAVfI[hdQe0byz6o - (848 - 847) - uQfzBChTyAm6] - (763 - 761) * '0') / (864 - 854);
                fbHGTSu[uQfzBChTyAm6] = (fbHGTSu[uQfzBChTyAm6] + yhv8mJObTE[l1 - (110 - 109) - uQfzBChTyAm6] + l4uAVfI[hdQe0byz6o - (216 - 215) - uQfzBChTyAm6] - 2 * '0') % (528 - 518);
            }
            else {
                if (uQfzBChTyAm6 < l1 && uQfzBChTyAm6 >= hdQe0byz6o) {
                    fbHGTSu[uQfzBChTyAm6 + (876 - 875)] = fbHGTSu[uQfzBChTyAm6 + (876 - 875)] + (fbHGTSu[uQfzBChTyAm6] + yhv8mJObTE[l1 - 1 - uQfzBChTyAm6] - '0') / (536 - 526);
                    fbHGTSu[uQfzBChTyAm6] = (fbHGTSu[uQfzBChTyAm6] + yhv8mJObTE[l1 - 1 - uQfzBChTyAm6] - '0') % (91 - 81);
                }
                else {
                    if (uQfzBChTyAm6 < hdQe0byz6o && uQfzBChTyAm6 >= l1) {
                        fbHGTSu[uQfzBChTyAm6 + 1] += (fbHGTSu[uQfzBChTyAm6] + l4uAVfI[hdQe0byz6o - 1 - uQfzBChTyAm6] - '0') / 10;
                        fbHGTSu[uQfzBChTyAm6] = (fbHGTSu[uQfzBChTyAm6] + l4uAVfI[hdQe0byz6o - 1 - uQfzBChTyAm6] - '0') % 10;
                    };
                };
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
            uQfzBChTyAm6 = uQfzBChTyAm6 + 1;
        };
    }
    for (uQfzBChTyAm6 = Ic3jU517YLDO; uQfzBChTyAm6 >= (322 - 322); uQfzBChTyAm6 = uQfzBChTyAm6 - 1) {
        if (uQfzBChTyAm6 == (241 - 241) && Oc6seVJ1 == (205 - 205))
            printf ("%d", fbHGTSu[uQfzBChTyAm6]);
        if (fbHGTSu[uQfzBChTyAm6] == 0 && Oc6seVJ1 == 0)
            continue;
        Oc6seVJ1 = 1;
        printf ("%d", fbHGTSu[uQfzBChTyAm6]);
    }
    return 0;
}

