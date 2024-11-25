int main () {
    int dgvhnNaZlMKV [51000], ZvIAPNbx01 [51000];
    int TG4Xo9mKv [11000];
    int JLOlMGyYh8, i, O4MZwqAc9th, mnTeCq, MKzxeDF;
    scanf ("%d", &JLOlMGyYh8);
    mnTeCq = 1;
    O4MZwqAc9th = 10000;
    for (i = 0; JLOlMGyYh8 > i; i = i + 1) {
        scanf ("%d%d", &dgvhnNaZlMKV[i], &ZvIAPNbx01[i]);
    }
    for (i = 0; i < 11000; i = i + 1) {
        TG4Xo9mKv[i] = 0;
    }
    for (i = 0; JLOlMGyYh8 > i; i++) {
        if (mnTeCq < dgvhnNaZlMKV[i]) {
            mnTeCq = dgvhnNaZlMKV[i];
        }
        if (O4MZwqAc9th > dgvhnNaZlMKV[i]) {
            O4MZwqAc9th = dgvhnNaZlMKV[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        if (mnTeCq < ZvIAPNbx01[i]) {
            mnTeCq = ZvIAPNbx01[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        if (ZvIAPNbx01[i] < O4MZwqAc9th) {
            O4MZwqAc9th = ZvIAPNbx01[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        };
    }
    for (i = 0; i < JLOlMGyYh8; i++) {
        for (MKzxeDF = 2 * dgvhnNaZlMKV[i] - 2; 2 * ZvIAPNbx01[i] - 2 >= MKzxeDF; MKzxeDF++) {
            TG4Xo9mKv[MKzxeDF] = 1;
        };
    }
    i = 1;
    for (MKzxeDF = 2 * O4MZwqAc9th -2; MKzxeDF <= 2 * mnTeCq - 2; MKzxeDF++)
        if (TG4Xo9mKv[MKzxeDF] == 0) {
            i = 0;
        }
    if (i != 0) {
        printf ("%d %d", O4MZwqAc9th, mnTeCq);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else {
        printf ("no");
    }
    return 0;
}

