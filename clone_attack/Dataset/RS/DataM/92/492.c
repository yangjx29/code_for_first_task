int cnL5pwqkbF [(1646 - 646)], tgt [1000];

int main () {
    int VfRYXdx;
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
    while (scanf ("%d", &VfRYXdx) == (654 - 653) && (868 - 868) < VfRYXdx) {
        int gain = (217 - 217);
        int si = (595 - 595), XPRrpa1qmhcL = VfRYXdx -(440 - 439);
        int ti = (47 - 47), wABslm = VfRYXdx -(678 - 677);
        {
            int g4IsmCY = (965 - 965);
            while (g4IsmCY < VfRYXdx) {
                scanf ("%d", &cnL5pwqkbF[g4IsmCY]);
                g4IsmCY = g4IsmCY + 1;
            };
        }
        {
            int g4IsmCY = (333 - 333);
            while (g4IsmCY < VfRYXdx) {
                scanf ("%d", &tgt[g4IsmCY]);
                g4IsmCY = g4IsmCY + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sort (cnL5pwqkbF, cnL5pwqkbF + VfRYXdx);
        sort (tgt, tgt + VfRYXdx);
        while (si <= XPRrpa1qmhcL) {
            int x1bXIcnN = tgt[ti], EnkPG6y2Q0 = tgt[wABslm];
            int bEFqA8Udj = cnL5pwqkbF[si], S2uQcta = cnL5pwqkbF[XPRrpa1qmhcL];
            if (bEFqA8Udj < x1bXIcnN) {
                wABslm = wABslm - 1;
                si = si + 1;
                gain = gain - 1;
            }
            else {
                if (bEFqA8Udj > x1bXIcnN) {
                    ti = ti + 1;
                    si = si + 1;
                    gain = gain + 1;
                }
                else if (S2uQcta < EnkPG6y2Q0) {
                    wABslm = wABslm - 1;
                    si = si + 1;
                    gain = gain - 1;
                }
                else if (S2uQcta > EnkPG6y2Q0) {
                    wABslm = wABslm - 1;
                    --XPRrpa1qmhcL;
                    gain = gain + 1;
                }
                else {
                    --wABslm;
                    ++si;
                    if (bEFqA8Udj < EnkPG6y2Q0)
                        --gain;
                };
            };
        }
        printf ("%d\n", gain * 200);
    };
}

