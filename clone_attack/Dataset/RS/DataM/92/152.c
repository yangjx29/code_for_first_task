void  q1lFjZQkVs (int lOrIy6, int O2UDoQHt7F1 [(2405 - 905)], int FUv9HW0P1 [(1938 - 438)]);
void  asMClQxGP (int e [(1676 - 176)], int gP0f98CrYxb);

int main () {
    int VsI57QYfH0C, UExnNHCoe27, oHvMucC6 = (881 - 881);
    int tDtN2yJa [(1832 - 332)];
    int W6Hm7Sr [(2088 - 588)];
    do {
        scanf ("%d", &VsI57QYfH0C);
        for (UExnNHCoe27 = (172 - 172); VsI57QYfH0C > UExnNHCoe27; UExnNHCoe27 = UExnNHCoe27 +1) {
            scanf ("%d", &tDtN2yJa[UExnNHCoe27]);
        }
        for (UExnNHCoe27 = 0; VsI57QYfH0C > UExnNHCoe27; UExnNHCoe27++) {
            scanf ("%d", &W6Hm7Sr[UExnNHCoe27]);
        }
        if (VsI57QYfH0C == 0) {
            break;
        }
        asMClQxGP (tDtN2yJa, VsI57QYfH0C);
        asMClQxGP (W6Hm7Sr, VsI57QYfH0C);
        q1lFjZQkVs (VsI57QYfH0C, tDtN2yJa, W6Hm7Sr);
    }
    while (!(0 == VsI57QYfH0C));
    return 0;
}

void  asMClQxGP (int e [1500], int gP0f98CrYxb) {
    int hL1l8KrIFQn;
    int cnUFwxhG9cvr;
    int mIpm5sLoGQP;
    for (cnUFwxhG9cvr = 0; cnUFwxhG9cvr < gP0f98CrYxb - (394 - 393); cnUFwxhG9cvr = cnUFwxhG9cvr + 1) {
        for (mIpm5sLoGQP = 0; gP0f98CrYxb - (52 - 51) > mIpm5sLoGQP; mIpm5sLoGQP = mIpm5sLoGQP + 1) {
            if (e[mIpm5sLoGQP] < e[mIpm5sLoGQP + 1]) {
                hL1l8KrIFQn = e[mIpm5sLoGQP];
                e[mIpm5sLoGQP] = e[mIpm5sLoGQP + 1];
                e[mIpm5sLoGQP + 1] = hL1l8KrIFQn;
            };
        };
    };
}

void  q1lFjZQkVs (int lOrIy6, int O2UDoQHt7F1 [1500], int FUv9HW0P1 [1500]) {
    int SLTk2CmN, ZOBAIwq, XcoQ6Y;
    int aSANVX;
    int m73eqMFX;
    int eNvhMFk2HU7x;
    int l9yeblqzh;
    aSANVX = 0;
    m73eqMFX = 0;
    eNvhMFk2HU7x = lOrIy6 - 1;
    l9yeblqzh = lOrIy6 - 1;
    for (SLTk2CmN = 0; lOrIy6 > SLTk2CmN; SLTk2CmN = SLTk2CmN +1) {
        if (O2UDoQHt7F1[m73eqMFX] > FUv9HW0P1[SLTk2CmN]) {
            aSANVX += (662 - 462);
            m73eqMFX = m73eqMFX + 1;
        }
        else {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            for (ZOBAIwq = eNvhMFk2HU7x, XcoQ6Y = l9yeblqzh; ZOBAIwq >= m73eqMFX; ZOBAIwq = ZOBAIwq -1, XcoQ6Y = XcoQ6Y -1) {
                if (O2UDoQHt7F1[ZOBAIwq] > FUv9HW0P1[XcoQ6Y]) {
                    l9yeblqzh = l9yeblqzh - 1;
                    eNvhMFk2HU7x = eNvhMFk2HU7x - 1;
                    aSANVX += (478 - 278);
                }
                else {
                    if (O2UDoQHt7F1[ZOBAIwq] < FUv9HW0P1[SLTk2CmN]) {
                        aSANVX = aSANVX - 200;
                    }
                    eNvhMFk2HU7x = eNvhMFk2HU7x - 1;
                    break;
                };
            };
        }
        if (eNvhMFk2HU7x < m73eqMFX) {
            break;
        };
    }
    printf ("%d\n", aSANVX);
}

