int main () {
    int mOgo9qz6;
    int o0dVrtA;
    int O2NnkR;
    int UpIsXSo;
    mOgo9qz6 = (753 - 752);
    o0dVrtA = (351 - 351);
    int MF43ceU1 [300];
    int L5ThLrqiuXSt [300];
    int nv6YlNrC8;
    scanf ("%d", &nv6YlNrC8);
    for (O2NnkR = (922 - 922); nv6YlNrC8 > O2NnkR; O2NnkR++) {
        scanf ("%d", &L5ThLrqiuXSt[O2NnkR]);
    }
    printf ("%d", L5ThLrqiuXSt[0]);
    MF43ceU1[0] = L5ThLrqiuXSt[0];
    {
        O2NnkR = 1;
        while (O2NnkR < nv6YlNrC8) {
            {
                UpIsXSo = 0;
                while (mOgo9qz6 > UpIsXSo) {
                    if (L5ThLrqiuXSt[O2NnkR] == MF43ceU1[UpIsXSo]) {
                        o0dVrtA = 1;
                    }
                    UpIsXSo++;
                };
            }
            if (o0dVrtA == 0) {
                MF43ceU1[mOgo9qz6] = L5ThLrqiuXSt[O2NnkR];
                printf (",%d", L5ThLrqiuXSt[O2NnkR]);
                mOgo9qz6++;
            }
            O2NnkR++;
            o0dVrtA = 0;
        };
    }
    return 0;
}

