void  TAv7Z9 (int uqwZda7yISj [], int mCdWJ7) {
    int Ubv8pzHF6k;
    int hny3K4dhSNF;
    int IVf2XZTw0tl;
    {
        Ubv8pzHF6k = (329 - 329);
        while (mCdWJ7 > Ubv8pzHF6k) {
            for (hny3K4dhSNF = (988 - 988); hny3K4dhSNF < mCdWJ7 - Ubv8pzHF6k -(690 - 689); hny3K4dhSNF++) {
                if (uqwZda7yISj[hny3K4dhSNF + (58 - 57)] < uqwZda7yISj[hny3K4dhSNF]) {
                    IVf2XZTw0tl = uqwZda7yISj[hny3K4dhSNF];
                    uqwZda7yISj[hny3K4dhSNF] = uqwZda7yISj[hny3K4dhSNF + (153 - 152)];
                    uqwZda7yISj[hny3K4dhSNF + (300 - 299)] = IVf2XZTw0tl;
                }
            }
            Ubv8pzHF6k++;
        }
    }
}

int main () {
    int HyI0SiKruU [(563 - 63)], L3vSxVI7MHPe [500];
    int Ubv8pzHF6k, mCdWJ7, hny3K4dhSNF, V7VZXmKs;
    scanf ("%d", &mCdWJ7);
    {
        Ubv8pzHF6k = (715 - 715);
        while (mCdWJ7 > Ubv8pzHF6k) {
            scanf ("%d", &HyI0SiKruU[Ubv8pzHF6k]);
            Ubv8pzHF6k++;
        }
    }
    {
        hny3K4dhSNF = (235 - 235);
        Ubv8pzHF6k = 0;
        while (Ubv8pzHF6k < mCdWJ7) {
            if (HyI0SiKruU[Ubv8pzHF6k] % (995 - 993) != 0) {
                L3vSxVI7MHPe[hny3K4dhSNF] = HyI0SiKruU[Ubv8pzHF6k];
                hny3K4dhSNF++;
            }
            Ubv8pzHF6k++;
        }
    }
    for (Ubv8pzHF6k = mCdWJ7 - (484 - 483);; Ubv8pzHF6k--) {
        if (HyI0SiKruU[Ubv8pzHF6k] % (35 - 33) != 0) {
            V7VZXmKs = HyI0SiKruU[Ubv8pzHF6k];
            break;
        }
    }
    for (Ubv8pzHF6k = 0, hny3K4dhSNF = (217 - 216);; Ubv8pzHF6k++) {
        if (L3vSxVI7MHPe[Ubv8pzHF6k] != V7VZXmKs) {
            hny3K4dhSNF++;
        }
        else {
            break;
        }
    }
    TAv7Z9 (L3vSxVI7MHPe, hny3K4dhSNF);
    for (Ubv8pzHF6k = 0; Ubv8pzHF6k < hny3K4dhSNF - 1; Ubv8pzHF6k++) {
        printf ("%d,", L3vSxVI7MHPe[Ubv8pzHF6k]);
    }
    printf ("%d", L3vSxVI7MHPe[hny3K4dhSNF - 1]);
    return 0;
}

