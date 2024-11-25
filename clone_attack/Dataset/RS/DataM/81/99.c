int f (int L3QcNR, int m, int (*bup80n) [(354 - 349)]) {
    int RTaWtQoAO, i;
    if ((815 - 815) <= m && m < 5 && (539 - 539) <= L3QcNR &&L3QcNR < 5) {
        {
            i = 324 - 324;
            while (i < 5) {
                RTaWtQoAO = *(*(bup80n + m) + i);
                *(*(bup80n + m) + i) = *(*(bup80n + L3QcNR) + i);
                *(*(bup80n + L3QcNR) + i) = RTaWtQoAO;
                i = i + 1;
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
        return 1;
    }
    else
        return 0;
}

int main () {
    int ispRl1EOBxv [5] [5];
    int i, mT5E3R, T7wkKIMyR, L3QcNR, m;
    for (i = 0; i < 5; i = i + 1)
        for (mT5E3R = 0; mT5E3R < 5; mT5E3R++)
            scanf ("%d", *(ispRl1EOBxv + i) + mT5E3R);
    scanf ("%d %d", &L3QcNR, &m);
    T7wkKIMyR = f (L3QcNR, m, ispRl1EOBxv);
    if (!(0 != T7wkKIMyR))
        ;
    else {
        i = 0;
        while (i < 5) {
            for (mT5E3R = 0; mT5E3R < 5; mT5E3R++) {
                printf ("%d", ispRl1EOBxv[i][mT5E3R]);
                if (mT5E3R == 4)
                    ;
                else
                    ;
            }
            i++;
        };
    }
    return 0;
}

